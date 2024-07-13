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
	private: System::Windows::Forms::DataGridView^ dgvtransacciones;


	private: System::Windows::Forms::Button^ btnaddtransacciones;


	private: System::Windows::Forms::DateTimePicker^ FechaPedido;

	private: System::Windows::Forms::Button^ btnGenerarPedido;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtcodpucp;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtdescuentos;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtreponVENTA;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtnumoperacion;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txttotalCONIGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioComponente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Subtotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;

	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::Button^ btnPreview; 



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
			this->dgvtransacciones = (gcnew System::Windows::Forms::DataGridView());
			this->ComponentID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioComponente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Subtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnaddtransacciones = (gcnew System::Windows::Forms::Button());
			this->FechaPedido = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnGenerarPedido = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtcodpucp = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtdescuentos = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtreponVENTA = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtnumoperacion = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txttotalCONIGV = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->btnPreview = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtransacciones))->BeginInit();
			this->SuspendLayout();
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(202, 82);
			this->txtID->Margin = System::Windows::Forms::Padding(2);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(135, 20);
			this->txtID->TabIndex = 3;
			// 
			// txtNCliente
			// 
			this->txtNCliente->Location = System::Drawing::Point(490, 95);
			this->txtNCliente->Margin = System::Windows::Forms::Padding(2);
			this->txtNCliente->Name = L"txtNCliente";
			this->txtNCliente->Size = System::Drawing::Size(135, 20);
			this->txtNCliente->TabIndex = 4;
			// 
			// txtCliente
			// 
			this->txtCliente->Location = System::Drawing::Point(202, 123);
			this->txtCliente->Margin = System::Windows::Forms::Padding(2);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(135, 20);
			this->txtCliente->TabIndex = 5;
			// 
			// dgvtransacciones
			// 
			this->dgvtransacciones->AllowUserToAddRows = false;
			this->dgvtransacciones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvtransacciones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ComponentID,
					this->NombreComponente, this->PrecioComponente, this->Cantidad, this->Subtotal, this->Marca
			});
			this->dgvtransacciones->Location = System::Drawing::Point(101, 209);
			this->dgvtransacciones->Margin = System::Windows::Forms::Padding(2);
			this->dgvtransacciones->Name = L"dgvtransacciones";
			this->dgvtransacciones->RowHeadersWidth = 62;
			this->dgvtransacciones->RowTemplate->Height = 28;
			this->dgvtransacciones->Size = System::Drawing::Size(726, 173);
			this->dgvtransacciones->TabIndex = 6;
			this->dgvtransacciones->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GenerateOrder::dgvtransacciones_CellContentClick);
			this->dgvtransacciones->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GenerateOrder::dataGridView1_CellValueChanged);
			// 
			// ComponentID
			// 
			this->ComponentID->HeaderText = L"Id";
			this->ComponentID->MinimumWidth = 8;
			this->ComponentID->Name = L"ComponentID";
			this->ComponentID->ReadOnly = true;
			this->ComponentID->Width = 70;
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
			this->PrecioComponente->Width = 80;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 8;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 80;
			// 
			// Subtotal
			// 
			this->Subtotal->HeaderText = L"Subtotal";
			this->Subtotal->MinimumWidth = 8;
			this->Subtotal->Name = L"Subtotal";
			this->Subtotal->ReadOnly = true;
			this->Subtotal->Width = 150;
			// 
			// Marca
			// 
			this->Marca->HeaderText = L"Marca";
			this->Marca->Name = L"Marca";
			// 
			// btnaddtransacciones
			// 
			this->btnaddtransacciones->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnaddtransacciones->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnaddtransacciones->ForeColor = System::Drawing::SystemColors::Control;
			this->btnaddtransacciones->Location = System::Drawing::Point(648, 123);
			this->btnaddtransacciones->Margin = System::Windows::Forms::Padding(2);
			this->btnaddtransacciones->Name = L"btnaddtransacciones";
			this->btnaddtransacciones->Size = System::Drawing::Size(227, 44);
			this->btnaddtransacciones->TabIndex = 9;
			this->btnaddtransacciones->Text = L"Agregar Componente";
			this->btnaddtransacciones->UseVisualStyleBackColor = false;
			this->btnaddtransacciones->Click += gcnew System::EventHandler(this, &GenerateOrder::button1_Click);
			// 
			// FechaPedido
			// 
			this->FechaPedido->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FechaPedido->Enabled = false;
			this->FechaPedido->Location = System::Drawing::Point(740, 49);
			this->FechaPedido->Margin = System::Windows::Forms::Padding(2);
			this->FechaPedido->Name = L"FechaPedido";
			this->FechaPedido->Size = System::Drawing::Size(135, 20);
			this->FechaPedido->TabIndex = 12;
			this->FechaPedido->ValueChanged += gcnew System::EventHandler(this, &GenerateOrder::FechaPedido_ValueChanged);
			// 
			// btnGenerarPedido
			// 
			this->btnGenerarPedido->BackColor = System::Drawing::Color::SandyBrown;
			this->btnGenerarPedido->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerarPedido->ForeColor = System::Drawing::SystemColors::Control;
			this->btnGenerarPedido->Location = System::Drawing::Point(115, 410);
			this->btnGenerarPedido->Margin = System::Windows::Forms::Padding(2);
			this->btnGenerarPedido->Name = L"btnGenerarPedido";
			this->btnGenerarPedido->Size = System::Drawing::Size(178, 44);
			this->btnGenerarPedido->TabIndex = 13;
			this->btnGenerarPedido->Text = L"Generar pedido";
			this->btnGenerarPedido->UseVisualStyleBackColor = false;
			this->btnGenerarPedido->Click += gcnew System::EventHandler(this, &GenerateOrder::btnGenerarPedido_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(96, 82);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 17);
			this->label5->TabIndex = 24;
			this->label5->Text = L"DNI";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(370, 95);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 34);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Código de \r\nventas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(96, 125);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Cliente";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(642, 46);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 34);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Fecha de\r\npedido\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 49);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 30;
			this->label1->Text = L"CODIGO PUCP";
			// 
			// txtcodpucp
			// 
			this->txtcodpucp->Location = System::Drawing::Point(202, 46);
			this->txtcodpucp->Margin = System::Windows::Forms::Padding(2);
			this->txtcodpucp->Name = L"txtcodpucp";
			this->txtcodpucp->Size = System::Drawing::Size(135, 20);
			this->txtcodpucp->TabIndex = 29;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(61, 164);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 17);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Descuentos";
			// 
			// txtdescuentos
			// 
			this->txtdescuentos->Location = System::Drawing::Point(202, 164);
			this->txtdescuentos->Margin = System::Windows::Forms::Padding(2);
			this->txtdescuentos->Name = L"txtdescuentos";
			this->txtdescuentos->Size = System::Drawing::Size(135, 20);
			this->txtdescuentos->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(370, 46);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 34);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Responsable \r\nde venta";
			// 
			// txtreponVENTA
			// 
			this->txtreponVENTA->Location = System::Drawing::Point(490, 48);
			this->txtreponVENTA->Margin = System::Windows::Forms::Padding(2);
			this->txtreponVENTA->Name = L"txtreponVENTA";
			this->txtreponVENTA->Size = System::Drawing::Size(135, 20);
			this->txtreponVENTA->TabIndex = 34;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(370, 161);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 17);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Nº Operacion";
			// 
			// txtnumoperacion
			// 
			this->txtnumoperacion->Location = System::Drawing::Point(490, 161);
			this->txtnumoperacion->Margin = System::Windows::Forms::Padding(2);
			this->txtnumoperacion->Name = L"txtnumoperacion";
			this->txtnumoperacion->Size = System::Drawing::Size(135, 20);
			this->txtnumoperacion->TabIndex = 36;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(536, 416);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(144, 17);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Total con IGV (S/.)";
			// 
			// txttotalCONIGV
			// 
			this->txttotalCONIGV->Location = System::Drawing::Point(694, 416);
			this->txttotalCONIGV->Margin = System::Windows::Forms::Padding(2);
			this->txttotalCONIGV->Name = L"txttotalCONIGV";
			this->txttotalCONIGV->Size = System::Drawing::Size(114, 20);
			this->txttotalCONIGV->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(147, 9);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 17);
			this->label11->TabIndex = 40;
			this->label11->Text = L"CLIENTE";
			this->label11->Click += gcnew System::EventHandler(this, &GenerateOrder::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(448, 9);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 17);
			this->label12->TabIndex = 41;
			this->label12->Text = L"EMPLEADO";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(351, 416);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 33);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Imprimir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GenerateOrder::button1_Click_1);
			// 
			// btnPreview
			// 
			this->btnPreview->Location = System::Drawing::Point(0, 0);
			this->btnPreview->Name = L"btnPreview";
			this->btnPreview->Size = System::Drawing::Size(75, 23);
			this->btnPreview->TabIndex = 0;
			// 
			// GenerateOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(901, 487);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txttotalCONIGV);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtnumoperacion);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtreponVENTA);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtdescuentos);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtcodpucp);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnGenerarPedido);
			this->Controls->Add(this->FechaPedido);
			this->Controls->Add(this->btnaddtransacciones);
			this->Controls->Add(this->dgvtransacciones);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->txtNCliente);
			this->Controls->Add(this->txtID);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GenerateOrder";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtransacciones))->EndInit();
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

		   for (int i = 0; i <= dgvtransacciones->RowCount; i++) {
			   for (int j = 1; j <= dgvtransacciones->RowCount; j++) {
				   celdaID = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[0]->Value);
				   celdaIDSig = Convert::ToInt32(dgvtransacciones->Rows[j]->Cells[0]->Value);

				   if (celdaID==celdaIDSig) {
					   MessageBox::Show("Ya se encuentra el producto en tu lista");

					   return;
				   }

			   }
		   }
	   }
	   void CalculateTotal() {
		   double total = 0;
		   for (int i = 0; i < dgvtransacciones->RowCount; i++) {
			   total += Double::Parse(dgvtransacciones->Rows[i]->Cells[4]->Value->ToString());
		   }
		   txttotalCONIGV->Text = "" + total;
		   //Verifica_repetido();
	   }

	   public:
		   static int nextComponentId = 1; 
		   void AddComponentToGrid(MechanicComponent^ componente) {


			   // Generar un ID único
			   int uniqueId = nextComponentId++;

			   // Agregar la fila al DataGridView con el ID único
			   dgvtransacciones->Rows->Add(gcnew array<String^>{
				   "" + uniqueId, // ID único en la primera columna
					  // componente->Component_code,
					   componente->Name,
					   "" + componente->UnitaryPrice,
					   "1",
					   "" + componente->Stock,
					   componente->Brand
			   });

			   // Comparar con el GRID de Generar mensaje si se repite el producto por su ID
			   // (esto aún no está implementado en el código proporcionado)

			   // Calcular el total
			   CalculateTotal();


		   }
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	
	
	if (dgvtransacciones->Columns[e->ColumnIndex]->Name == "Cantidad") {
		dgvtransacciones->Rows[e->RowIndex]->Cells[4]->Value =
			Convert::ToDouble(dgvtransacciones->Rows[e->RowIndex]->Cells[2]->Value) *
			Convert::ToInt32(dgvtransacciones->Rows[e->RowIndex]->Cells[3]->Value);
	}
	CalculateTotal();
}
private: System::Void btnGenerarPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleOrder^ order = gcnew SaleOrder();
	order->DNI = Convert::ToInt32(txtID->Text);
 
	order->Date = DateTime::Now.ToString();
	//order->Client = Convert::ToInt32(txtNCliente->Text);
	order->NumberCustomer = Convert::ToInt32(txtNCliente->Text);
	order->Codigopucp = Convert::ToInt32(txtcodpucp->Text); 
	order->Descuento = Convert::ToInt32(txtdescuentos->Text);
	order->Responsableventa = Convert::ToString(txtreponVENTA->Text);
	order->CodVentas = Convert::ToString(txtNCliente->Text);
	order->Descuento = Convert::ToInt32(txtnumoperacion->Text);
	order->TotalPrice = Convert::ToDouble(txttotalCONIGV->Text);
	order->Client = Service::GetAnnonymusClient();
	order->OrderMeca = gcnew List<OrderProduct^>();

	for (int i = 0; i < dgvtransacciones->RowCount; i++) {
		OrderProduct^ orderProduct = gcnew OrderProduct();
		orderProduct->id = i + 1;

		int componenteId = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[0]->Value->ToString());
		String^ componenteType = dgvtransacciones->Rows[i]->Cells[1]->Value->ToString(); // Supongamos que el tipo de componente está en la celda 1

		if (componenteType == "FAJA") {
			orderProduct->componente = Service::Queryallfajasid(componenteId);
		}
		else if (componenteType == "POLEA") {
			orderProduct->componente = Service::Queryallpoleasid(componenteId);
		}
		else if (componenteType == "RODAMIENTO") {
			orderProduct->componente = Service::Queryallrodamientosid(componenteId);
		}
		else if (componenteType == "TORNILLO") {
			orderProduct->componente = Service::Queryalltornillosid(componenteId);
		}
		else if (componenteType == "MOTORAC") {
			orderProduct->componente = Service::QueryallMotorACStockById(componenteId);
		}
		else if (componenteType == "MOTORDC") {
			orderProduct->componente = Service::QueryallMotorDCStockById(componenteId);
		}
		else {
			// Manejo de error en caso de que el tipo de componente no sea reconocido
			throw gcnew InvalidOperationException("Tipo de componente no reconocido: " + componenteType);
		}
		//MechanicComponent 
		if (componente != nullptr)
		{
			orderProduct->componente = componente;
			orderProduct->Quantity = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[3]->Value->ToString());
			orderProduct->Subtotal = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[4]->Value->ToString());
			order->OrderMeca->Add(orderProduct);
		}
		orderProduct->Quantity = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[3]->Value->ToString());
		orderProduct->Subtotal = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[4]->Value->ToString());
		
		order->OrderMeca->Add(orderProduct);
		/*
			
		
		orderDish->Dish = Service::QueryDishById(Convert::ToInt32(dgvOrderDishes->Rows[i]->Cells[0]->Value->ToString()));
		orderDish->Quantity = Convert::ToInt32(dgvOrderDishes->Rows[i]->Cells[3]->Value->ToString());
		orderDish->SubTotal = Convert::ToInt32(dgvOrderDishes->Rows[i]->Cells[4]->Value->ToString());
		order->OrderDishes->Add(orderDish);

		//mio

		orderProduct->Quantity = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[3]->Value->ToString());
			orderProduct->Subtotal = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[4]->Value->ToString());
			order->OrderMeca->Add(orderProduct);
		
		*/
		/*OrderProduct^ orderProduct = gcnew OrderProduct();
		orderProduct->id = i + 1;
		
		int componentId = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[0]->Value->ToString());

		// Consultar el componente basado en su tipo (ejemplo)
		
		String^ componentType = Convert::ToString(dgvtransacciones->Rows[i]->Cells[1]->Value->ToString()); // Extraer prefijo "FAJA"

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

		*/

		/*if (componente != nullptr)
		{
			orderProduct->componente = componente;
			orderProduct->Quantity = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[3]->Value->ToString());
			orderProduct->Subtotal = Convert::ToInt32(dgvtransacciones->Rows[i]->Cells[4]->Value->ToString());
			order->OrderMeca->Add(orderProduct);
		}
		else
		{
			// Mensaje de error si no se encuentra el componente
			MessageBox::Show("Producto no disponible");
		}
		*/
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
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvtransacciones_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



}


	   

			  
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//BOTON DE IMPRIMIR
	// Crear una venta de ejemplo
	PrintDialog^ printDialog = gcnew PrintDialog(); 
	printDialog->Document = printDocument1; 
	printDialog->UseEXDialog = true; 

}
};
}
