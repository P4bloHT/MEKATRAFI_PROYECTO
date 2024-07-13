#pragma once
#include "EmployeeForm.h"
#include "AdminForm.h"
#include "InterfazCliente.h"
namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MecaTrafiSystemService;
	using namespace MecaTrafiSystemModel;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login::Login(User^ usuario)
		{
			InitializeComponent();
			this->user = usuario;
		}
		Login::User^ GetUser() {
			return user;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: User^ user;
	private: int isRegisterDone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ txtcontra;

	private: System::Windows::Forms::TextBox^ txtcuenta;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ CBMostrarContrasena;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->CBMostrarContrasena = (gcnew System::Windows::Forms::CheckBox());
			this->txtcontra = (gcnew System::Windows::Forms::TextBox());
			this->txtcuenta = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// CBMostrarContrasena
			// 
			this->CBMostrarContrasena->AutoSize = true;
			this->CBMostrarContrasena->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CBMostrarContrasena->Location = System::Drawing::Point(155, 295);
			this->CBMostrarContrasena->Margin = System::Windows::Forms::Padding(2);
			this->CBMostrarContrasena->Name = L"CBMostrarContrasena";
			this->CBMostrarContrasena->Size = System::Drawing::Size(163, 23);
			this->CBMostrarContrasena->TabIndex = 5;
			this->CBMostrarContrasena->Text = L"Mostrar contraseña";
			this->CBMostrarContrasena->UseVisualStyleBackColor = true;
			this->CBMostrarContrasena->CheckedChanged += gcnew System::EventHandler(this, &Login::CBMostrarContrasena_CheckedChanged);
			// 
			// txtcontra
			// 
			this->txtcontra->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcontra->Location = System::Drawing::Point(155, 260);
			this->txtcontra->Name = L"txtcontra";
			this->txtcontra->Size = System::Drawing::Size(163, 33);
			this->txtcontra->TabIndex = 4;
			this->txtcontra->UseSystemPasswordChar = true;
			this->txtcontra->Click += gcnew System::EventHandler(this, &Login::txtcontra_Click);
			// 
			// txtcuenta
			// 
			this->txtcuenta->Font = (gcnew System::Drawing::Font(L"Century", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcuenta->Location = System::Drawing::Point(155, 165);
			this->txtcuenta->Name = L"txtcuenta";
			this->txtcuenta->Size = System::Drawing::Size(163, 33);
			this->txtcuenta->TabIndex = 3;
			this->txtcuenta->Click += gcnew System::EventHandler(this, &Login::txtcuenta_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(151, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(151, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(119, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(325, 381);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(895, 502);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(8, 11);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 17);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 23);
			this->label4->TabIndex = 29;
			this->label4->Text = L"MekaTrafi";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(895, 502);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtcuenta);
			this->Controls->Add(this->txtcontra);
			this->Controls->Add(this->CBMostrarContrasena);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//EmployeeForm^ employee = gcnew EmployeeForm();
		//employee->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SignIn();
	}
		   void SignIn() {
			   User^ usercheck = Service::QueryUserByName(txtcuenta->Text);

			   if ((txtcuenta->Text == "admin") && (txtcontra->Text == "admin")) {
				   this->Hide();
				   AdminForm^ obj = gcnew AdminForm();
				   obj->ShowDialog();

					this->Show();

			   }
			   else if (usercheck != nullptr) {
				   if (txtcontra->Text == usercheck->Password) {
					   MessageBox::Show("Bienvenido " + usercheck->Name);
					   user = usercheck;
					   this->Hide();
				   }
				   else {
					   MessageBox::Show("Contraseña incorrecta para " + usercheck->Name + ". Ingrese los datos de nuevo.");
					   this->txtcuenta->Text = L"Username";
					   this->txtcontra->Text = L"Password";
				   }
			   }
			   else {
				   MessageBox::Show("Usuario o contraseña incorrectos. Ingrese los datos de nuevo.");
				   this->txtcuenta->Text = L"Username";
				   this->txtcontra->Text = L"Password";

			   }
		   }
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Gracias por utilizar MecaTrafi");
		Application::Exit();
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		txtcuenta->Text == "Username";
		txtcontra->Text = "Password";
	}
	private: System::Void CBMostrarContrasena_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			   if (CBMostrarContrasena->Checked == true) {
				   txtcontra->UseSystemPasswordChar = false;
			   }
			   else {
				   txtcontra->UseSystemPasswordChar = true;
			   }
		   }
	private: System::Void txtcuenta_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtcuenta->Text == "Username") {
			txtcuenta->Text = "";
		}
		if (txtcontra->Text == "") {
			txtcontra->Text = "Username";
		}
	}
private: System::Void txtcontra_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtcontra->Text == "Password") {
		txtcontra->Text = "";
	}
	if (txtcuenta->Text == "") {
		txtcuenta->Text = "Username";
	}
}
};
}
