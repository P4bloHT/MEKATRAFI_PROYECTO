#include "BuscarComponente.h"
#include "GenerateOrder.h"

System::Void MecaTrafiSystemGUIApp::BuscarComponente::dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{   //fajas
    int componenteId = Convert::ToInt32(dgvComponentes->Rows[dgvComponentes->SelectedCells[0]->RowIndex]->Cells[0]->Value);
    MechanicComponent^ faja = Service::Queryallfajasid(componenteId);
    MechanicComponent^ tornillo = Service::Queryalltornillosid(componenteId);
    MechanicComponent^ rodamiento = Service::Queryallrodamientosid(componenteId);
    MechanicComponent^ polea = Service::Queryallpoleasid(componenteId);
    MechanicComponent^ motorAC = Service::QueryallMotorACStockById(componenteId);
    MechanicComponent^ motorDC = Service::QueryallMotorDCStockById(componenteId);



    if (refForm->GetType() == GenerateOrder::typeid) {

        GenerateOrder^ generateOrderForm = (GenerateOrder^)refForm;

        // Agregar cada componente al grid del formulario padre
        if (faja != nullptr)
        {
            generateOrderForm->AddComponentToGrid(faja);
        }

        if (tornillo != nullptr)
        {
            generateOrderForm->AddComponentToGrid(tornillo);
        }

        if (rodamiento != nullptr)
        {
            generateOrderForm->AddComponentToGrid(rodamiento);
        }

        if (polea != nullptr)
        {
            generateOrderForm->AddComponentToGrid(polea);
        }

        //((GenerateOrder^)refForm)->AddComponentToGrid(faja);
        //((GenerateOrder^)refForm)->AddComponentToGrid(tornillo);
        //((GenerateOrder^)refForm)->AddComponentToGrid(rodamiento);
        //((GenerateOrder^)refForm)->AddComponentToGrid(polea);
        //((GenerateOrder^)refForm)->AddComponentToGrid(motorAC);
        //((GenerateOrder^)refForm)->AddComponentToGrid(motorDC);

        this->Close();
    }

    //((GenerateOrder^)refForm)->Verifica_repetido(componente);
}
