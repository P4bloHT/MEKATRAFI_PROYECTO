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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtcontra = (gcnew System::Windows::Forms::TextBox());
			this->txtcuenta = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->txtcontra);
			this->panel1->Controls->Add(this->txtcuenta);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 189);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 105);
			this->panel1->TabIndex = 0;
			// 
			// txtcontra
			// 
			this->txtcontra->Location = System::Drawing::Point(15, 77);
			this->txtcontra->Name = L"txtcontra";
			this->txtcontra->Size = System::Drawing::Size(163, 20);
			this->txtcontra->TabIndex = 4;
			this->txtcontra->UseSystemPasswordChar = true;
			// 
			// txtcuenta
			// 
			this->txtcuenta->Location = System::Drawing::Point(15, 36);
			this->txtcuenta->Name = L"txtcuenta";
			this->txtcuenta->Size = System::Drawing::Size(163, 20);
			this->txtcuenta->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(12, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(40, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(165, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 341);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(556, 355);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

}
};
}
