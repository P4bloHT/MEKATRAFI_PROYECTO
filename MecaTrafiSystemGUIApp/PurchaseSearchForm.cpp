#include "PurchaseSearchForm.h"
#include "GeneratePurchase.h"
System::Void MecaTrafiSystemGUIApp::PurchaseSearchForm::dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int componentId = Convert::ToInt32(dgvComponentes->Rows[dgvComponentes->SelectedCells[0]->RowIndex]->Cells[0]->Value);
	SupplyProduct^ PurchaseComponent = Service::QueryAllFajaPurchaseById(componentId);
	if (refform ->GetType()== GeneratePurchase::typeid)
		((GeneratePurchase^)refform)->AddComponentToGrid(PurchaseComponent);
	this->Close();
}
