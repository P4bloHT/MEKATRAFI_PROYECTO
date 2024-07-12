#pragma once

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ventatornillos
	/// </summary>
	public ref class ventatornillos : public System::Windows::Forms::Form
	{
	public:
		ventatornillos(void)
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
		~ventatornillos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbMotorACPhoto;
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
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tamano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Longitud;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DiamExt;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DimInt;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Material;







	protected:

	protected:









































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
			this->pbMotorACPhoto = (gcnew System::Windows::Forms::PictureBox());
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
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tamano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Longitud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DiamExt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DimInt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Material = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(1022, 684);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 143;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ventatornillos::button1_Click);
			// 
			// pbMotorACPhoto
			// 
			this->pbMotorACPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbMotorACPhoto->Location = System::Drawing::Point(796, 51);
			this->pbMotorACPhoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbMotorACPhoto->Name = L"pbMotorACPhoto";
			this->pbMotorACPhoto->Size = System::Drawing::Size(204, 177);
			this->pbMotorACPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMotorACPhoto->TabIndex = 241;
			this->pbMotorACPhoto->TabStop = false;
			// 
			// txtMotorACFormaFijacion
			// 
			this->txtMotorACFormaFijacion->Location = System::Drawing::Point(577, 198);
			this->txtMotorACFormaFijacion->Name = L"txtMotorACFormaFijacion";
			this->txtMotorACFormaFijacion->Size = System::Drawing::Size(139, 26);
			this->txtMotorACFormaFijacion->TabIndex = 240;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(403, 190);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(85, 38);
			this->label72->TabIndex = 239;
			this->label72->Text = L"Diametro \r\ninterno\r\n";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(71, 272);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(73, 19);
			this->label73->TabIndex = 238;
			this->label73->Text = L"Material";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(71, 190);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(85, 38);
			this->label76->TabIndex = 237;
			this->label76->Text = L"Diametro \r\nexterno\r\n";
			// 
			// txtMotorACInversorCompatilbidad
			// 
			this->txtMotorACInversorCompatilbidad->Location = System::Drawing::Point(221, 265);
			this->txtMotorACInversorCompatilbidad->Name = L"txtMotorACInversorCompatilbidad";
			this->txtMotorACInversorCompatilbidad->Size = System::Drawing::Size(134, 26);
			this->txtMotorACInversorCompatilbidad->TabIndex = 236;
			// 
			// txtMotorACTipoProteccion
			// 
			this->txtMotorACTipoProteccion->Location = System::Drawing::Point(221, 198);
			this->txtMotorACTipoProteccion->Name = L"txtMotorACTipoProteccion";
			this->txtMotorACTipoProteccion->Size = System::Drawing::Size(134, 26);
			this->txtMotorACTipoProteccion->TabIndex = 235;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(71, 136);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(71, 19);
			this->label78->TabIndex = 234;
			this->label78->Text = L"Tamaño";
			// 
			// txtMotorACPotencia
			// 
			this->txtMotorACPotencia->Location = System::Drawing::Point(543, 132);
			this->txtMotorACPotencia->Name = L"txtMotorACPotencia";
			this->txtMotorACPotencia->Size = System::Drawing::Size(174, 26);
			this->txtMotorACPotencia->TabIndex = 233;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(423, 136);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(78, 19);
			this->label79->TabIndex = 232;
			this->label79->Text = L"Longitud";
			// 
			// txtMotorACFrame
			// 
			this->txtMotorACFrame->Location = System::Drawing::Point(221, 132);
			this->txtMotorACFrame->Name = L"txtMotorACFrame";
			this->txtMotorACFrame->Size = System::Drawing::Size(134, 26);
			this->txtMotorACFrame->TabIndex = 231;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(71, 71);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(64, 19);
			this->label82->TabIndex = 227;
			this->label82->Text = L"Código";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Gadugi", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(283, 71);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(72, 19);
			this->label83->TabIndex = 228;
			this->label83->Text = L"Nombre";
			// 
			// txtMotorACId
			// 
			this->txtMotorACId->Location = System::Drawing::Point(146, 68);
			this->txtMotorACId->Name = L"txtMotorACId";
			this->txtMotorACId->Size = System::Drawing::Size(62, 26);
			this->txtMotorACId->TabIndex = 229;
			// 
			// txtMotorACName
			// 
			this->txtMotorACName->Location = System::Drawing::Point(384, 68);
			this->txtMotorACName->Name = L"txtMotorACName";
			this->txtMotorACName->Size = System::Drawing::Size(332, 26);
			this->txtMotorACName->TabIndex = 230;
			// 
			// btnEmpUpdatePhoto
			// 
			this->btnEmpUpdatePhoto->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpUpdatePhoto->Location = System::Drawing::Point(796, 255);
			this->btnEmpUpdatePhoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEmpUpdatePhoto->Name = L"btnEmpUpdatePhoto";
			this->btnEmpUpdatePhoto->Size = System::Drawing::Size(204, 53);
			this->btnEmpUpdatePhoto->TabIndex = 226;
			this->btnEmpUpdatePhoto->Text = L"Mostrar Foto";
			this->btnEmpUpdatePhoto->UseVisualStyleBackColor = true;
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCancelar->Location = System::Drawing::Point(565, 336);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(152, 55);
			this->btnCancelar->TabIndex = 225;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::SandyBrown;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuscar->Location = System::Drawing::Point(287, 336);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(146, 55);
			this->btnBuscar->TabIndex = 224;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Codigo,
					this->Nombre, this->Tamano, this->Longitud, this->DiamExt, this->DimInt, this->Material
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 423);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1090, 241);
			this->dataGridView1->TabIndex = 223;
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
			// Tamano
			// 
			this->Tamano->HeaderText = L"Tamaño";
			this->Tamano->MinimumWidth = 8;
			this->Tamano->Name = L"Tamano";
			this->Tamano->Width = 150;
			// 
			// Longitud
			// 
			this->Longitud->HeaderText = L"Longitud";
			this->Longitud->MinimumWidth = 8;
			this->Longitud->Name = L"Longitud";
			this->Longitud->Width = 150;
			// 
			// DiamExt
			// 
			this->DiamExt->HeaderText = L"Diámetro externo";
			this->DiamExt->MinimumWidth = 8;
			this->DiamExt->Name = L"DiamExt";
			this->DiamExt->Width = 150;
			// 
			// DimInt
			// 
			this->DimInt->HeaderText = L"Diámetro interno";
			this->DimInt->MinimumWidth = 8;
			this->DimInt->Name = L"DimInt";
			this->DimInt->Width = 150;
			// 
			// Material
			// 
			this->Material->HeaderText = L"Material";
			this->Material->MinimumWidth = 8;
			this->Material->Name = L"Material";
			this->Material->Width = 150;
			// 
			// ventatornillos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1191, 757);
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
			this->Name = L"ventatornillos";
			this->Text = L"Tornillos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
