#include "BuscarComponente.h"
#include "GenerateOrder.h"


void MecaTrafiSystemGUIApp::BuscarComponente::ShowComponent() {
    dgvComponentes->Rows->Clear();
    for (int i = 0; i < componenteList->Count; i++) {
        MechanicComponent^ dish = componenteList[i];
        dgvComponentes->Rows->Add(gcnew array<String^> {"" + dish->Component_code, dish->Name, "" + dish->UnitaryPrice});
    }

}


System::Void MecaTrafiSystemGUIApp::BuscarComponente::btnBuscar_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ name = "%" + txtNombre->Text + "%";
    componenteList = Service::QueryAllComponentByName(name);
    
    ShowComponent();
}

System::Void MecaTrafiSystemGUIApp::BuscarComponente::dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{   //fajas
    if (dgvComponentes->Rows->Count <= 0) {
        MessageBox::Show("Debe encontrar por lo menos un componente");
        return;
    }

    String^ code = (dgvComponentes->Rows[dgvComponentes->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

    MechanicComponent^ componen = Service::QueryallcomponentByCode(code);

    if (refForm->GetType() == GenerateOrder::typeid)
        ((GenerateOrder^)refForm)->AddComponentToGrid(componen);
    this->Close();
   
    }

    //((GenerateOrder^)refForm)->Verifica_repetido(componente);

