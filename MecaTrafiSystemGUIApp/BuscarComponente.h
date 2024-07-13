#pragma once

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MecaTrafiSystemModel;
	using namespace MecaTrafiSystemService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de BuscarComponente
	/// </summary>
	public ref class BuscarComponente : public System::Windows::Forms::Form
	{
	private:
		Form^ refForm;
		
		List<MechanicComponent^>^ componenteList = gcnew List<MechanicComponent^>();

	public:
		BuscarComponente(Form^ refForm)
		{
			this->refForm = refForm;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~BuscarComponente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvComponentes;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtID;


	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnCancelar;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ marca;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbcomponentes;
















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
			this->dgvComponentes = (gcnew System::Windows::Forms::DataGridView());
			this->ComponentId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ComponentName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ComponentPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbcomponentes = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvComponentes
			// 
			this->dgvComponentes->AllowUserToAddRows = false;
			this->dgvComponentes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvComponentes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ComponentId,
					this->ComponentName, this->ComponentPrice, this->stock, this->marca
			});
			this->dgvComponentes->Location = System::Drawing::Point(117, 186);
			this->dgvComponentes->Margin = System::Windows::Forms::Padding(2);
			this->dgvComponentes->Name = L"dgvComponentes";
			this->dgvComponentes->RowHeadersVisible = false;
			this->dgvComponentes->RowHeadersWidth = 62;
			this->dgvComponentes->RowTemplate->Height = 28;
			this->dgvComponentes->Size = System::Drawing::Size(560, 176);
			this->dgvComponentes->TabIndex = 0;
			this->dgvComponentes->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarComponente::dgvComponentes_CellClick);
			// 
			// ComponentId
			// 
			this->ComponentId->HeaderText = L"Id";
			this->ComponentId->MinimumWidth = 8;
			this->ComponentId->Name = L"ComponentId";
			this->ComponentId->Width = 80;
			// 
			// ComponentName
			// 
			this->ComponentName->HeaderText = L"Nombre";
			this->ComponentName->MinimumWidth = 8;
			this->ComponentName->Name = L"ComponentName";
			this->ComponentName->Width = 200;
			// 
			// ComponentPrice
			// 
			this->ComponentPrice->HeaderText = L"P.U.";
			this->ComponentPrice->MinimumWidth = 8;
			this->ComponentPrice->Name = L"ComponentPrice";
			this->ComponentPrice->Width = 80;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			// 
			// marca
			// 
			this->marca->HeaderText = L"Marca";
			this->marca->Name = L"marca";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(304, 54);
			this->txtID->Margin = System::Windows::Forms::Padding(2);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(222, 20);
			this->txtID->TabIndex = 3;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(304, 97);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(222, 20);
			this->txtNombre->TabIndex = 4;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::SandyBrown;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuscar->Location = System::Drawing::Point(210, 135);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(97, 36);
			this->btnBuscar->TabIndex = 5;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BuscarComponente::btnBuscar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::DarkSlateGray;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Gadugi", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCancelar->Location = System::Drawing::Point(414, 135);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(2);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(101, 36);
			this->btnCancelar->TabIndex = 6;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &BuscarComponente::btnCancelar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(144, 54);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 17);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Codigo PUCP";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 100);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(175, 21);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Producto";
			// 
			// cmbcomponentes
			// 
			this->cmbcomponentes->FormattingEnabled = true;
			this->cmbcomponentes->Location = System::Drawing::Point(304, 17);
			this->cmbcomponentes->Name = L"cmbcomponentes";
			this->cmbcomponentes->Size = System::Drawing::Size(222, 21);
			this->cmbcomponentes->TabIndex = 29;
			// 
			// BuscarComponente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 412);
			this->Controls->Add(this->cmbcomponentes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->dgvComponentes);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"BuscarComponente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void ShowComponent();

		  // void AddComponentToGrid(MechanicComponent^ componente) {
			//   dgvComponentes->Rows->Add(gcnew array<String^>{"" + componente->Id, componente->Name, "" + componente->UnitaryPrice, "" + componente->Stock, componente->Brand  });
		 //  }

		   //botonbuscar
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e);
	

	

private: System::Void dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};
}
