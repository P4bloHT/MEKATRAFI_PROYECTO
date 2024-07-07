#pragma once

#include "VerMotores.h"
#include "VentaMotores.h"
#include "ventatornillos.h"
#include "ventaroda.h"
#include "ventafajas.h"
#include "ventapolea.h"

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InterfazCliente
	/// </summary>
	public ref class InterfazCliente : public System::Windows::Forms::Form
	{
	public:
		InterfazCliente(void)
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
		~InterfazCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ btnVerCatalogo;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnMotores;
	private: System::Windows::Forms::Button^ btnRodamientos;


	private: System::Windows::Forms::Button^ btnPoleas;
	private: System::Windows::Forms::Button^ btnFajas;


	private: System::Windows::Forms::Button^ btnTornillos;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfazCliente::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnVerCatalogo = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMotores = (gcnew System::Windows::Forms::Button());
			this->btnRodamientos = (gcnew System::Windows::Forms::Button());
			this->btnPoleas = (gcnew System::Windows::Forms::Button());
			this->btnFajas = (gcnew System::Windows::Forms::Button());
			this->btnTornillos = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(92, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 35);
			this->label4->TabIndex = 28;
			this->label4->Text = L"MekaTrafi";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(24, 32);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(62, 58);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			// 
			// btnVerCatalogo
			// 
			this->btnVerCatalogo->BackColor = System::Drawing::Color::SandyBrown;
			this->btnVerCatalogo->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerCatalogo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVerCatalogo->Location = System::Drawing::Point(176, 448);
			this->btnVerCatalogo->Name = L"btnVerCatalogo";
			this->btnVerCatalogo->Size = System::Drawing::Size(256, 75);
			this->btnVerCatalogo->TabIndex = 25;
			this->btnVerCatalogo->Text = L"Ver Catálogo ->";
			this->btnVerCatalogo->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Location = System::Drawing::Point(200, 472);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(256, 75);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(340, 54);
			this->label3->TabIndex = 23;
			this->label3->Text = L"¿Reparar algo\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(931, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(512, 122);
			this->label2->TabIndex = 22;
			this->label2->Text = L"MekaTrafi";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 128);
			this->label1->TabIndex = 21;
			this->label1->Text = L"¿Algún proyecto entre \r\nmanos\?";
			// 
			// btnMotores
			// 
			this->btnMotores->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnMotores->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMotores->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMotores->Location = System::Drawing::Point(820, 302);
			this->btnMotores->Name = L"btnMotores";
			this->btnMotores->Size = System::Drawing::Size(362, 225);
			this->btnMotores->TabIndex = 20;
			this->btnMotores->Text = L"MOTORES";
			this->btnMotores->UseVisualStyleBackColor = false;
			this->btnMotores->Click += gcnew System::EventHandler(this, &InterfazCliente::btnMotores_Click);
			// 
			// btnRodamientos
			// 
			this->btnRodamientos->BackColor = System::Drawing::Color::Teal;
			this->btnRodamientos->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRodamientos->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRodamientos->Location = System::Drawing::Point(820, 548);
			this->btnRodamientos->Name = L"btnRodamientos";
			this->btnRodamientos->Size = System::Drawing::Size(454, 102);
			this->btnRodamientos->TabIndex = 19;
			this->btnRodamientos->Text = L"RODAMIENTOS";
			this->btnRodamientos->UseVisualStyleBackColor = false;
			this->btnRodamientos->Click += gcnew System::EventHandler(this, &InterfazCliente::btnRodamientos_Click);
			// 
			// btnPoleas
			// 
			this->btnPoleas->BackColor = System::Drawing::Color::Teal;
			this->btnPoleas->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoleas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPoleas->Location = System::Drawing::Point(1214, 306);
			this->btnPoleas->Name = L"btnPoleas";
			this->btnPoleas->Size = System::Drawing::Size(320, 111);
			this->btnPoleas->TabIndex = 18;
			this->btnPoleas->Text = L"POLEAS";
			this->btnPoleas->UseVisualStyleBackColor = false;
			this->btnPoleas->Click += gcnew System::EventHandler(this, &InterfazCliente::btnPoleas_Click);
			// 
			// btnFajas
			// 
			this->btnFajas->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnFajas->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFajas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFajas->Location = System::Drawing::Point(1314, 548);
			this->btnFajas->Name = L"btnFajas";
			this->btnFajas->Size = System::Drawing::Size(220, 102);
			this->btnFajas->TabIndex = 17;
			this->btnFajas->Text = L"FAJAS";
			this->btnFajas->UseVisualStyleBackColor = false;
			this->btnFajas->Click += gcnew System::EventHandler(this, &InterfazCliente::btnFajas_Click);
			// 
			// btnTornillos
			// 
			this->btnTornillos->BackColor = System::Drawing::Color::SandyBrown;
			this->btnTornillos->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTornillos->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTornillos->Location = System::Drawing::Point(1214, 428);
			this->btnTornillos->Name = L"btnTornillos";
			this->btnTornillos->Size = System::Drawing::Size(320, 97);
			this->btnTornillos->TabIndex = 16;
			this->btnTornillos->Text = L"TORNILLOS";
			this->btnTornillos->UseVisualStyleBackColor = false;
			this->btnTornillos->Click += gcnew System::EventHandler(this, &InterfazCliente::btnTornillos_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(158, 638);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(298, 289);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// InterfazCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1632, 983);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->btnVerCatalogo);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMotores);
			this->Controls->Add(this->btnRodamientos);
			this->Controls->Add(this->btnPoleas);
			this->Controls->Add(this->btnFajas);
			this->Controls->Add(this->btnTornillos);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"InterfazCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMotores_Click(System::Object^ sender, System::EventArgs^ e) {
		VentaMotores^ motores = gcnew VentaMotores();
		motores->Show();

	}
private: System::Void btnPoleas_Click(System::Object^ sender, System::EventArgs^ e) {
	ventapolea^ poleas = gcnew ventapolea();
	poleas->Show();
}

private: System::Void btnTornillos_Click(System::Object^ sender, System::EventArgs^ e) {
	ventatornillos^ tornillos = gcnew ventatornillos();
	tornillos->Show();
}
private: System::Void btnRodamientos_Click(System::Object^ sender, System::EventArgs^ e) {
	ventaroda^ rodamientos = gcnew ventaroda();
	rodamientos->Show();
}
private: System::Void btnFajas_Click(System::Object^ sender, System::EventArgs^ e) {
	ventafajas^ fajas = gcnew ventafajas();
	fajas->Show();
}
};
}
