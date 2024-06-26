#pragma once
#include "ConfirmarsSalida.h"
#include "TornilloProduct.h"
#include "Tornillohexagonal.h"
#include "Tornillophillips.h"
#include "TornilloAllen.h"
#include "Poleaconpiñon.h"
#include "Poleasinpiñon.h"
#include "DC.h" 
#include "Trifásico.h"
#include "Monofásico.h"
#include "Fajadelgada.h"
#include "fajamediana.h"
#include "fajagrande.h"
#include "rodbolas.h"
#include "rodrodillos.h"
#include "rodaguja.h"
#include "Chat.h"
#include "usuario.h"
#include "Reclamar.h"
#include "VentaMotores.h"
#include "ventatornillos.h"
#include "ventaroda.h"
#include "ventafajas.h"
#include "ventapolea.h"
#include "Reportes.h"
#include "InterfazCliente.h"
#include "StockForm.h"
#include "GenerateOrder.h"
#include "ReportePedidos.h"

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	public:
		EmployeeForm(void)
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
		~EmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}

































	private: System::Windows::Forms::ToolStripMenuItem^ chatDeAyudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnham;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ sidebar;






	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button4;













	private: System::Windows::Forms::Timer^ menutransition;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ btnproducto;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Timer^ sidebartransition;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ btnGeneraPedido;
