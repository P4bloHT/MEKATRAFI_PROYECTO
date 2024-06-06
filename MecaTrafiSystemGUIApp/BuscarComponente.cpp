#include "BuscarComponente.h"
#include "GenerateOrder.h"

System::Void MecaTrafiSystemGUIApp::BuscarComponente::dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    int componenteId = Convert::ToInt32(dgvComponentes->Rows[dgvComponentes->SelectedCells[0]->RowIndex]->Cells[0]->Value);
    MechanicComponent^ componente = Service::Queryallfajasid(componenteId);
    if(refForm->GetType()==GenerateOrder::typeid)
    ((GenerateOrder^)refForm)->AddComponentToGrid(componente);
}
