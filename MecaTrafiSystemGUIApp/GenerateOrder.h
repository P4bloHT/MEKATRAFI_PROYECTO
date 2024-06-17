#pragma once

#include "BuscarComponente.h"

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GenerateOrder
	/// </summary>
	public ref class GenerateOrder : public System::Windows::Forms::Form
	{
	public:
		GenerateOrder(void)
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
		~GenerateOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Id;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNCliente;
	private: System::Windows::Forms::TextBox^ txtCliente;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ FechaPedido;






	private: System::Windows::Forms::Button^ btnGenerarPedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;

















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
			this->Id = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->FechaPedido = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnGenerarPedido = (gcnew System::Windows::Forms::Button());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(120, 32);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(37, 20);
			this->Id->TabIndex = 0;
			this->Id->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Código de ventas";
			this->label2->Click += gcnew System::EventHandler(this, &GenerateOrder::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cliente";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(283, 32);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(200, 26);
			this->txtID->TabIndex = 3;
			// 
			// txtNCliente
			// 
			this->txtNCliente->Location = System::Drawing::Point(283, 98);
			this->txtNCliente->Name = L"txtNCliente";
			this->txtNCliente->Size = System::Drawing::Size(200, 26);
			this->txtNCliente->TabIndex = 4;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(283, 168);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(200, 26);
			this->txtCliente->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->NombreComponente,
					this->ComponentID, this->PrecioComponente, this->Cantidad, this->Subtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(63, 307);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1115, 314);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GenerateOrder::dataGridView1_CellValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(853, 672);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Total (S/.)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(957, 669);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(991, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 72);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Agregar Componente";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GenerateOrder::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Fecha de pedido";
			// 
			// FechaPedido
			// 
			this->FechaPedido->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FechaPedido->Enabled = false;
			this->FechaPedido->Location = System::Drawing::Point(283, 238);
			this->FechaPedido->Name = L"FechaPedido";
			this->FechaPedido->Size = System::Drawing::Size(200, 26);
			this->FechaPedido->TabIndex = 12;
			this->FechaPedido->ValueChanged += gcnew System::EventHandler(this, &GenerateOrder::FechaPedido_ValueChanged);
			// 
			// btnGenerarPedido
			// 
			this->btnGenerarPedido->Location = System::Drawing::Point(189, 641);
			this->btnGenerarPedido->Name = L"btnGenerarPedido";
			this->btnGenerarPedido->Size = System::Drawing::Size(267, 82);
			this->btnGenerarPedido->TabIndex = 13;
			this->btnGenerarPedido->Text = L"Generar pedido";
			this->btnGenerarPedido->UseVisualStyleBackColor = true;
			this->btnGenerarPedido->Click += gcnew System::EventHandler(this, &GenerateOrder::btnGenerarPedido_Click);
			// 
			// NombreComponente
			// 
			this->NombreComponente->HeaderText = L"Componente";
			this->NombreComponente->MinimumWidth = 8;
			this->NombreComponente->Name = L"NombreComponente";
			this->NombreComponente->ReadOnly = true;
			this->NombreComponente->Width = 200;
			// 
			// ComponentID
			// 
			this->ComponentID->HeaderText = L"Descripción";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->ReadOnly = true;
			this->ComponentID->Width = 300;
			// 
			// PrecioComponente
			// 
			this->PrecioComponente->HeaderText = L"P.U.";
			this->PrecioComponente->MinimumWidth = 8;
			this->PrecioComponente->Name = L"PrecioComponente";
			this->PrecioComponente->ReadOnly = true;
			this->PrecioComponente->Width = 150;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 8;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 150;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->MinimumWidth = 8;
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->ReadOnly = true;
			this->Subtotal->Width = 150;
			// 
			// GenerateOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 759);
			this->Controls->Add(this->btnGenerarPedido);
			this->Controls->Add(this->FechaPedido);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->txtNCliente);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Id);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"GenerateOrder";
			this->Text = L"GenerateOrder";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	BuscarComponente^ buscar = gcnew BuscarComponente(this);
	buscar->ShowDialog();
}
	   
	public:
	   void Verifica_repetido() {
		   int celdaID = 0;
		   int celdaIDSig = 0;

		   for (int i = 0; i <= dataGridView1->RowCount; i++) {
			   for (int j = 1; j <= dataGridView1->RowCount; j++) {
				   celdaID = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
				   celdaIDSig = Convert::ToInt32(dataGridView1->Rows[j]->Cells[0]->Value);

				   if (celdaID==celdaIDSig) {
					   MessageBox::Show("Ya se encuentra el producto en tu lista");

					   return;
				   }

			   }
		   }
	   }
	   void CalculateTotal() {
		   double total = 0;
		   for (int i = 0; i < dataGridView1->RowCount; i++) {
			   total += Double::Parse(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		   }
		   textBox1->Text = "" + total;
		   //Verifica_repetido();
	   }

	   public:
		   void AddComponentToGrid(MechanicComponent^ componente) {


			   dataGridView1->Rows->Add(gcnew array <String^>{"" + componente->Name, componente->Description, "" + componente->UnitaryPrice, "1", "" + componente->UnitaryPrice});
			   

			   //Comparar con el GRID de Generar mensaje si se repite el producto por su ID

			  
			   
			   CalculateTotal();


		   }
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	
	
	if (dataGridView1->Columns[e->ColumnIndex]->Name == "Cantidad") {
		dataGridView1->Rows[e->RowIndex]->Cells[4]->Value =
			Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value) *
			Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[3]->Value);
	}
	CalculateTotal();
}
private: System::Void btnGenerarPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleOrder^ order = gcnew SaleOrder();
	order->id = Convert::ToInt32(txtID->Text);
	order->Date = DateTime::Now.ToString();
	order->NumberCustomer = Convert::ToInt32(txtNCliente->Text);
	order->TotalPrice = Convert::ToDouble(textBox1->Text);
	order->Client = Service::GetAnnonymusClient();
	order->OrderMeca = gcnew List<OrderProduct^>();

	for (int i = 0; i < dataGridView1->RowCount; i++) {
		OrderProduct^ orderProduct = gcnew OrderProduct();
		orderProduct->id = i + 1;
		int componentId = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value->ToString());

		// Consultar el componente basado en su tipo (ejemplo)
		
		String^ componentType = Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value->ToString()); // Extraer prefijo "FAJA"

		MechanicComponent^ componente = nullptr;
		
		if (componentType == "FAJA") {
			componente = Service::Queryallfajasid(componentId);
		}

		if (componentType == "TORNILLO") {
			componente = Service::Queryalltornillosid(componentId);
		}

		if (componentType == "Polea") {
			componente = Service::Queryallpoleasid(componentId);
		}

		if (componentType == "Rodamientito") {
			componente = Service::Queryallrodamientosid(componentId);
		}



		if (componente != nullptr)
		{
			orderProduct->componente = componente;
			orderProduct->Quantity = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
			orderProduct->Subtotal = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
			order->OrderMeca->Add(orderProduct);
		}
		else
		{
			// Mensaje de error si no se encuentra el componente
			MessageBox::Show("Producto no disponible");
		}
	}

	int res = Service::RegisterOrder(order);

	if (res == 1)
	{
		MessageBox::Show("Se ha registrado de manera exitosa.");
	}
	/*	orderProduct->componente = Service::Queryallfajasid(Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value->ToString()));
		orderProduct->Quantity = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
		orderProduct->Subtotal = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		order->OrderMeca->Add(orderProduct);
	}
	int res = Service::RegisterOrder(order);

	if (res == 1) {
		MessageBox::Show("Se ha registrado de manera exitosa.");
	}*/
}
private: System::Void FechaPedido_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	//FechaPedido->Enabled = false;
}
};
}
