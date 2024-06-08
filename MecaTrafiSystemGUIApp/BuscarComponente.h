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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::TextBox^ txtID;


	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ComponentPrice;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvComponentes
			// 
			this->dgvComponentes->AllowUserToAddRows = false;
			this->dgvComponentes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvComponentes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ComponentId,
					this->ComponentName, this->ComponentPrice
			});
			this->dgvComponentes->Location = System::Drawing::Point(130, 310);
			this->dgvComponentes->Name = L"dgvComponentes";
			this->dgvComponentes->RowHeadersVisible = false;
			this->dgvComponentes->RowHeadersWidth = 62;
			this->dgvComponentes->RowTemplate->Height = 28;
			this->dgvComponentes->Size = System::Drawing::Size(834, 271);
			this->dgvComponentes->TabIndex = 0;
			this->dgvComponentes->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarComponente::dgvComponentes_CellClick);
			// 
			// ComponentId
			// 
			this->ComponentId->HeaderText = L"Id";
			this->ComponentId->MinimumWidth = 8;
			this->ComponentId->Name = L"ComponentId";
			this->ComponentId->Width = 150;
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
			this->ComponentPrice->Width = 200;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(294, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(294, 130);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(65, 20);
			this->Nombre->TabIndex = 2;
			this->Nombre->Text = L"Nombre";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(456, 73);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(331, 26);
			this->txtID->TabIndex = 3;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(456, 127);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(331, 26);
			this->txtNombre->TabIndex = 4;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(315, 225);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(128, 40);
			this->btnBuscar->TabIndex = 5;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BuscarComponente::btnBuscar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(620, 225);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(128, 40);
			this->btnCancelar->TabIndex = 6;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &BuscarComponente::btnCancelar_Click);
			// 
			// BuscarComponente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 634);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvComponentes);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"BuscarComponente";
			this->Text = L"BuscarComponente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   void AddComponentToGrid(MechanicComponent^ componente) {
			   dgvComponentes->Rows->Add(gcnew array<String^>{"" + componente->Id, componente->Name, "" + componente->UnitaryPrice});
		   }


private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvComponentes->Rows->Clear();

	if (txtID->Text->Trim()->Equals("")) {//Si en la caja de texto es un espacio en blanco
		List<MechanicComponent^>^ fajalist = Service::QueryfajasByName(txtNombre->Text->Trim());
		for (int i = 0; i < fajalist->Count; i++)
			AddComponentToGrid(fajalist[i]);
	}
	else {
		MechanicComponent^ faja = Service::Queryallfajasid(Convert::ToInt32(txtID->Text));
		//AddFajaToGrid()
	}
}
private: System::Void dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
