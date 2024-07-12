#pragma once

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentaMotores
	/// </summary>
	public ref class VentaMotores : public System::Windows::Forms::Form
	{
	public:
		VentaMotores(void)
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
		~VentaMotores()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






























	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::TextBox^ txtMotorACFormaFijacion;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::TextBox^ txtMotorACInversorCompatilbidad;
	private: System::Windows::Forms::TextBox^ txtMotorACTipoProteccion;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::TextBox^ txtMotorACPotencia;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::TextBox^ txtMotorACFrame;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::TextBox^ txtMotorACId;
	private: System::Windows::Forms::TextBox^ txtMotorACName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Frame;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Potencia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Protección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::PictureBox^ pbMotorACPhoto;




















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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->txtMotorACFormaFijacion = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACInversorCompatilbidad = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACTipoProteccion = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACPotencia = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACFrame = (gcnew System::Windows::Forms::TextBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACId = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACName = (gcnew System::Windows::Forms::TextBox());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Frame = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Potencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Protección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbMotorACPhoto = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(870, 669);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 144;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VentaMotores::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Codigo,
					this->Nombre, this->Frame, this->Potencia, this->Protección, this->Precio
			});
			this->dataGridView1->Location = System::Drawing::Point(105, 421);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(828, 241);
			this->dataGridView1->TabIndex = 145;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VentaMotores::dataGridView1_CellContentClick);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::SandyBrown;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuscar->Location = System::Drawing::Point(283, 333);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(146, 55);
			this->btnBuscar->TabIndex = 148;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCancelar->Location = System::Drawing::Point(561, 333);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(152, 55);
			this->btnCancelar->TabIndex = 149;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			// 
			// btnEmpUpdatePhoto
			// 
			this->btnEmpUpdatePhoto->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpUpdatePhoto->Location = System::Drawing::Point(792, 252);
			this->btnEmpUpdatePhoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEmpUpdatePhoto->Name = L"btnEmpUpdatePhoto";
			this->btnEmpUpdatePhoto->Size = System::Drawing::Size(204, 53);
			this->btnEmpUpdatePhoto->TabIndex = 150;
			this->btnEmpUpdatePhoto->Text = L"Mostrar Foto";
			this->btnEmpUpdatePhoto->UseVisualStyleBackColor = true;
			this->btnEmpUpdatePhoto->Click += gcnew System::EventHandler(this, &VentaMotores::btnEmpUpdatePhoto_Click);
			// 
			// txtMotorACFormaFijacion
			// 
			this->txtMotorACFormaFijacion->Location = System::Drawing::Point(573, 199);
			this->txtMotorACFormaFijacion->Name = L"txtMotorACFormaFijacion";
			this->txtMotorACFormaFijacion->Size = System::Drawing::Size(139, 26);
			this->txtMotorACFormaFijacion->TabIndex = 164;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(423, 202);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(144, 19);
			this->label72->TabIndex = 163;
			this->label72->Text = L"Forma de Fijacion";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(67, 269);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(222, 19);
			this->label73->TabIndex = 162;
			this->label73->Text = L"Compatibilidad del inversor";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(67, 202);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(158, 19);
			this->label76->TabIndex = 161;
			this->label76->Text = L"Clase de Protección";
			// 
			// txtMotorACInversorCompatilbidad
			// 
			this->txtMotorACInversorCompatilbidad->Location = System::Drawing::Point(306, 267);
			this->txtMotorACInversorCompatilbidad->Name = L"txtMotorACInversorCompatilbidad";
			this->txtMotorACInversorCompatilbidad->Size = System::Drawing::Size(174, 26);
			this->txtMotorACInversorCompatilbidad->TabIndex = 160;
			// 
			// txtMotorACTipoProteccion
			// 
			this->txtMotorACTipoProteccion->Location = System::Drawing::Point(243, 199);
			this->txtMotorACTipoProteccion->Name = L"txtMotorACTipoProteccion";
			this->txtMotorACTipoProteccion->Size = System::Drawing::Size(160, 26);
			this->txtMotorACTipoProteccion->TabIndex = 159;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(67, 133);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(56, 19);
			this->label78->TabIndex = 158;
			this->label78->Text = L"Frame";
			// 
			// txtMotorACPotencia
			// 
			this->txtMotorACPotencia->Location = System::Drawing::Point(538, 133);
			this->txtMotorACPotencia->Name = L"txtMotorACPotencia";
			this->txtMotorACPotencia->Size = System::Drawing::Size(174, 26);
			this->txtMotorACPotencia->TabIndex = 157;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(396, 136);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(76, 19);
			this->label79->TabIndex = 156;
			this->label79->Text = L"Potencia";
			// 
			// txtMotorACFrame
			// 
			this->txtMotorACFrame->Location = System::Drawing::Point(142, 131);
			this->txtMotorACFrame->Name = L"txtMotorACFrame";
			this->txtMotorACFrame->Size = System::Drawing::Size(202, 26);
			this->txtMotorACFrame->TabIndex = 155;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(67, 68);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(64, 19);
			this->label82->TabIndex = 151;
			this->label82->Text = L"Código";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(279, 68);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(72, 19);
			this->label83->TabIndex = 152;
			this->label83->Text = L"Nombre";
			// 
			// txtMotorACId
			// 
			this->txtMotorACId->Location = System::Drawing::Point(142, 65);
			this->txtMotorACId->Name = L"txtMotorACId";
			this->txtMotorACId->Size = System::Drawing::Size(62, 26);
			this->txtMotorACId->TabIndex = 153;
			// 
			// txtMotorACName
			// 
			this->txtMotorACName->Location = System::Drawing::Point(380, 65);
			this->txtMotorACName->Name = L"txtMotorACName";
			this->txtMotorACName->Size = System::Drawing::Size(332, 26);
			this->txtMotorACName->TabIndex = 154;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->MinimumWidth = 8;
			this->Codigo->Name = L"Codigo";
			this->Codigo->Width = 150;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 8;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 150;
			// 
			// Frame
			// 
			this->Frame->HeaderText = L"Frame";
			this->Frame->MinimumWidth = 8;
			this->Frame->Name = L"Frame";
			this->Frame->Width = 150;
			// 
			// Potencia
			// 
			this->Potencia->HeaderText = L"Potencia";
			this->Potencia->MinimumWidth = 8;
			this->Potencia->Name = L"Potencia";
			this->Potencia->Width = 150;
			// 
			// Protección
			// 
			this->Protección->HeaderText = L"Protección";
			this->Protección->MinimumWidth = 8;
			this->Protección->Name = L"Protección";
			this->Protección->Width = 150;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 8;
			this->Precio->Name = L"Precio";
			this->Precio->Width = 150;
			// 
			// pbMotorACPhoto
			// 
			this->pbMotorACPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbMotorACPhoto->Location = System::Drawing::Point(792, 48);
			this->pbMotorACPhoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbMotorACPhoto->Name = L"pbMotorACPhoto";
			this->pbMotorACPhoto->Size = System::Drawing::Size(204, 177);
			this->pbMotorACPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMotorACPhoto->TabIndex = 165;
			this->pbMotorACPhoto->TabStop = false;
			// 
			// VentaMotores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 736);
			this->Controls->Add(this->pbMotorACPhoto);
			this->Controls->Add(this->txtMotorACFormaFijacion);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->txtMotorACInversorCompatilbidad);
			this->Controls->Add(this->txtMotorACTipoProteccion);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->txtMotorACPotencia);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->txtMotorACFrame);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->txtMotorACId);
			this->Controls->Add(this->txtMotorACName);
			this->Controls->Add(this->btnEmpUpdatePhoto);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"VentaMotores";
			this->Text = L"Motores ";
			this->Load += gcnew System::EventHandler(this, &VentaMotores::VentaMotores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void VentaMotores_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Mostrar el stock de los motores*/
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEmpUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
