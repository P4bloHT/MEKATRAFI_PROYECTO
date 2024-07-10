#pragma once
#include "UsuarioInvalido.h"
namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MecaTrafiSystemModel;
	using namespace MecaTrafiSystemService;
	using namespace System::Collections::Generic; // PARA HACER USO DEL LIST
	using namespace System::Threading;
	/// <summary>
	/// Resumen de AgregarEmpleado
	/// </summary>
	public ref class AgregarEmpleado : public System::Windows::Forms::Form
	{
		Thread^ myThread;
	public:
		AgregarEmpleado(void)
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
		~AgregarEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btncancelar;

	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::DataGridView^ dgvEmpleados;
	private: System::Windows::Forms::TextBox^ txtApellido;
	






	private: System::Windows::Forms::TextBox^ txtname;
	private: System::Windows::Forms::TextBox^ txtDNI;


	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::PictureBox^ pbEmpPhoto;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ txt_ID;



	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtSalario;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtHoras;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtEmpPhoneNumber;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::DateTimePicker^ dtp_FinContrato;
	private: System::Windows::Forms::DateTimePicker^ dtp_InicioContrato;


	private: System::Windows::Forms::Label^ txt_Turno;
	private: System::Windows::Forms::RadioButton^ TurnoTarde;

	private: System::Windows::Forms::RadioButton^ TurnoDia;

	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ chbx_NoAlumno;

	private: System::Windows::Forms::CheckBox^ chBoxEditar;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HorasdeTrabajo;











	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarEmpleado::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->dgvEmpleados = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HorasdeTrabajo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->pbEmpPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtHoras = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtEmpPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dtp_FinContrato = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp_InicioContrato = (gcnew System::Windows::Forms::DateTimePicker());
			this->txt_Turno = (gcnew System::Windows::Forms::Label());
			this->TurnoTarde = (gcnew System::Windows::Forms::RadioButton());
			this->TurnoDia = (gcnew System::Windows::Forms::RadioButton());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chbx_NoAlumno = (gcnew System::Windows::Forms::CheckBox());
			this->chBoxEditar = (gcnew System::Windows::Forms::CheckBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmpleados))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEmpPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->btnEliminar);
			this->panel1->Controls->Add(this->btnagregar);
			this->panel1->Controls->Add(this->btncancelar);
			this->panel1->Controls->Add(this->btnEditar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 526);
			this->panel1->TabIndex = 32;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::DarkGray;
			this->btnEliminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEliminar->Location = System::Drawing::Point(0, 91);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(174, 48);
			this->btnEliminar->TabIndex = 20;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btnEmpDelete);
			// 
			// btnagregar
			// 
			this->btnagregar->BackColor = System::Drawing::Color::DarkGray;
			this->btnagregar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnagregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnagregar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnagregar->Location = System::Drawing::Point(-1, 0);
			this->btnagregar->Margin = System::Windows::Forms::Padding(0);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(174, 48);
			this->btnagregar->TabIndex = 14;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = false;
			this->btnagregar->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btnagregar_Click);
			// 
			// btncancelar
			// 
			this->btncancelar->BackColor = System::Drawing::Color::DarkGray;
			this->btncancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btncancelar->Location = System::Drawing::Point(-1, 138);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(174, 44);
			this->btncancelar->TabIndex = 19;
			this->btncancelar->Text = L"Cancelar ";
			this->btncancelar->UseVisualStyleBackColor = false;
			this->btncancelar->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btncancelar_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::DarkGray;
			this->btnEditar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEditar->Location = System::Drawing::Point(0, 45);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(174, 48);
			this->btnEditar->TabIndex = 15;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btnEditar_Click);
			// 
			// dgvEmpleados
			// 
			this->dgvEmpleados->AllowUserToAddRows = false;
			this->dgvEmpleados->AllowUserToOrderColumns = true;
			this->dgvEmpleados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEmpleados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombres,
					this->Carrera, this->Telefono, this->HorasdeTrabajo
			});
			this->dgvEmpleados->Location = System::Drawing::Point(180, 318);
			this->dgvEmpleados->Name = L"dgvEmpleados";
			this->dgvEmpleados->RowHeadersVisible = false;
			this->dgvEmpleados->RowHeadersWidth = 62;
			this->dgvEmpleados->Size = System::Drawing::Size(766, 170);
			this->dgvEmpleados->TabIndex = 31;
			this->dgvEmpleados->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AgregarEmpleado::dgvEmpleados_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombres";
			this->Nombres->MinimumWidth = 8;
			this->Nombres->Name = L"Nombres";
			this->Nombres->Width = 150;
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Apellidos";
			this->Carrera->MinimumWidth = 8;
			this->Carrera->Name = L"Carrera";
			this->Carrera->Width = 150;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Salario";
			this->Telefono->MinimumWidth = 8;
			this->Telefono->Name = L"Telefono";
			this->Telefono->Width = 150;
			// 
			// HorasdeTrabajo
			// 
			this->HorasdeTrabajo->HeaderText = L"Horas Trabajo";
			this->HorasdeTrabajo->MinimumWidth = 8;
			this->HorasdeTrabajo->Name = L"HorasdeTrabajo";
			this->HorasdeTrabajo->Width = 150;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(281, 106);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(133, 20);
			this->txtApellido->TabIndex = 30;
			this->txtApellido->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtApellido_TextChanged);
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(281, 73);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(133, 20);
			this->txtname->TabIndex = 29;
			this->txtname->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtname_TextChanged);
			// 
			// txtDNI
			// 
			this->txtDNI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDNI->Location = System::Drawing::Point(281, 42);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(133, 20);
			this->txtDNI->TabIndex = 27;
			this->txtDNI->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtid_TextChanged);
			// 
			// btnEmpUpdatePhoto
			// 
			this->btnEmpUpdatePhoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEmpUpdatePhoto->Location = System::Drawing::Point(797, 187);
			this->btnEmpUpdatePhoto->Name = L"btnEmpUpdatePhoto";
			this->btnEmpUpdatePhoto->Size = System::Drawing::Size(137, 23);
			this->btnEmpUpdatePhoto->TabIndex = 26;
			this->btnEmpUpdatePhoto->Text = L"Actualizar Foto";
			this->btnEmpUpdatePhoto->UseVisualStyleBackColor = true;
			this->btnEmpUpdatePhoto->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btnEmpUpdatePhoto_Click);
			// 
			// pbEmpPhoto
			// 
			this->pbEmpPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbEmpPhoto->Location = System::Drawing::Point(797, 26);
			this->pbEmpPhoto->Name = L"pbEmpPhoto";
			this->pbEmpPhoto->Size = System::Drawing::Size(137, 145);
			this->pbEmpPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbEmpPhoto->TabIndex = 25;
			this->pbEmpPhoto->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(222, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(212, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Nombres :";
			// 
			// txt_ID
			// 
			this->txt_ID->AutoSize = true;
			this->txt_ID->Location = System::Drawing::Point(235, 47);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(32, 13);
			this->txt_ID->TabIndex = 21;
			this->txt_ID->Text = L"DNI: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(220, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Apellidos: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(230, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Salario: ";
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(281, 138);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(133, 20);
			this->txtSalario->TabIndex = 34;
			this->txtSalario->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtSalario_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(184, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Horas de Trabajo: ";
			// 
			// txtHoras
			// 
			this->txtHoras->Location = System::Drawing::Point(281, 173);
			this->txtHoras->Name = L"txtHoras";
			this->txtHoras->Size = System::Drawing::Size(58, 20);
			this->txtHoras->TabIndex = 36;
			this->txtHoras->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtHoras_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(465, 80);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Teléfono:";
			// 
			// txtEmpPhoneNumber
			// 
			this->txtEmpPhoneNumber->Location = System::Drawing::Point(530, 77);
			this->txtEmpPhoneNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtEmpPhoneNumber->Name = L"txtEmpPhoneNumber";
			this->txtEmpPhoneNumber->Size = System::Drawing::Size(100, 20);
			this->txtEmpPhoneNumber->TabIndex = 43;
			this->txtEmpPhoneNumber->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtEmpPhoneNumber_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(194, 209);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 13);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Inicio Contrato:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(190, 236);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 13);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Fin de Contrato:";
			// 
			// dtp_FinContrato
			// 
			this->dtp_FinContrato->Location = System::Drawing::Point(279, 229);
			this->dtp_FinContrato->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->dtp_FinContrato->MinDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
			this->dtp_FinContrato->Name = L"dtp_FinContrato";
			this->dtp_FinContrato->Size = System::Drawing::Size(120, 20);
			this->dtp_FinContrato->TabIndex = 49;
			// 
			// dtp_InicioContrato
			// 
			this->dtp_InicioContrato->Location = System::Drawing::Point(281, 203);
			this->dtp_InicioContrato->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->dtp_InicioContrato->MinDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
			this->dtp_InicioContrato->Name = L"dtp_InicioContrato";
			this->dtp_InicioContrato->Size = System::Drawing::Size(120, 20);
			this->dtp_InicioContrato->TabIndex = 50;
			// 
			// txt_Turno
			// 
			this->txt_Turno->AutoSize = true;
			this->txt_Turno->Location = System::Drawing::Point(479, 113);
			this->txt_Turno->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txt_Turno->Name = L"txt_Turno";
			this->txt_Turno->Size = System::Drawing::Size(38, 13);
			this->txt_Turno->TabIndex = 53;
			this->txt_Turno->Text = L"Turno:";
			// 
			// TurnoTarde
			// 
			this->TurnoTarde->AutoSize = true;
			this->TurnoTarde->Location = System::Drawing::Point(583, 113);
			this->TurnoTarde->Name = L"TurnoTarde";
			this->TurnoTarde->Size = System::Drawing::Size(53, 17);
			this->TurnoTarde->TabIndex = 51;
			this->TurnoTarde->Text = L"Tarde";
			this->TurnoTarde->UseVisualStyleBackColor = true;
			// 
			// TurnoDia
			// 
			this->TurnoDia->AutoSize = true;
			this->TurnoDia->Checked = true;
			this->TurnoDia->Location = System::Drawing::Point(536, 113);
			this->TurnoDia->Name = L"TurnoDia";
			this->TurnoDia->Size = System::Drawing::Size(41, 17);
			this->TurnoDia->TabIndex = 52;
			this->TurnoDia->TabStop = true;
			this->TurnoDia->Text = L"Dia";
			this->TurnoDia->UseVisualStyleBackColor = true;
			// 
			// txtCodigo
			// 
			this->txtCodigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCodigo->Location = System::Drawing::Point(530, 45);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(100, 20);
			this->txtCodigo->TabIndex = 55;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(474, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Codigo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(248, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 56;
			this->label7->Text = L"Id:";
			// 
			// chbx_NoAlumno
			// 
			this->chbx_NoAlumno->AutoSize = true;
			this->chbx_NoAlumno->Location = System::Drawing::Point(654, 48);
			this->chbx_NoAlumno->Name = L"chbx_NoAlumno";
			this->chbx_NoAlumno->Size = System::Drawing::Size(78, 17);
			this->chbx_NoAlumno->TabIndex = 58;
			this->chbx_NoAlumno->Text = L"No Alumno";
			this->chbx_NoAlumno->UseVisualStyleBackColor = true;
			this->chbx_NoAlumno->CheckedChanged += gcnew System::EventHandler(this, &AgregarEmpleado::chbx_NoAlumno_CheckedChanged);
			// 
			// chBoxEditar
			// 
			this->chBoxEditar->AutoSize = true;
			this->chBoxEditar->Location = System::Drawing::Point(473, 141);
			this->chBoxEditar->Name = L"chBoxEditar";
			this->chBoxEditar->Size = System::Drawing::Size(102, 17);
			this->chBoxEditar->TabIndex = 63;
			this->chBoxEditar->Text = L"Habilitar Edicion";
			this->chBoxEditar->UseVisualStyleBackColor = true;
			this->chBoxEditar->CheckedChanged += gcnew System::EventHandler(this, &AgregarEmpleado::chBoxEditar_CheckedChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(530, 190);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 62;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(468, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 13);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Password:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(530, 164);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 60;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(466, 167);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 59;
			this->label12->Text = L"Username:";
			// 
			// txtId
			// 
			this->txtId->Enabled = false;
			this->txtId->Location = System::Drawing::Point(279, 12);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(28, 20);
			this->txtId->TabIndex = 64;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(797, 226);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(137, 23);
			this->btnClear->TabIndex = 65;
			this->btnClear->Text = L"Limpiar Datos";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &AgregarEmpleado::btnClear_Click);
			// 
			// AgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 526);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->chBoxEditar);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->chbx_NoAlumno);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TurnoDia);
			this->Controls->Add(this->TurnoTarde);
			this->Controls->Add(this->txt_Turno);
			this->Controls->Add(this->dtp_InicioContrato);
			this->Controls->Add(this->dtp_FinContrato);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtEmpPhoneNumber);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtHoras);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvEmpleados);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->btnEmpUpdatePhoto);
			this->Controls->Add(this->pbEmpPhoto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_ID);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AgregarEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AgregarEmpleado";
			this->Load += gcnew System::EventHandler(this, &AgregarEmpleado::AgregarEmpleado_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmpleados))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEmpPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   int validar_campos() {
			   // Verificar que los cuadros de texto estén completos
			   if (String::IsNullOrWhiteSpace(txtname->Text) ||
				   String::IsNullOrWhiteSpace(txtApellido->Text) ||
				   String::IsNullOrWhiteSpace(txtHoras->Text) ||
				   String::IsNullOrWhiteSpace(txtSalario->Text) ||
				   String::IsNullOrWhiteSpace(txtEmpPhoneNumber->Text) ||
				   String::IsNullOrWhiteSpace(txtDNI->Text) ||
				   String::IsNullOrWhiteSpace(txtCodigo->Text) ||
				   pbEmpPhoto->Image == nullptr) {

				   // Mostrar cuadro de mensaje
				   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return 1;
			   }
			   else {
				   return 0;
			   }
		   }
		   void ClearControls() {
			   txtId->Text = "";
			   txtname->Text = "";
			   txtApellido->Text = "";
			   txtHoras->Text = "";
			   txtSalario->Text = "";
			   txtEmpPhoneNumber->Text = "";
			   txtDNI->Text = "";
			   txtCodigo->Text = "";
			   txtUsername->Text = "";
			   txtPassword->Text = "";
			   pbEmpPhoto->Image = nullptr;
			   TurnoDia->Checked = true;
			   TurnoTarde->Checked = false;
				
		   }
		   String^ CreateUsername(String^ name, String^ lastname) {
			   // Dividir el nombre y apellidos por espacios
			   array<String^>^ nameParts = name->Split(' ');
			   array<String^>^ lastnameParts = lastname->Split(' ');

			   // Tomar la primera letra del primer nombre y el primer apellido completo
			   String^ username = nameParts[0]->Substring(0, 1) + lastnameParts[0];

			   return username;
		   }
	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Convertir y asignar valores de los cuadros de texto a variables locales
		Int32 codigo = Convert::ToInt32(txtCodigo->Text);
		Int32 dni = Convert::ToInt32(txtDNI->Text);
		String^ name = txtname->Text;
		String^ apellido = txtApellido->Text;
		double horas = Convert::ToDouble(txtHoras->Text);
		double salario = Convert::ToDouble(txtSalario->Text);
		Int32 telefono = Convert::ToInt32(txtEmpPhoneNumber->Text);
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		// Crear un nuevo objeto Employee y asignar valores
		Employee^ empleado = gcnew Employee();
		empleado->Codigo = codigo;
		empleado->Dni = dni;
		empleado->Name = name;
		empleado->Lastname = apellido;
		empleado->WorkHours = horas;
		empleado->Salary = salario;
		empleado->PhoneNumber = telefono;
		empleado->InicioContratoDate = dtp_InicioContrato->Value;
		empleado->FinContratoDate = dtp_FinContrato->Value;
		// Asignar Username y Password
		if (!(chBoxEditar->Checked)) {
			empleado->Username = CreateUsername(name, apellido);
			empleado->Password = dni.ToString(); // Contraseña es el DNI
		}
		else {
			empleado->Username = username;
			empleado->Password = password;
		}

		// Asignar el código si el empleado es alumno
		if (!(chbx_NoAlumno->Checked)) {
			empleado->Codigo = codigo;
		}
		else {
			empleado->Codigo = 00000000; // Código para empleados que no son alumnos
		}

		// Asignar la foto si está presente
		if (pbEmpPhoto != nullptr && pbEmpPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbEmpPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			empleado->Photo = ms->ToArray();
		}

		// Asignar el turno basado en los checkboxes
		if (TurnoDia->Checked) {
			empleado->Turn = "Dia";
		}
		else if (TurnoTarde->Checked) {
			empleado->Turn = "Tarde";
		}

		// Llamar al servicio para agregar el empleado
		Service::AddEmployee(empleado);

		// Mostrar los empleados actualizados
		ShowEmpleado();
		ClearControls();
		if (validar_campos() == 1) {
			return;
		}
		
	}
		   void ShowEmpleado() {
			   List<Employee^>^ EmployeeList = Service::QueryAllEmployees();
			   dgvEmpleados->Rows->Clear();
			   if (EmployeeList != nullptr) {
				   for (int i = 0; i < EmployeeList->Count; i++) {
					   dgvEmpleados->Rows->Add(gcnew array<String^>{"" + EmployeeList[i]->Id, EmployeeList[i]->Name, EmployeeList[i]->Lastname, "" + EmployeeList[i]->Salary, "" + EmployeeList[i]->WorkHours});
				   }
			   }
		   }
		   delegate void MyDelegate();

		   void MyRun() {
			   while (true) {
				   try {
					   myThread->Sleep(10000);
					   Invoke(gcnew MyDelegate(this, &AgregarEmpleado::ShowEmpleado));
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }


	private: System::Void AgregarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
		btnEliminar->Enabled = false;
		btnEditar->Enabled = false;
		txtPassword->Enabled = false;
		txtUsername->Enabled = false;
		ShowEmpleado();
		myThread = gcnew Thread(gcnew ThreadStart(this, &AgregarEmpleado::MyRun));
		myThread->Start();
	
	}
	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		

		// Convertir y asignar valores de los cuadros de texto a variables locales
		Int32 id = Convert::ToInt32(txtId->Text);
		String^ name = txtname->Text;
		String^ lastname = txtApellido->Text;
		double horas = Convert::ToDouble(txtHoras->Text);
		double salario = Convert::ToDouble(txtSalario->Text);
		Int32 telefono = Convert::ToInt32(txtEmpPhoneNumber->Text);
		Int32 codigo = Convert::ToInt32(txtCodigo->Text);
		Int32 dni = Convert::ToInt32(txtDNI->Text);
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		// Crear un nuevo objeto Employee y asignar valores
		Employee^ empleado = gcnew Employee();
		empleado->Id = id;
		empleado->Name = name;
		empleado->Lastname = lastname;
		empleado->WorkHours = horas;
		empleado->Salary = salario;
		empleado->PhoneNumber = telefono;
		empleado->Codigo = codigo;
		empleado->Dni = dni;
		empleado->InicioContratoDate = dtp_InicioContrato->Value;
		empleado->FinContratoDate = dtp_FinContrato->Value;

		// Asignar Username y Password
		if (!(chBoxEditar->Checked)) {
			empleado->Username = CreateUsername(name, lastname);
			empleado->Password = dni.ToString(); // Contraseña es el DNI
		}
		else {
			empleado->Username = username;
			empleado->Password = password;
		}

		// Asignar el código si el empleado es alumno
		if (!(chbx_NoAlumno->Checked)) {
			empleado->Codigo = codigo;
		}
		else {
			empleado->Codigo = 00000000; // Código para empleados que no son alumnos
		}

		// Asignar la foto si está presente
		if (pbEmpPhoto != nullptr && pbEmpPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbEmpPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			empleado->Photo = ms->ToArray();
		}

		// Asignar el turno basado en los checkboxes
		if (TurnoDia->Checked) {
			empleado->Turn = "Dia";
		}
		else if (TurnoTarde->Checked) {
			empleado->Turn = "Tarde";
		}

		// Llamar al servicio para actualizar el empleado
		Service::UpdateEmployee(empleado);

		// Mostrar los empleados actualizados
		ShowEmpleado();

		// Mostrar mensaje de éxito
		MessageBox::Show("Empleado editado exitosamente", "Edición Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (validar_campos() == 1) {
			return;
		}
	}
	private: System::Void btnEmpUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbEmpPhoto->Image = gcnew Bitmap(ofd->FileName);
		}
	}

	private: System::Void dgvEmpleados_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		btnagregar->Enabled = false;
		btnEliminar->Enabled = true;
		btnEditar->Enabled = true;
		int employeId = Int32::Parse(dgvEmpleados->Rows[dgvEmpleados->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Employee^ employee = Service::QueryEmployeeById(employeId);
		if (employee != nullptr) {
			txtId->Text = Convert::ToString(employee->Id); // "" + robot->Id;
			txtname->Text = employee->Name;
			txtApellido->Text = employee->Lastname;
			txtHoras->Text = Convert::ToString(employee->WorkHours);
			txtSalario->Text = Convert::ToString(employee->Salary);
			txtEmpPhoneNumber->Text = Convert::ToString(employee->PhoneNumber);
			txtUsername->Text = employee->Username;
			txtPassword->Text = employee->Password;
			txtCodigo->Text = Convert::ToString(employee->Codigo);
			txtDNI->Text = Convert::ToString(employee->Dni);
			dtp_InicioContrato->Value = Convert::ToDateTime(employee->InicioContratoDate);
			dtp_FinContrato->Value = Convert::ToDateTime(employee->FinContratoDate);
			//Cargar Imagen
			if (employee->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(employee->Photo);
				pbEmpPhoto->Image = Image::FromStream(ms);
			}

			else {
				pbEmpPhoto->Image = nullptr;
				pbEmpPhoto->Invalidate();
			}
		}
	}
	private: System::Void btnEmpDelete(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		Service::DeleteEmployee(id);
		ShowEmpleado();
	}
	private: System::Void txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void txtApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtSalario_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtHoras_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void dtpEmpHireDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dtpEmpBirthday_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtEmpPhoneNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
		btnagregar->Enabled = true;
		btnEliminar->Enabled = false;
		btnEditar->Enabled = false;
	}
private: System::Void chBoxEditar_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!(chBoxEditar->Checked)) {
		txtUsername->Enabled = false;
		txtPassword->Enabled = false;
	}
	else {
		txtUsername->Enabled = true;
		txtPassword->Enabled = true;
	}

}
private: System::Void chbx_NoAlumno_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!(chbx_NoAlumno->Checked))
		txtCodigo->Enabled = true;
	else
		txtCodigo->Enabled = false;
	txtCodigo->Text = "0";
}
};
}