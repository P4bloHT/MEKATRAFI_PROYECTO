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
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::Button^ btnGenerarPedido;

















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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnGenerarPedido = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(120, 79);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(23, 20);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N° Cliente";
			this->label2->Click += gcnew System::EventHandler(this, &GenerateOrder::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cliente";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(283, 79);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(200, 26);
			this->txtID->TabIndex = 3;
			// 
			// txtNCliente
			// 
			this->txtNCliente->Location = System::Drawing::Point(283, 153);
			this->txtNCliente->Name = L"txtNCliente";
			this->txtNCliente->Size = System::Drawing::Size(200, 26);
			this->txtNCliente->TabIndex = 4;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(283, 240);
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
			this->dataGridView1->Location = System::Drawing::Point(81, 385);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1115, 150);
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
			this->button1->Location = System::Drawing::Point(988, 217);
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
			this->label4->Location = System::Drawing::Point(120, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Fecha de pedido";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(283, 325);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// ComponentID
			// 
			this->ComponentID->HeaderText = L"Id.";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->ReadOnly = true;
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
			// btnGenerarPedido
			// 
			this->btnGenerarPedido->Location = System::Drawing::Point(166, 627);
			this->btnGenerarPedido->Name = L"btnGenerarPedido";
			this->btnGenerarPedido->Size = System::Drawing::Size(267, 82);
			this->btnGenerarPedido->TabIndex = 13;
			this->btnGenerarPedido->Text = L"Generar pedido";
			this->btnGenerarPedido->UseVisualStyleBackColor = true;
			this->btnGenerarPedido->Click += gcnew System::EventHandler(this, &GenerateOrder::btnGenerarPedido_Click);
			// 
			// GenerateOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 759);
			this->Controls->Add(this->btnGenerarPedido);
			this->Controls->Add(this->dateTimePicker1);
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
	   void CalculateTotal() {
		   double total = 0;
		   for (int i = 0; i < dataGridView1->RowCount; i++) {
			   total += Double::Parse(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		   }
		   textBox1->Text = "" + total;
	   
	   }
	   public:
		   void AddComponentToGrid(MechanicComponent^ componente) {
			   dataGridView1->Rows->Add(gcnew array <String^>{"" + componente->Id, componente->Name, "" + componente->UnitaryPrice, "1", "" + componente->UnitaryPrice});
			   CalculateTotal();
		   }
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridView1->Columns[e->ColumnIndex]->Name == "Cantidad") {
		dataGridView1->Rows[e->RowIndex]->Cells[4]->Value =
			Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value) *
			Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[3]->Value);
	}
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
		orderProduct->Order = 

	}
}
};
}
