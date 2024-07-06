#pragma once
#include "PurchaseSearchForm.h"

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GeneratePurchase
	/// </summary>
	public ref class GeneratePurchase : public System::Windows::Forms::Form
	{
	public:
		GeneratePurchase(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GeneratePurchase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_agregar_componentes;
	private: System::Windows::Forms::TextBox^ txtTotal;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvOrderPurchaseProducts;

	private: System::Windows::Forms::TextBox^ txtTienda;









	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::Button^ btnGenerateOrder;




















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_agregar_componentes = (gcnew System::Windows::Forms::Button());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvOrderPurchaseProducts = (gcnew System::Windows::Forms::DataGridView());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtTienda = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->btnGenerateOrder = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrderPurchaseProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_agregar_componentes
			// 
			this->btn_agregar_componentes->Location = System::Drawing::Point(582, 86);
			this->btn_agregar_componentes->Margin = System::Windows::Forms::Padding(2);
			this->btn_agregar_componentes->Name = L"btn_agregar_componentes";
			this->btn_agregar_componentes->Size = System::Drawing::Size(146, 47);
			this->btn_agregar_componentes->TabIndex = 19;
			this->btn_agregar_componentes->Text = L"Agregar Componente";
			this->btn_agregar_componentes->UseVisualStyleBackColor = true;
			this->btn_agregar_componentes->Click += gcnew System::EventHandler(this, &GeneratePurchase::btn_agregar_componentes_Click);
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(622, 434);
			this->txtTotal->Margin = System::Windows::Forms::Padding(2);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(133, 20);
			this->txtTotal->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(553, 436);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Total (S/.)";
			// 
			// dgvOrderPurchaseProducts
			// 
			this->dgvOrderPurchaseProducts->AllowUserToAddRows = false;
			this->dgvOrderPurchaseProducts->AllowUserToDeleteRows = false;
			this->dgvOrderPurchaseProducts->AllowUserToResizeColumns = false;
			this->dgvOrderPurchaseProducts->AllowUserToResizeRows = false;
			this->dgvOrderPurchaseProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrderPurchaseProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ComponentID,
					this->NombreComponente, this->PrecioComponente, this->Cantidad, this->Subtotal
			});
			this->dgvOrderPurchaseProducts->Location = System::Drawing::Point(11, 246);
			this->dgvOrderPurchaseProducts->Margin = System::Windows::Forms::Padding(2);
			this->dgvOrderPurchaseProducts->Name = L"dgvOrderPurchaseProducts";
			this->dgvOrderPurchaseProducts->RowHeadersWidth = 62;
			this->dgvOrderPurchaseProducts->RowTemplate->Height = 28;
			this->dgvOrderPurchaseProducts->Size = System::Drawing::Size(858, 140);
			this->dgvOrderPurchaseProducts->TabIndex = 16;
			this->dgvOrderPurchaseProducts->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GeneratePurchase::dgvOrderPurchaseProducts_CellValueChanged);
			// 
			// ComponentID
			// 
			this->ComponentID->FillWeight = 50;
			this->ComponentID->HeaderText = L"Id.";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->ReadOnly = true;
			this->ComponentID->Width = 30;
			// 
			// NombreComponente
			// 
			this->NombreComponente->HeaderText = L"Componente";
			this->NombreComponente->MinimumWidth = 8;
			this->NombreComponente->Name = L"NombreComponente";
			this->NombreComponente->ReadOnly = true;
			this->NombreComponente->Width = 150;
			// 
			// PrecioComponente
			// 
			this->PrecioComponente->HeaderText = L"P.U.";
			this->PrecioComponente->MinimumWidth = 8;
			this->PrecioComponente->Name = L"PrecioComponente";
			this->PrecioComponente->ReadOnly = true;
			this->PrecioComponente->Width = 50;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 8;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 50;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->MinimumWidth = 8;
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->ReadOnly = true;
			this->Subtotal->Width = 50;
			// 
			// txtTienda
			// 
			this->txtTienda->Location = System::Drawing::Point(218, 125);
			this->txtTienda->Margin = System::Windows::Forms::Padding(2);
			this->txtTienda->Name = L"txtTienda";
			this->txtTienda->Size = System::Drawing::Size(168, 20);
			this->txtTienda->TabIndex = 15;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(218, 47);
			this->txtID->Margin = System::Windows::Forms::Padding(2);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(168, 20);
			this->txtID->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(107, 125);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Tienda";
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(110, 47);
			this->Id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(16, 13);
			this->Id->TabIndex = 10;
			this->Id->Text = L"Id";
			// 
			// btnGenerateOrder
			// 
			this->btnGenerateOrder->Location = System::Drawing::Point(113, 419);
			this->btnGenerateOrder->Name = L"btnGenerateOrder";
			this->btnGenerateOrder->Size = System::Drawing::Size(147, 47);
			this->btnGenerateOrder->TabIndex = 20;
			this->btnGenerateOrder->Text = L"Generar Orden";
			this->btnGenerateOrder->UseVisualStyleBackColor = true;
			this->btnGenerateOrder->Click += gcnew System::EventHandler(this, &GeneratePurchase::btnGenerateOrder_Click);
			// 
			// GeneratePurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 526);
			this->Controls->Add(this->btnGenerateOrder);
			this->Controls->Add(this->btn_agregar_componentes);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvOrderPurchaseProducts);
			this->Controls->Add(this->txtTienda);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Id);
			this->Name = L"GeneratePurchase";
			this->Text = L"GeneratePurchase";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrderPurchaseProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_agregar_componentes_Click(System::Object^ sender, System::EventArgs^ e) {
		//Buscar el componente para agregar productos disponibles en las tiendas
		PurchaseSearchForm^ purchaseSearchForm = gcnew PurchaseSearchForm(this); //Se usa el This debido a que ahora este Form necesita un parametro
		purchaseSearchForm->ShowDialog();
	}
		   void CalculateTotal() {
			   double total = 0;
			   for (int i = 0; i < dgvOrderPurchaseProducts->RowCount; i++)
				   total += Double::Parse(dgvOrderPurchaseProducts->Rows[i]->Cells[4]->Value->ToString());
			   txtTotal->Text = "" + total;
		   }
	public:
		void AddComponentToGrid(SupplyProduct^ CompraProducto) {
			dgvOrderPurchaseProducts->Rows->Add(gcnew array<String^> { "" + CompraProducto->Id, CompraProducto->Name, "" + CompraProducto->UnitaryPrice,"","" + CompraProducto->UnitaryPrice});
			CalculateTotal();
		};
		
