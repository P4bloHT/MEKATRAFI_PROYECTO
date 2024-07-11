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

	protected:


	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNCliente;
	private: System::Windows::Forms::TextBox^ txtCliente;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DateTimePicker^ FechaPedido;






	private: System::Windows::Forms::Button^ btnGenerarPedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



























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
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->FechaPedido = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnGenerarPedido = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
				this->ComponentID,
					this->NombreComponente, this->PrecioComponente, this->Cantidad, this->Subtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(63, 307);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1115, 314);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GenerateOrder::dataGridView1_CellValueChanged);
			// 
			// ComponentID
			// 
			this->ComponentID->HeaderText = L"Id";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->ReadOnly = true;
			this->ComponentID->Width = 150;
			// 
			// NombreComponente
			// 
			this->NombreComponente->HeaderText = L"Componente";
			this->NombreComponente->MinimumWidth = 8;
			this->NombreComponente->Name = L"NombreComponente";
			this->NombreComponente->ReadOnly = true;
			this->NombreComponente->Width = 200;
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(957, 669);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 26);
			this->textBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(857, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(341, 68);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Agregar Componente";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GenerateOrder::button1_Click);
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
			this->btnGenerarPedido->BackColor = System::Drawing::Color::SandyBrown;
			this->btnGenerarPedido->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerarPedido->ForeColor = System::Drawing::SystemColors::Control;
			this->btnGenerarPedido->Location = System::Drawing::Point(129, 647);
			this->btnGenerarPedido->Name = L"btnGenerarPedido";
			this->btnGenerarPedido->Size = System::Drawing::Size(267, 68);
			this->btnGenerarPedido->TabIndex = 13;
			this->btnGenerarPedido->Text = L"Generar pedido";
			this->btnGenerarPedido->UseVisualStyleBackColor = false;
			this->btnGenerarPedido->Click += gcnew System::EventHandler(this, &GenerateOrder::btnGenerarPedido_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(125, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 23);
			this->label5->TabIndex = 24;
			this->label5->Text = L"DNI";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(120, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 46);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Código de \r\nventas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 23);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Cliente";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(125, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 46);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Fecha de\r\npedido\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(805, 672);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 23);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Total (S/.)";
			// 
			// GenerateOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1270, 759);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnGenerarPedido);
			this->Controls->Add(this->FechaPedido);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->txtNCliente);
			this->Controls->Add(this->txtID);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"GenerateOrder";
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


			   dataGridView1->Rows->Add(gcnew array <String^>{"" + componente->Id, componente->Name, "" + componente->UnitaryPrice, "1", "" + componente->UnitaryPrice});
			   

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
		
		if (componentType == "Fajota") {
			componente = Service::Queryallfajasid(componentId);
		}

		if (componentType == "Tornillito" || componentType == "Tornillo") {
			componente = Service::Queryalltornillosid(componentId);
		}

		if (componentType == "Polea" || componentType == "Poleita") {
			componente = Service::Queryallpoleasid(componentId);
		}

		if (componentType == "rodamientito") {
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
