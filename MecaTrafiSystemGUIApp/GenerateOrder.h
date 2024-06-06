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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderDetailID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;






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
			this->OrderDetailID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(121, 102);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(23, 20);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N° Cliente";
			this->label2->Click += gcnew System::EventHandler(this, &GenerateOrder::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(121, 266);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cliente";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(284, 102);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 26);
			this->txtID->TabIndex = 3;
			// 
			// txtNCliente
			// 
			this->txtNCliente->Location = System::Drawing::Point(284, 176);
			this->txtNCliente->Name = L"txtNCliente";
			this->txtNCliente->Size = System::Drawing::Size(100, 26);
			this->txtNCliente->TabIndex = 4;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(284, 263);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(100, 26);
			this->txtCliente->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->OrderDetailID,
					this->ComponentID, this->NombreComponente, this->PrecioComponente, this->Cantidad, this->Subtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(81, 385);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1115, 150);
			this->dataGridView1->TabIndex = 6;
			// 
			// OrderDetailID
			// 
			this->OrderDetailID->HeaderText = L"Núm";
			this->OrderDetailID->MinimumWidth = 8;
			this->OrderDetailID->Name = L"OrderDetailID";
			this->OrderDetailID->Width = 150;
			// 
			// ComponentID
			// 
			this->ComponentID->HeaderText = L"Id.";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->Width = 150;
			// 
			// NombreComponente
			// 
			this->NombreComponente->HeaderText = L"Componente";
			this->NombreComponente->MinimumWidth = 8;
			this->NombreComponente->Name = L"NombreComponente";
			this->NombreComponente->Width = 300;
			// 
			// PrecioComponente
			// 
			this->PrecioComponente->HeaderText = L"P.U.";
			this->PrecioComponente->MinimumWidth = 8;
			this->PrecioComponente->Name = L"PrecioComponente";
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
			this->Subtotal->Width = 150;
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
			// GenerateOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 759);
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
	BuscarComponente^ buscar = gcnew BuscarComponente();
	buscar->Show();
}
};
}
