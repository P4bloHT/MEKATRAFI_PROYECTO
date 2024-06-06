#pragma once
#include "AgregarEmpleado.h"
#include "usuario.h"
#include "CompraStockForm.h"

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ SlideBarContainer;
	protected:


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Panel^ SliderBar;
	private: System::Windows::Forms::Button^ btnPrincipal;


	private: System::Windows::Forms::Button^ btnReportes;

	private: System::Windows::Forms::Button^ btnPersonal;

	private: System::Windows::Forms::PictureBox^ MenuBtn;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ SliderbarTimer;
	private: System::Windows::Forms::Button^ btnAgregarPersonal;



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
			System::Windows::Forms::Button^ btnAgregarProduct;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			System::Windows::Forms::Button^ btnAgregarClientes;
			System::Windows::Forms::Button^ btnComprarProductos;
			System::Windows::Forms::Button^ BtnAgregarTask;
			this->SlideBarContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SliderBar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MenuBtn = (gcnew System::Windows::Forms::PictureBox());
			this->btnPrincipal = (gcnew System::Windows::Forms::Button());
			this->btnReportes = (gcnew System::Windows::Forms::Button());
			this->btnPersonal = (gcnew System::Windows::Forms::Button());
			this->btnAgregarPersonal = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SliderbarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			btnAgregarProduct = (gcnew System::Windows::Forms::Button());
			btnAgregarClientes = (gcnew System::Windows::Forms::Button());
			btnComprarProductos = (gcnew System::Windows::Forms::Button());
			BtnAgregarTask = (gcnew System::Windows::Forms::Button());
			this->SlideBarContainer->SuspendLayout();
			this->SliderBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAgregarProduct
			// 
			btnAgregarProduct->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			btnAgregarProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			btnAgregarProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			btnAgregarProduct->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			btnAgregarProduct->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			btnAgregarProduct->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			btnAgregarProduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregarProduct.Image")));
			btnAgregarProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btnAgregarProduct->Location = System::Drawing::Point(204, 121);
			btnAgregarProduct->Name = L"btnAgregarProduct";
			btnAgregarProduct->Size = System::Drawing::Size(258, 65);
			btnAgregarProduct->TabIndex = 14;
			btnAgregarProduct->Text = L"AGREGAR AL STOCK";
			btnAgregarProduct->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			btnAgregarProduct->UseVisualStyleBackColor = false;
			btnAgregarProduct->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click_1);
			// 
			// btnAgregarClientes
			// 
			btnAgregarClientes->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			btnAgregarClientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			btnAgregarClientes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			btnAgregarClientes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			btnAgregarClientes->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			btnAgregarClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			btnAgregarClientes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregarClientes.Image")));
			btnAgregarClientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btnAgregarClientes->Location = System::Drawing::Point(468, 121);
			btnAgregarClientes->Name = L"btnAgregarClientes";
			btnAgregarClientes->Size = System::Drawing::Size(258, 65);
			btnAgregarClientes->TabIndex = 15;
			btnAgregarClientes->Text = L"NUEVOS CLIENTES";
			btnAgregarClientes->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			btnAgregarClientes->UseVisualStyleBackColor = false;
			btnAgregarClientes->Click += gcnew System::EventHandler(this, &AdminForm::btnAgregarClientes_Click);
			// 
			// btnComprarProductos
			// 
			btnComprarProductos->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			btnComprarProductos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			btnComprarProductos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			btnComprarProductos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			btnComprarProductos->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			btnComprarProductos->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			btnComprarProductos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComprarProductos.Image")));
			btnComprarProductos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			btnComprarProductos->Location = System::Drawing::Point(732, 121);
			btnComprarProductos->Name = L"btnComprarProductos";
			btnComprarProductos->Size = System::Drawing::Size(258, 65);
			btnComprarProductos->TabIndex = 16;
			btnComprarProductos->Text = L"COMPRAR PRODUCTOS";
			btnComprarProductos->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			btnComprarProductos->UseVisualStyleBackColor = false;
			btnComprarProductos->Click += gcnew System::EventHandler(this, &AdminForm::btnComprarProductos_Click);
			// 
			// BtnAgregarTask
			// 
			BtnAgregarTask->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			BtnAgregarTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			BtnAgregarTask->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			BtnAgregarTask->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			BtnAgregarTask->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			BtnAgregarTask->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			BtnAgregarTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnAgregarTask.Image")));
			BtnAgregarTask->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			BtnAgregarTask->Location = System::Drawing::Point(996, 121);
			BtnAgregarTask->Name = L"BtnAgregarTask";
			BtnAgregarTask->Size = System::Drawing::Size(258, 65);
			BtnAgregarTask->TabIndex = 17;
			BtnAgregarTask->Text = L"REPORTES";
			BtnAgregarTask->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			BtnAgregarTask->UseVisualStyleBackColor = false;
			// 
			// SlideBarContainer
			// 
			this->SlideBarContainer->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SlideBarContainer->Controls->Add(this->SliderBar);
			this->SlideBarContainer->Controls->Add(this->btnPrincipal);
			this->SlideBarContainer->Controls->Add(this->btnReportes);
			this->SlideBarContainer->Controls->Add(this->btnPersonal);
			this->SlideBarContainer->Controls->Add(this->btnAgregarPersonal);
			this->SlideBarContainer->Dock = System::Windows::Forms::DockStyle::Left;
			this->SlideBarContainer->Location = System::Drawing::Point(0, 0);
			this->SlideBarContainer->MaximumSize = System::Drawing::Size(157, 722);
			this->SlideBarContainer->MinimumSize = System::Drawing::Size(53, 722);
			this->SlideBarContainer->Name = L"SlideBarContainer";
			this->SlideBarContainer->Size = System::Drawing::Size(157, 722);
			this->SlideBarContainer->TabIndex = 7;
			this->SlideBarContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::flowLayoutPanel3_Paint);
			// 
			// SliderBar
			// 
			this->SliderBar->Controls->Add(this->label1);
			this->SliderBar->Controls->Add(this->MenuBtn);
			this->SliderBar->Location = System::Drawing::Point(3, 3);
			this->SliderBar->Name = L"SliderBar";
			this->SliderBar->Size = System::Drawing::Size(208, 97);
			this->SliderBar->TabIndex = 18;
			this->SliderBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::SliderBar_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 28);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Menu";
			// 
			// MenuBtn
			// 
			this->MenuBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MenuBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuBtn.Image")));
			this->MenuBtn->Location = System::Drawing::Point(4, 30);
			this->MenuBtn->Name = L"MenuBtn";
			this->MenuBtn->Size = System::Drawing::Size(37, 33);
			this->MenuBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MenuBtn->TabIndex = 0;
			this->MenuBtn->TabStop = false;
			this->MenuBtn->Click += gcnew System::EventHandler(this, &AdminForm::MenuBtn_Click);
			// 
			// btnPrincipal
			// 
			this->btnPrincipal->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPrincipal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrincipal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrincipal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrincipal.Image")));
			this->btnPrincipal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrincipal->Location = System::Drawing::Point(3, 106);
			this->btnPrincipal->Name = L"btnPrincipal";
			this->btnPrincipal->Size = System::Drawing::Size(199, 42);
			this->btnPrincipal->TabIndex = 21;
			this->btnPrincipal->Text = L"            Principal";
			this->btnPrincipal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrincipal->UseVisualStyleBackColor = true;
			this->btnPrincipal->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// btnReportes
			// 
			this->btnReportes->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnReportes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReportes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReportes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReportes.Image")));
			this->btnReportes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReportes->Location = System::Drawing::Point(3, 154);
			this->btnReportes->Name = L"btnReportes";
			this->btnReportes->Size = System::Drawing::Size(199, 42);
			this->btnReportes->TabIndex = 22;
			this->btnReportes->Text = L"            Reportes";
			this->btnReportes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReportes->UseVisualStyleBackColor = true;
			// 
			// btnPersonal
			// 
			this->btnPersonal->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPersonal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersonal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersonal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersonal.Image")));
			this->btnPersonal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonal->Location = System::Drawing::Point(3, 202);
			this->btnPersonal->Name = L"btnPersonal";
			this->btnPersonal->Size = System::Drawing::Size(199, 42);
			this->btnPersonal->TabIndex = 23;
			this->btnPersonal->Text = L"            Personal";
			this->btnPersonal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonal->UseVisualStyleBackColor = true;
			// 
			// btnAgregarPersonal
			// 
			this->btnAgregarPersonal->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnAgregarPersonal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAgregarPersonal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarPersonal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregarPersonal.Image")));
			this->btnAgregarPersonal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregarPersonal->Location = System::Drawing::Point(3, 250);
			this->btnAgregarPersonal->Name = L"btnAgregarPersonal";
			this->btnAgregarPersonal->Size = System::Drawing::Size(199, 42);
			this->btnAgregarPersonal->TabIndex = 24;
			this->btnAgregarPersonal->Text = L"         Empleados";
			this->btnAgregarPersonal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregarPersonal->UseVisualStyleBackColor = true;
			this->btnAgregarPersonal->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel3->Location = System::Drawing::Point(157, 0);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(1104, 100);
			this->flowLayoutPanel3->TabIndex = 8;
			this->flowLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::flowLayoutPanel3_Paint);
			// 
			// SliderbarTimer
			// 
			this->SliderbarTimer->Interval = 5;
			this->SliderbarTimer->Tick += gcnew System::EventHandler(this, &AdminForm::slidebarTimer_Tick);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1261, 675);
			this->Controls->Add(BtnAgregarTask);
			this->Controls->Add(btnComprarProductos);
			this->Controls->Add(btnAgregarClientes);
			this->Controls->Add(btnAgregarProduct);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->SlideBarContainer);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(1279, 722);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->SlideBarContainer->ResumeLayout(false);
			this->SliderBar->ResumeLayout(false);
			this->SliderBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuBtn))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void flowLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}


	   static bool sidebarexpand= true;