private: System::Void dgvOrderPurchaseProducts_CellValueChanged(System::Object^ sender, 
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvOrderPurchaseProducts->Columns[e->ColumnIndex]->Name == "Cantidad") {
		dgvOrderPurchaseProducts->Rows[e->RowIndex]->Cells[4]->Value =
			Convert::ToDouble(dgvOrderPurchaseProducts->Rows[e->RowIndex]->Cells[2]->Value) *
			Convert::ToInt32(dgvOrderPurchaseProducts->Rows[e->RowIndex]->Cells[3]->Value);
	}
	CalculateTotal();
}
private: System::Void btnGenerateOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	//Realizar las validaciones necesarias en el formulario
	PurchaseOrder^ order = gcnew PurchaseOrder();
	order-> id = Convert::ToInt32(txtID->Text);
	order->Date = DateTime::Now.ToString();
	order->TotalPrice = Convert::ToDouble(txtTotal->Text);
	order->Store = Service::GetGenericStore();
	order->OrderSuplies = gcnew List < OrderSupplier ^> (); 
	for (int i = 0; i < dgvOrderPurchaseProducts->RowCount; i++) {
		OrderSupplier^ orderSuplier = gcnew OrderSupplier();
		orderSuplier->Id = i + 1;
		//Consultar el componentes basado en su tipo
		int productoId = Convert::ToInt32(dgvOrderPurchaseProducts->Rows[i]->Cells[0]->Value->ToString());
		String^ TipoProducto = Convert::ToString(dgvOrderPurchaseProducts->Rows[i]->Cells[1]->Value->ToString());
		SupplyProduct^ productoCompra = nullptr;
		
		if (TipoProducto == "FAJA") {
			productoCompra = Service::QueryAllFajaPurchaseById(productoId);
		}

		if (TipoProducto == "TORNILLO") {
			productoCompra = Service::QueryAllTornilloPurchaseById(productoId);
		}

		if (TipoProducto == "Polea") {
			productoCompra = Service::QueryAllPoleaByIdPurchase(productoId);
		}

		if (TipoProducto == "Rodamiento") {
			productoCompra = Service::QueryAllRodamientoPurchaseById(productoId);
		}


			orderSuplier->ProductoCompra = productoCompra;
			orderSuplier->Quantity = Convert::ToInt32(dgvOrderPurchaseProducts->Rows[i]->Cells[3]->Value->ToString());
			orderSuplier->Subtotal = Convert::ToInt32(dgvOrderPurchaseProducts->Rows[i]->Cells[4]->Value->ToString());
			order->OrderSuplies->Add(orderSuplier);
	}
	int res = Service::RegisterPurchase(order);
	if (res == 1)
		MessageBox::Show("Se ha registrado la orden de compra de manera exitosa. ");
}
};
}
