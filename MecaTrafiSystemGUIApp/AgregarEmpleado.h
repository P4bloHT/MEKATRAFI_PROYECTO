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
	/// <summary>
	/// Resumen de AgregarEmpleado
	/// </summary>
	public ref class AgregarEmpleado : public System::Windows::Forms::Form
	{
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

	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::PictureBox^ pbEmpPhoto;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HorasdeTrabajo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtSalario;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtHoras;
	private: System::Windows::Forms::DateTimePicker^ dtpEmpHireDate;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtEmpPhoneNumber;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dtpEmpBirthday;
	private: System::Windows::Forms::RadioButton^ rbtnEmpActive;
	private: System::Windows::Forms::RadioButton^ rbtnEmpInactive;








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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->dgvEmpleados = (gcnew System::Windows::Forms::DataGridView());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HorasdeTrabajo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->pbEmpPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSalario = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtHoras = (gcnew System::Windows::Forms::TextBox());
			this->dtpEmpHireDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtEmpPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dtpEmpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbtnEmpActive = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnEmpInactive = (gcnew System::Windows::Forms::RadioButton());
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
			this->panel1->Size = System::Drawing::Size(174, 551);
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
			this->dgvEmpleados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nombres,
					this->Carrera, this->Telefono, this->HorasdeTrabajo
			});
			this->dgvEmpleados->Location = System::Drawing::Point(180, 318);
			this->dgvEmpleados->Name = L"dgvEmpleados";
			this->dgvEmpleados->RowHeadersVisible = false;
			this->dgvEmpleados->Size = System::Drawing::Size(766, 170);
			this->dgvEmpleados->TabIndex = 31;
			this->dgvEmpleados->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AgregarEmpleado::dgvEmpleados_CellClick);
			this->dgvEmpleados->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AgregarEmpleado::dgvEmpleados_CellContentClick);
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombres";
			this->Nombres->Name = L"Nombres";
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Apellidos";
			this->Carrera->Name = L"Carrera";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Salario";
			this->Telefono->Name = L"Telefono";
			// 
			// HorasdeTrabajo
			// 
			this->HorasdeTrabajo->HeaderText = L"Horas Trabajo";
			this->HorasdeTrabajo->Name = L"HorasdeTrabajo";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(281, 114);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(186, 20);
			this->txtApellido->TabIndex = 30;
			this->txtApellido->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtApellido_TextChanged);
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(281, 77);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(186, 20);
			this->txtname->TabIndex = 29;
			this->txtname->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtname_TextChanged);
			// 
			// txtid
			// 
			this->txtid->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtid->Location = System::Drawing::Point(281, 38);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 27;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtid_TextChanged);
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
			this->label3->Location = System::Drawing::Point(212, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Nombres :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(245, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Id :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(212, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Apellidos: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(222, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Salario: ";
			// 
			// txtSalario
			// 
			this->txtSalario->Location = System::Drawing::Point(281, 151);
			this->txtSalario->Name = L"txtSalario";
			this->txtSalario->Size = System::Drawing::Size(186, 20);
			this->txtSalario->TabIndex = 34;
			this->txtSalario->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtSalario_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(180, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Horas de Trabajo: ";
			// 
			// txtHoras
			// 
			this->txtHoras->Location = System::Drawing::Point(281, 189);
			this->txtHoras->Name = L"txtHoras";
			this->txtHoras->Size = System::Drawing::Size(186, 20);
			this->txtHoras->TabIndex = 36;
			this->txtHoras->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtHoras_TextChanged);
			// 
			// dtpEmpHireDate
			// 
			this->dtpEmpHireDate->Location = System::Drawing::Point(281, 232);
			this->dtpEmpHireDate->Margin = System::Windows::Forms::Padding(2);
			this->dtpEmpHireDate->Name = L"dtpEmpHireDate";
			this->dtpEmpHireDate->Size = System::Drawing::Size(156, 20);
			this->dtpEmpHireDate->TabIndex = 38;
			this->dtpEmpHireDate->ValueChanged += gcnew System::EventHandler(this, &AgregarEmpleado::dtpEmpHireDate_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(190, 232);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Fec. de contrat.:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(521, 121);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Estado:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(512, 84);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Teléfono:";
			// 
			// txtEmpPhoneNumber
			// 
			this->txtEmpPhoneNumber->Location = System::Drawing::Point(568, 77);
			this->txtEmpPhoneNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtEmpPhoneNumber->Name = L"txtEmpPhoneNumber";
			this->txtEmpPhoneNumber->Size = System::Drawing::Size(120, 20);
			this->txtEmpPhoneNumber->TabIndex = 43;
			this->txtEmpPhoneNumber->TextChanged += gcnew System::EventHandler(this, &AgregarEmpleado::txtEmpPhoneNumber_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(198, 272);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Fecha de nac.:";
			// 
			// dtpEmpBirthday
			// 
			this->dtpEmpBirthday->Location = System::Drawing::Point(281, 266);
			this->dtpEmpBirthday->Margin = System::Windows::Forms::Padding(2);
			this->dtpEmpBirthday->Name = L"dtpEmpBirthday";
			this->dtpEmpBirthday->Size = System::Drawing::Size(156, 20);
			this->dtpEmpBirthday->TabIndex = 45;
			this->dtpEmpBirthday->ValueChanged += gcnew System::EventHandler(this, &AgregarEmpleado::dtpEmpBirthday_ValueChanged);
			// 
			// rbtnEmpActive
			// 
			this->rbtnEmpActive->AutoSize = true;
			this->rbtnEmpActive->Location = System::Drawing::Point(578, 119);
			this->rbtnEmpActive->Margin = System::Windows::Forms::Padding(2);
			this->rbtnEmpActive->Name = L"rbtnEmpActive";
			this->rbtnEmpActive->Size = System::Drawing::Size(55, 17);
			this->rbtnEmpActive->TabIndex = 46;
			this->rbtnEmpActive->TabStop = true;
			this->rbtnEmpActive->Text = L"Activo";
			this->rbtnEmpActive->UseVisualStyleBackColor = true;
			// 
			// rbtnEmpInactive
			// 
			this->rbtnEmpInactive->AutoSize = true;
			this->rbtnEmpInactive->Location = System::Drawing::Point(637, 119);
			this->rbtnEmpInactive->Margin = System::Windows::Forms::Padding(2);
			this->rbtnEmpInactive->Name = L"rbtnEmpInactive";
			this->rbtnEmpInactive->Size = System::Drawing::Size(63, 17);
			this->rbtnEmpInactive->TabIndex = 47;
			this->rbtnEmpInactive->TabStop = true;
			this->rbtnEmpInactive->Text = L"Inactivo";
			this->rbtnEmpInactive->UseVisualStyleBackColor = true;
			// 
			// AgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 551);
			this->Controls->Add(this->rbtnEmpInactive);
			this->Controls->Add(this->rbtnEmpActive);
			this->Controls->Add(this->dtpEmpBirthday);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtEmpPhoneNumber);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dtpEmpHireDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtHoras);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtSalario);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvEmpleados);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->btnEmpUpdatePhoto);
			this->Controls->Add(this->pbEmpPhoto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AgregarEmpleado";
			this->Text = L"AgregarEmpleado";
			this->Load += gcnew System::EventHandler(this, &AgregarEmpleado::AgregarEmpleado_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmpleados))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEmpPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void dgvEmpleados_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   void ClearControls() {
		   txtid->Text = "";
		   txtname->Text = "";
		   txtApellido->Text = "";
		   txtHoras->Text = "";
		   txtSalario->Text = "";
		   txtEmpPhoneNumber->Text = "";
		   dtpEmpBirthday->Text = "";
		   dtpEmpHireDate->Text = "";
		   rbtnEmpActive->Checked=false;
		   rbtnEmpInactive->Checked = false;
		   pbEmpPhoto->Image = nullptr;
		   pbEmpPhoto->Invalidate();
	   }
	   bool SearchExistId(int EmployeeId) { //Arroja Warning
		   List<Employee^>^ employees = Service::QueryAllEmployees();
		   if (employees != nullptr) {
			   for (int i = 0; i < employees->Count; i++) {
				   if (EmployeeId == employees[i]->Id) {
					   return true;
				   }
			   }
			   return false;
		   }
	   }
private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Employee^ empleado = gcnew Employee();

	if (!String::IsNullOrEmpty(txtid->Text)) { //Si Id no esta vacio
		int employeeId = Convert::ToInt32(txtid->Text); //Id del usuario
		if (SearchExistId(employeeId)) {
			//MessageBox::Show("No se puede repetir el codigo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			UsuarioInvalido^ invalido = gcnew UsuarioInvalido();
			invalido->Show();
			return;
		} //Termina 
		else {

			// Verificar si los campos no están vacíos antes de convertirlos
			if (!String::IsNullOrEmpty(txtname->Text) ||
				!String::IsNullOrEmpty(txtApellido->Text) ||
				!String::IsNullOrEmpty(txtHoras->Text) ||
				!String::IsNullOrEmpty(txtSalario->Text)) {
				// Convertir los campos solo si no están vacíos
				int id = Convert::ToInt32(txtid->Text);
				String^ name = txtname->Text;
				String^ apellido = txtApellido->Text;

				double horasTrabajo;
				double salario;
				// Convertir solo si el texto no está vacío
				if (!Double::IsNaN(Convert::ToDouble(txtHoras->Text))) {
					horasTrabajo = Convert::ToDouble(txtHoras->Text);
				}
				else {
					MessageBox::Show("No se puede repetir el codigo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Convertir solo si el texto no está vacío
				if (!String::IsNullOrEmpty(txtSalario->Text)) {
					salario = Convert::ToDouble(txtSalario->Text);
				}
				else {
					salario = 0.0; // o algún otro valor predeterminado
				}
				empleado->Id = id;
				empleado->Name = name;
				empleado->Lastname = apellido;
				empleado->WorkHours = horasTrabajo;
				empleado->Salary = salario;
				Service::AddEmployee(empleado);
				ShowEmpleado();
			}
			else {
				MessageBox::Show("Por favor, complete todos los campos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
	}
	else {
		// Mostrar un mensaje de error o tomar alguna otra acción apropiada
		//MessageBox::Show("El campo de ID no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		UsuarioInvalido^ invalido = gcnew UsuarioInvalido();
		invalido->Show();
		return;
		
	}
}
	   void ShowEmpleado() {
		   List<Employee^>^ EmployeeList = Service::QueryAllEmployees();
		   dgvEmpleados->Rows->Clear();
		   if (EmployeeList != nullptr) {
			   for (int i = 0; i < EmployeeList->Count; i++) {
				   dgvEmpleados->Rows->Add(gcnew array<String^>{"" + EmployeeList[i]->Id, EmployeeList[i]->Name, EmployeeList[i]->Lastname, "" + EmployeeList[i]->WorkHours, "" + EmployeeList[i]->Salary});
			   }
		   }
	   }
private: System::Void AgregarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = false;
	btnEditar->Enabled = false;
	ShowEmpleado(); //Cuando se inicie el formulario se 
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	String^ name;
	String^ lastname;
	double hours;
	double salary;

	// Verificar si los campos están vacíos antes de convertirlos
	if (!String::IsNullOrEmpty(txtid->Text)) {
		id = Convert::ToInt32(txtid->Text);
	}
	else {
		// Mostrar un mensaje de error o tomar alguna otra acción apropiada
		MessageBox::Show("El campo de ID no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!String::IsNullOrEmpty(txtname->Text)) {
		name = txtname->Text;
	}
	else {
		// Mostrar un mensaje de error o tomar alguna otra acción apropiada
		MessageBox::Show("El campo de nombre no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!String::IsNullOrEmpty(txtApellido->Text)) {
		lastname = txtApellido->Text;
	}
	else {
		// Mostrar un mensaje de error o tomar alguna otra acción apropiada
		MessageBox::Show("El campo de apellido no puede estar vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Convertir solo si el texto no está vacío
	if (!String::IsNullOrEmpty(txtHoras->Text)) {
		hours = Convert::ToDouble(txtHoras->Text);
	}
	else {
		hours = 0.0; // o algún otro valor predeterminado
	}

	// Convertir solo si el texto no está vacío
	if (!String::IsNullOrEmpty(txtSalario->Text)) {
		salary = Convert::ToDouble(txtSalario->Text);
	}
	else {
		salary = 0.0; // o algún otro valor predeterminado
	}

	Employee^ empleado = gcnew Employee();
	empleado->Id = id;
	empleado->Name = name;
	empleado->Lastname = lastname;
	empleado->Salary = salary;
	empleado->WorkHours = hours;

	if (pbEmpPhoto!= nullptr && pbEmpPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbEmpPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		empleado->Photo = ms->ToArray();
	}

	Service::UpdateEmployee(empleado);
	ShowEmpleado();
	ClearControls();
}
private: System::Void btnEmpUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbEmpPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}

	private: System::Void dgvEmpleados_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		int employeId = Int32::Parse(dgvEmpleados->Rows[dgvEmpleados->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Employee^ employee = Service::QueryEmployeeById(employeId);
		if (employee != nullptr) {
			txtid->Text = Convert::ToString(employee->Id); // "" + robot->Id;
			txtname->Text = employee->Name;
			txtApellido->Text = employee->Lastname;
			txtHoras->Text = Convert::ToString(employee->WorkHours);
			txtSalario->Text = Convert::ToString(employee->Salary);
			txtEmpPhoneNumber->Text = Convert::ToString(employee->PhoneNumber);
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
	if (!String::IsNullOrEmpty(txtid->Text)) {
		int id = Convert::ToInt32(txtid->Text);
		Service::DeleteEmployee(id);
		ShowEmpleado();
	}
	else {
		MessageBox::Show("Seleccione un usuario a Eliminar", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
private: System::Void txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void txtname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void txtApellido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void txtSalario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void txtHoras_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void dtpEmpHireDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void dtpEmpBirthday_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
private: System::Void txtEmpPhoneNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnEliminar->Enabled = true;
	btnEditar->Enabled = true;
}
};
}