private: System::Void slidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	// Set the Minimum and maximun size of sideBar Panel
	if (sidebarexpand) {
		// if sidebar is expand, minimize 
		SlideBarContainer->Width -= 10; // Nombre Panel lateral
		if (SlideBarContainer->Width <= 36) {
			sidebarexpand = true; // Nombre bandera
			SliderbarTimer->Stop(); //Nombre Timer

		}

	}
	else {
		SlideBarContainer->Width += 10;
		if (SlideBarContainer->Width >= 158) {
			sidebarexpand = false;
			SliderbarTimer->Stop();

		}

	}
}
private: System::Void SliderBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MenuBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ser timer internal to lowest to make it smoother
	SliderbarTimer->Start();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Form^ agregarEmpleado = gcnew Form();
	AgregarEmpleado^ agregarEmpleado = gcnew AgregarEmpleado();
	agregarEmpleado->Show();
}
	   bool bandera = true;
	   usuario^ agregarCliente = nullptr;
private: System::Void btnAgregarClientes_Click(System::Object^ sender, System::EventArgs^ e) {
	//usuario^ agregarCliente = gcnew usuario();
	if (bandera) {
		if (agregarCliente == nullptr || !agregarCliente->Visible) {
			agregarCliente = gcnew usuario();
			agregarCliente->Show();
		}
		bandera = false;
	}
}
private: System::Void btnComprarProductos_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

