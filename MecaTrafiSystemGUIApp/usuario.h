#pragma once
namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// este es el system MODEL-FUSILEN A CARLOS (LLEVO UNA HORA BUSCANDO SOLUCION POR ESTO)
	using namespace MecaTrafiSystemModel;
	using namespace MecaTrafiSystemService;
	using namespace System::Collections::Generic;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de usuario
	/// </summary>
	public ref class usuario : public System::Windows::Forms::Form
	{
		Thread^ myThread;
	public:
		usuario(void)
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
		~usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ btnsubefoto;
	private: System::Windows::Forms::TextBox^ txtCodigo;




	private: System::Windows::Forms::TextBox^ txtCarrerar;



	private: System::Windows::Forms::TextBox^ txtname;
	private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btnEditar;









	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::PictureBox^ pbphoto;
	private: System::Windows::Forms::Button^ btn_cancelar;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ sideusuario;
	private: System::Windows::Forms::Button^ btn_detele;
	private: System::Windows::Forms::TextBox^ txtUsername;

	private: System::Windows::Forms::TextBox^ txtLastName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCurso;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	private: System::Windows::Forms::Label^ labelDni;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::CheckBox^ cBx_Curso;
	private: System::Windows::Forms::CheckBox^ chBoxEditar;

	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;





	private: System::ComponentModel::IContainer^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnsubefoto = (gcnew System::Windows::Forms::Button());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtCarrerar = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbphoto = (gcnew System::Windows::Forms::PictureBox());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_detele = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->sideusuario = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCurso = (gcnew System::Windows::Forms::TextBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->labelDni = (gcnew System::Windows::Forms::Label());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->cBx_Curso = (gcnew System::Windows::Forms::CheckBox());
			this->chBoxEditar = (gcnew System::Windows::Forms::CheckBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(391, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Telefono : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(223, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombres :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(399, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Carrera : ";
			// 
			// btnsubefoto
			// 
			this->btnsubefoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubefoto->Location = System::Drawing::Point(575, 162);
			this->btnsubefoto->Name = L"btnsubefoto";
			this->btnsubefoto->Size = System::Drawing::Size(137, 23);
			this->btnsubefoto->TabIndex = 7;
			this->btnsubefoto->Text = L"Actualizar Foto";
			this->btnsubefoto->UseVisualStyleBackColor = true;
			this->btnsubefoto->Click += gcnew System::EventHandler(this, &usuario::btnsubefoto_Click);
			// 
			// txtCodigo
			// 
			this->txtCodigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCodigo->Location = System::Drawing::Point(284, 37);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(100, 20);
			this->txtCodigo->TabIndex = 8;
			// 
			// txtCarrerar
			// 
			this->txtCarrerar->Location = System::Drawing::Point(444, 63);
			this->txtCarrerar->Name = L"txtCarrerar";
			this->txtCarrerar->Size = System::Drawing::Size(105, 20);
			this->txtCarrerar->TabIndex = 9;
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(284, 63);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(100, 20);
			this->txtname->TabIndex = 10;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(444, 37);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(105, 20);
			this->txtTelefono->TabIndex = 11;
			// 
			// btnagregar
			// 
			this->btnagregar->BackColor = System::Drawing::Color::Black;
			this->btnagregar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnagregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnagregar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnagregar->Location = System::Drawing::Point(0, 0);
			this->btnagregar->Margin = System::Windows::Forms::Padding(0);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(174, 48);
			this->btnagregar->TabIndex = 14;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = false;
			this->btnagregar->Click += gcnew System::EventHandler(this, &usuario::btnagregar_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::Black;
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
			this->btnEditar->Click += gcnew System::EventHandler(this, &usuario::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Codigo,
					this->Nombres, this->Carrera, this->Telefono
			});
			this->dataGridView1->Location = System::Drawing::Point(257, 242);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(438, 158);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &usuario::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &usuario::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo";
			this->Codigo->Name = L"Codigo";
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombres";
			this->Nombres->Name = L"Nombres";
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Especialidad";
			this->Carrera->Name = L"Carrera";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Contacto";
			this->Telefono->Name = L"Telefono";
			// 
			// pbphoto
			// 
			this->pbphoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbphoto->Location = System::Drawing::Point(575, 37);
			this->pbphoto->Name = L"pbphoto";
			this->pbphoto->Size = System::Drawing::Size(137, 119);
			this->pbphoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbphoto->TabIndex = 6;
			this->pbphoto->TabStop = false;
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Black;
			this->btn_cancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_cancelar->Location = System::Drawing::Point(3, 136);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(174, 44);
			this->btn_cancelar->TabIndex = 19;
			this->btn_cancelar->Text = L"Cancelar ";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &usuario::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->btn_detele);
			this->panel1->Controls->Add(this->btnagregar);
			this->panel1->Controls->Add(this->btn_cancelar);
			this->panel1->Controls->Add(this->btnEditar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 434);
			this->panel1->TabIndex = 20;
			// 
			// btn_detele
			// 
			this->btn_detele->BackColor = System::Drawing::Color::Black;
			this->btn_detele->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_detele->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_detele->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_detele->Location = System::Drawing::Point(0, 93);
			this->btn_detele->Name = L"btn_detele";
			this->btn_detele->Size = System::Drawing::Size(174, 44);
			this->btn_detele->TabIndex = 20;
			this->btn_detele->Text = L"Eliminar";
			this->btn_detele->UseVisualStyleBackColor = false;
			this->btn_detele->Click += gcnew System::EventHandler(this, &usuario::btn_detele_Click);
			// 
			// sideusuario
			// 
			this->sideusuario->Interval = 10;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(284, 176);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 24;
			// 
			// txtLastName
			// 
			this->txtLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtLastName->Location = System::Drawing::Point(284, 93);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(100, 20);
			this->txtLastName->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(220, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Username:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(223, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Apellidos: ";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(284, 202);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(222, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Password:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(399, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Curso:";
			// 
			// txtCurso
			// 
			this->txtCurso->Location = System::Drawing::Point(444, 93);
			this->txtCurso->Name = L"txtCurso";
			this->txtCurso->Size = System::Drawing::Size(105, 20);
			this->txtCurso->TabIndex = 28;
			// 
			// txt_DNI
			// 
			this->txt_DNI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_DNI->Location = System::Drawing::Point(284, 123);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(100, 20);
			this->txt_DNI->TabIndex = 30;
			// 
			// labelDni
			// 
			this->labelDni->AutoSize = true;
			this->labelDni->Location = System::Drawing::Point(223, 125);
			this->labelDni->Name = L"labelDni";
			this->labelDni->Size = System::Drawing::Size(29, 13);
			this->labelDni->TabIndex = 29;
			this->labelDni->Text = L"DNI:";
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(575, 199);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(137, 23);
			this->btnLimpiar->TabIndex = 31;
			this->btnLimpiar->Text = L"Limpiar datos";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &usuario::btnLimpiar_Click);
			// 
			// cBx_Curso
			// 
			this->cBx_Curso->AutoSize = true;
			this->cBx_Curso->Location = System::Drawing::Point(444, 126);
			this->cBx_Curso->Name = L"cBx_Curso";
			this->cBx_Curso->Size = System::Drawing::Size(98, 17);
			this->cBx_Curso->TabIndex = 32;
			this->cBx_Curso->Text = L"No Matriculado";
			this->cBx_Curso->UseVisualStyleBackColor = true;
			this->cBx_Curso->CheckedChanged += gcnew System::EventHandler(this, &usuario::cBx_Curso_CheckedChanged);
			// 
			// chBoxEditar
			// 
			this->chBoxEditar->AutoSize = true;
			this->chBoxEditar->Location = System::Drawing::Point(225, 153);
			this->chBoxEditar->Name = L"chBoxEditar";
			this->chBoxEditar->Size = System::Drawing::Size(102, 17);
			this->chBoxEditar->TabIndex = 33;
			this->chBoxEditar->Text = L"Habilitar Edicion";
			this->chBoxEditar->UseVisualStyleBackColor = true;
			this->chBoxEditar->CheckedChanged += gcnew System::EventHandler(this, &usuario::chBoxEditar_CheckedChanged);
			// 
			// txtId
			// 
			this->txtId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtId->Location = System::Drawing::Point(284, 11);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(26, 20);
			this->txtId->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(254, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Id:";
			// 
			// usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 434);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->chBoxEditar);
			this->Controls->Add(this->cBx_Curso);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->labelDni);
			this->Controls->Add(this->txtCurso);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->txtCarrerar);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->btnsubefoto);
			this->Controls->Add(this->pbphoto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"usuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de Clientes";
			this->Load += gcnew System::EventHandler(this, &usuario::usuario_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphoto))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   String^ CreateUsername(String^ name, String^ lastname) {
			   // Dividir el nombre y apellidos por espacios
			   array<String^>^ nameParts = name->Split(' ');
			   array<String^>^ lastnameParts = lastname->Split(' ');

			   // Tomar la primera letra del primer nombre y el primer apellido completo
			   String^ username = nameParts[0]->Substring(0, 1) + lastnameParts[0];

			   return username;
		   }
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (validar_campos() == 1) {
			return;
		}
		int id = Convert::ToInt32(txtId->Text);
		String^ name = txtname->Text;
		String^ lastname = txtLastName->Text;
		String^ carrera = txtCarrerar->Text;
		int contacto = Convert::ToInt32(txtTelefono->Text);
		int codigo = Convert::ToInt32(txtCodigo->Text);
		int dni = Convert::ToInt32(txt_DNI->Text);
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;
		String^ curso = txtCurso->Text;
		Client^ cliente = gcnew Client();
		cliente->Id = id;
		cliente->Name = name;
		cliente->Lastname = lastname;
		cliente->Carrera = carrera;
		cliente->Contact = contacto;
		cliente->Codigo = codigo;
		cliente->Dni = dni;
		cliente->Username = username;
		cliente->Password = password;
		if (!(cBx_Curso->Checked)) {
			cliente->Curso = curso;
		}
		else {
			cliente->Curso = "NO MATRICULADO";
		}

		if (pbphoto != nullptr && pbphoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbphoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			cliente->Photo = ms->ToArray();
		}

		// Asignar la foto si se implementa la carga de la imagen
		// cliente->Photo = pbphoto->Image;

		Service::UpdateClient(cliente);
		showclient();
		// Mostrar mensaje de éxito
		MessageBox::Show("Cliente editado exitosamente", "Edicion Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   void Clearcontrols() {
			   txtId->Text = "";
			   txtname->Text = "";
			   txtCarrerar->Text = "";
			   txtTelefono->Text = "";
			   txtCodigo->Text = "";
			   txtLastName->Text = "";
			   txt_DNI->Text = "";
			   txtUsername->Text = "";
			   txtPassword->Text = "";
			   txtCurso->Text = "";
			   pbphoto->Image = nullptr; // Limpiar la imagen del PictureBox
		   }
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Clearcontrols();
		btnagregar->Enabled = true;
		btn_cancelar->Enabled = false;


	}
		   int validar_campos() {
			   // Verificar que los cuadros de texto estén completos
			   if (String::IsNullOrWhiteSpace(txtCarrerar->Text) ||
				   String::IsNullOrWhiteSpace(txtCodigo->Text) ||
				   String::IsNullOrWhiteSpace(txtname->Text) ||
				   String::IsNullOrWhiteSpace(txtLastName->Text) ||
				   String::IsNullOrWhiteSpace(txtTelefono->Text) ||
				   String::IsNullOrWhiteSpace(txt_DNI->Text)) {

				   // Mostrar cuadro de mensaje
				   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return 1;
			   }
			   else {
				   return 0;
			   }
		   }
	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar que los cuadros de texto estén completos
		if (validar_campos() == 1) {
			return;
		}
		Int32 codigo = Convert::ToInt32(txtCodigo->Text);
		Int32 dni = Convert::ToInt32(txt_DNI->Text);
		String^ name = txtname->Text;
		String^ carrera = txtCarrerar->Text;
		int contacto = Convert::ToInt32(txtTelefono->Text);
		String^ curso = txtCurso->Text;

		Client^ cliente = gcnew Client();
		cliente->Name = name;
		cliente->Lastname = txtLastName->Text;
		cliente->Codigo = codigo;
		cliente->Carrera = carrera;
		cliente->Contact = contacto;
		cliente->Dni = dni;
		if (!(chBoxEditar->Checked)) {
			cliente->Username = CreateUsername(name, txtLastName->Text);
			cliente->Password = txt_DNI->Text; // Contraseña DNI
		}
		else {
			cliente->Username = txtUsername->Text;
			cliente->Password = txtPassword->Text;
		}
		if (!(cBx_Curso->Checked)) {
			cliente->Curso = curso;
		}
		else {
			cliente->Curso = "NO MATRICULADO";
		}
		if (pbphoto != nullptr && pbphoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbphoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			cliente->Photo = ms->ToArray();
		}
		Service::Addcliente(cliente);
		showclient();
		Clearcontrols();
	}
		   void showclient() {
			   List <Client^>^ Clientxdatos = Service::Queryallcliente();
			   if (Clientxdatos != nullptr) {
				   dataGridView1->Rows->Clear();

				   for (int i = 0; i < Clientxdatos->Count; i++) {
					   dataGridView1->Rows->Add(gcnew array<String^> {"" + Clientxdatos[i]->Id, "" + Clientxdatos[i]->Codigo, Clientxdatos[i]->Name, Clientxdatos[i]->Carrera, "" + Clientxdatos[i]->Contact });
				   }
			   }
		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void txteliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void usuario_load(System::Object^ sender, System::EventArgs^ e) {
		btn_detele->Enabled = false;
		btnEditar->Enabled = false;
		txtPassword->Enabled = false;
		txtUsername->Enabled = false;
		showclient();
		myThread = gcnew Thread(gcnew ThreadStart(this, &usuario::MyRun));
		myThread->Start();
	}
		   delegate void MyDelegate();

		   void MyRun() {
			   while (true) {
				   try {
					   myThread->Sleep(10000);
					   Invoke(gcnew MyDelegate(this, &usuario::showclient));
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }


	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int clienteId = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Client^ cliente = Service::Queryallclienteid(clienteId);

		if (cliente != nullptr) {
			txtId->Text = Convert::ToString(clienteId);
			txtname->Text = cliente->Name;
			txtCarrerar->Text = cliente->Carrera;
			txtCodigo->Text = Convert::ToString(cliente->Codigo);
			txtLastName->Text = cliente->Lastname;
			txt_DNI->Text = Convert::ToString(cliente->Dni);
			txtTelefono->Text = Convert::ToString(cliente->Contact);
			txtUsername->Text = cliente->Username;
			txtPassword->Text = cliente->Password;
			txtCurso->Text = cliente->Curso;

			// Actualizar la foto si existe
			if (cliente->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(cliente->Photo);
				pbphoto->Image = Image::FromStream(ms);
			}
			else {
				pbphoto->Image = nullptr;
				pbphoto->Invalidate();
			}
		}
		btnagregar->Enabled = false;
		btn_detele->Enabled = true;
		btnEditar->Enabled = true;
	}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void btnsubefoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbphoto->Image = gcnew Bitmap(ofd->FileName);
		}
	}
	private: System::Void btn_detele_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		Service::DeleteClient(id);
		showclient();
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		Clearcontrols();
		btnagregar->Enabled = true;
		btn_detele->Enabled = false;
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
	private: System::Void cBx_Curso_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!(cBx_Curso->Checked))
			txtCurso->Enabled = true;
		else
			txtCurso->Enabled = false;

	}
	};

}