private: System::Windows::Forms::Button^ button5;




	private: System::ComponentModel::IContainer^ components;




	protected:

	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeForm::typeid));
			this->chatDeAyudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnham = (gcnew System::Windows::Forms::PictureBox());
			this->sidebar = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnproducto = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menutransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->sidebartransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnGeneraPedido = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnham))->BeginInit();
			this->sidebar->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// chatDeAyudaToolStripMenuItem
			// 
			this->chatDeAyudaToolStripMenuItem->Name = L"chatDeAyudaToolStripMenuItem";
			this->chatDeAyudaToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->chatDeAyudaToolStripMenuItem->Text = L"Chat de ayuda";
			this->chatDeAyudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &EmployeeForm::chatDeAyudaToolStripMenuItem_Click);
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatDeAyudaToolStripMenuItem });
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 22);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(16, 32);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ayudaToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1206, 36);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnham);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 36);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1206, 46);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 28);
			this->label1->TabIndex = 10;
			this->label1->Text = L"MECATRAFI I PUCP";
			this->label1->Click += gcnew System::EventHandler(this, &EmployeeForm::label1_Click);
			// 
			// btnham
			// 
			this->btnham->Location = System::Drawing::Point(18, 5);
			this->btnham->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnham->Name = L"btnham";
			this->btnham->Size = System::Drawing::Size(52, 32);
			this->btnham->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnham->TabIndex = 9;
			this->btnham->TabStop = false;
			this->btnham->Click += gcnew System::EventHandler(this, &EmployeeForm::btnham_Click);
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::Color::DarkSlateGray;
			this->sidebar->Controls->Add(this->flowLayoutPanel2);
			this->sidebar->Controls->Add(this->panel2);
			this->sidebar->Controls->Add(this->panel4);
			this->sidebar->Controls->Add(this->panel5);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 82);
			this->sidebar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(303, 575);
			this->sidebar->TabIndex = 9;
			this->sidebar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EmployeeForm::sidebar_Paint);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::Silver;
			this->flowLayoutPanel2->Controls->Add(this->btnproducto);
			this->flowLayoutPanel2->Controls->Add(this->button11);
			this->flowLayoutPanel2->Controls->Add(this->button9);
			this->flowLayoutPanel2->Controls->Add(this->button13);
			this->flowLayoutPanel2->Controls->Add(this->button10);
			this->flowLayoutPanel2->Controls->Add(this->button12);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(212, 68);
			this->flowLayoutPanel2->TabIndex = 15;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EmployeeForm::flowLayoutPanel2_Paint);
			// 
			// btnproducto
			// 
			this->btnproducto->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnproducto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnproducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnproducto->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnproducto->ForeColor = System::Drawing::Color::White;
			this->btnproducto->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnproducto->ImageKey = L"(ninguno)";
			this->btnproducto->Location = System::Drawing::Point(8, 0);
			this->btnproducto->Margin = System::Windows::Forms::Padding(0);
			this->btnproducto->Name = L"btnproducto";
			this->btnproducto->Size = System::Drawing::Size(204, 60);
			this->btnproducto->TabIndex = 21;
			this->btnproducto->Text = L"Productos";
			this->btnproducto->UseVisualStyleBackColor = false;
			this->btnproducto->Click += gcnew System::EventHandler(this, &EmployeeForm::btnproducto_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Transparent;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->ImageKey = L"(ninguno)";
			this->button11->Location = System::Drawing::Point(0, 60);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(212, 51);
			this->button11->TabIndex = 21;
			this->button11->Text = L"Poleas";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &EmployeeForm::button11_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Transparent;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->ImageKey = L"(ninguno)";
			this->button9->Location = System::Drawing::Point(0, 111);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(212, 51);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Fajas";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &EmployeeForm::button9_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Transparent;
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->ImageKey = L"(ninguno)";
			this->button13->Location = System::Drawing::Point(0, 162);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(212, 51);
			this->button13->TabIndex = 21;
			this->button13->Text = L"Tornillos";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &EmployeeForm::button13_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Transparent;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->ImageKey = L"(ninguno)";
			this->button10->Location = System::Drawing::Point(0, 213);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(212, 51);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Motores";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &EmployeeForm::button10_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Transparent;
			this->button12->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->ImageKey = L"(ninguno)";
			this->button12->Location = System::Drawing::Point(0, 264);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(212, 51);
			this->button12->TabIndex = 22;
			this->button12->Text = L"Rodamientos";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &EmployeeForm::button12_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(4, 73);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 38);
			this->panel2->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->ImageKey = L"(ninguno)";
			this->button1->Location = System::Drawing::Point(-4, -48);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 122);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Agregar Cliente";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EmployeeForm::button1_Click_2);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->button3);
			this->panel4->Location = System::Drawing::Point(4, 121);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 46);
			this->panel4->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->ImageKey = L"(ninguno)";
			this->button3->Location = System::Drawing::Point(-34, -38);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(284, 122);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Reportes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EmployeeForm::button3_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button4);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(4, 177);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 45);
			this->panel5->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->ImageKey = L"(ninguno)";
			this->button4->Location = System::Drawing::Point(-26, -20);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 85);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Log Out";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &EmployeeForm::button4_Click);
			// 
			// menutransition
			// 
			this->menutransition->Interval = 10;
			this->menutransition->Tick += gcnew System::EventHandler(this, &EmployeeForm::menutransition_Tick);
			// 
			// sidebartransition
			// 
			this->sidebartransition->Interval = 5;
			this->sidebartransition->Tick += gcnew System::EventHandler(this, &EmployeeForm::sidebartransition_Tick);
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::SandyBrown;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->Location = System::Drawing::Point(720, 346);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(441, 302);
			this->btnCliente->TabIndex = 11;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &EmployeeForm::btnCliente_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(369, 129);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 377);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Stock";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EmployeeForm::button2_Click_2);
			// 
			// btnGeneraPedido
			// 
			this->btnGeneraPedido->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGeneraPedido->Location = System::Drawing::Point(720, 129);
			this->btnGeneraPedido->Name = L"btnGeneraPedido";
			this->btnGeneraPedido->Size = System::Drawing::Size(441, 166);
			this->btnGeneraPedido->TabIndex = 15;
			this->btnGeneraPedido->Text = L"Generar pedido";
			this->btnGeneraPedido->UseVisualStyleBackColor = true;
			this->btnGeneraPedido->Click += gcnew System::EventHandler(this, &EmployeeForm::btnGeneraPedido_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(369, 531);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(328, 109);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Reporte";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &EmployeeForm::button5_Click);
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1206, 657);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnGeneraPedido);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EmployeeForm";
			this->Text = L"Sistema de ventas";
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::EmployeeForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnham))->EndInit();
			this->sidebar->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
		   //Sistem Cuenta
private: System::Void uToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//usuario^ perfil = gcnew usuario();
	
}

	   //Sistem de tornillo
	private: System::Void tornillosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void trifásicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cabezaHexagonalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Tornillohexagonal^ hexagonal = gcnew Tornillohexagonal();
	hexagonal->MdiParent = this;
	hexagonal->Show();
}
private: System::Void cabezaPhillipsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Tornillophillips^ phillips = gcnew Tornillophillips();
	phillips->MdiParent = this;
	phillips->Show();
}
private: System::Void cabezaAlleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TornilloAllen^ allen = gcnew TornilloAllen();
	allen->MdiParent = this;
	allen->Show();
}
private: System::Void conPiñónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Poleaconpiñon^ conpiñon = gcnew Poleaconpiñon();
	conpiñon->MdiParent = this; 
	conpiñon->Show();
}
private: System::Void sinPiñónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Poleasinpiñon^ sinpiñon = gcnew Poleasinpiñon();
	sinpiñon->MdiParent = this;
	sinpiñon->Show();
}
private: System::Void dCToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DC^ dc = gcnew DC();
	dc->MdiParent = this;
	dc->Show();
}
private: System::Void trifásicoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Trifásico^ motortrifasico = gcnew Trifásico();
	motortrifasico->MdiParent = this;
	motortrifasico->Show();
}
private: System::Void monofásicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Monofásico^ motormono = gcnew Monofásico();
	motormono->MdiParent = this;
	motormono->Show();
}
private: System::Void delgadasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Fajadelgada^ delgada = gcnew Fajadelgada();
	delgada->MdiParent = this;
	delgada->Show();
}
private: System::Void medianasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fajamediana^ mediana = gcnew fajamediana();
	mediana->MdiParent = this;
	mediana->Show();
}
private: System::Void gruesasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fajagrande^ grande = gcnew fajagrande();
	grande->MdiParent = this;
	grande->Show();

}
private: System::Void rodamientoDeBolasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	rodbolas^ bolas = gcnew rodbolas();
	bolas->MdiParent = this;
	bolas->Show();
}
private: System::Void rodamientoDeRodillosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	rodrodillos^ rodi = gcnew rodrodillos();
	rodi->MdiParent = this;
	rodi->Show();
}
private: System::Void rodamientoDeAgujasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	rodaguja^ aguja = gcnew rodaguja();
	aguja->MdiParent = this;
	aguja->Show();
}
private: System::Void chatDeAyudaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Chat^ ayuda = gcnew Chat();
	ayuda->MdiParent = this;
	ayuda->Show();

}
private: System::Void ventasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// cambio por reclamos 
	Reclamar^ reclama = gcnew Reclamar();
	reclama->MdiParent = this;
	reclama->Show(); 
		
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   bool menuexpand = false; 
private: System::Void menutransition_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (menuexpand == false) {
		//flowloyalpanel 2 = menucontainer (yt)
		flowLayoutPanel2->Height += 10;
		if(flowLayoutPanel2->Height >= 200 ){
			menutransition->Stop();
			menuexpand = true;
		
		}

	}
	else {

		flowLayoutPanel2->Height -= 10;
		if (flowLayoutPanel2->Height <= 35) {

			menutransition->Stop();
			menuexpand = false;
		}
	}

}
private: System::Void btnproductos_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void btnproducto_Click(System::Object^ sender, System::EventArgs^ e) {
	menutransition->Start();
}
	   bool sidebarexpand = true;
private: System::Void sidebartransition_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (sidebarexpand) {
		sidebar->Width -= 10;
		if (sidebar->Width <= 34
			) {
			sidebarexpand = false;
			sidebartransition->Stop();

		}

	}
	else {
		sidebar->Width += 10;
		if (sidebar->Width >=135 ) {
			sidebarexpand = true;
			sidebartransition->Stop();

		}

	}

}
private: System::Void btnham_Click(System::Object^ sender, System::EventArgs^ e) {
	sidebartransition->Start();
}
private: System::Void sidebar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   //agregar usuario
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	usuario^ perfil = gcnew usuario();
	//perfil->MdiParent = this;
	perfil->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ConfirmarsSalida^ ConfirmarSalida = gcnew ConfirmarsSalida();
	//ConfirmarSalida->MdiParent = this;
	ConfirmarSalida->Show();
}
	   //click en motor
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	VentaMotores^ vendemotor = gcnew VentaMotores();
	//vendemotor->MdiParent = this;
	vendemotor->Show();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ventatornillos^ vendetor = gcnew ventatornillos();
	//vendetor->MdiParent = this;
	vendetor->Show();

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	ventaroda^ rodamie = gcnew ventaroda();
	//rodamie->MdiParent = this;
	rodamie->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	ventapolea^ vendepolea = gcnew ventapolea();
	//rodamie->MdiParent = this;
	vendepolea->Show();

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ventafajas^ vendefaja = gcnew ventafajas();
	//rodamie->MdiParent = this;
	vendefaja->Show();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Reportes^ reporte = gcnew Reportes();
	
	reporte->Show();

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Login^ sesion = gcnew Login();

	//sesion->Show();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfazCliente^ cliente = gcnew InterfazCliente();
	cliente->Show();
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	StockForm^ tornillo = gcnew StockForm();
	tornillo->Show();
}
private: System::Void btnGeneraPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	GenerateOrder^ generateOrder = gcnew GenerateOrder();
	generateOrder->Show();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportePedidos^ reporte = gcnew ReportePedidos();
	reporte->Show();
}
};
}
