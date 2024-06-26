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
	/// Resumen de PurchaseSearchForm
	/// </summary>
	public ref class PurchaseSearchForm : public System::Windows::Forms::Form
	{
	private:
		Form^ refform;
	public:
		PurchaseSearchForm(Form^ refform)
		{
			this->refform = refform; //Variable de referencia
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PurchaseSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCancelar;
	protected:
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvComponentes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PurchaseId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Producto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioUnitario;




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
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvComponentes = (gcnew System::Windows::Forms::DataGridView());
			this->PurchaseId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Producto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioUnitario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(541, 191);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(2);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(85, 26);
			this->btnCancelar->TabIndex = 13;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &PurchaseSearchForm::btnCancelar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(338, 191);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(85, 26);
			this->btnBuscar->TabIndex = 12;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &PurchaseSearchForm::btnBuscar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(404, 116);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(222, 20);
			this->txtNombre->TabIndex = 11;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(404, 81);
			this->txtID->Margin = System::Windows::Forms::Padding(2);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(222, 20);
			this->txtID->TabIndex = 10;
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(299, 119);
			this->Nombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(44, 13);
			this->Nombre->TabIndex = 9;
			this->Nombre->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(299, 84);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Id";
			// 
			// dgvComponentes
			// 
			this->dgvComponentes->AllowUserToAddRows = false;
			this->dgvComponentes->AllowUserToDeleteRows = false;
			this->dgvComponentes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvComponentes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->PurchaseId,
					this->Producto, this->PrecioUnitario
			});
			this->dgvComponentes->Location = System::Drawing::Point(131, 242);
			this->dgvComponentes->Margin = System::Windows::Forms::Padding(2);
			this->dgvComponentes->Name = L"dgvComponentes";
			this->dgvComponentes->RowHeadersVisible = false;
			this->dgvComponentes->RowHeadersWidth = 62;
			this->dgvComponentes->RowTemplate->Height = 28;
			this->dgvComponentes->Size = System::Drawing::Size(740, 230);
			this->dgvComponentes->TabIndex = 7;
			this->dgvComponentes->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PurchaseSearchForm::dgvComponentes_CellClick);
			// 
			// PurchaseId
			// 
			this->PurchaseId->FillWeight = 50;
			this->PurchaseId->HeaderText = L"Id";
			this->PurchaseId->Name = L"PurchaseId";
			this->PurchaseId->Width = 50;
			// 
			// Producto
			// 
			this->Producto->HeaderText = L"Producto";
			this->Producto->Name = L"Producto";
			// 
			// PrecioUnitario
			// 
			this->PrecioUnitario->HeaderText = L"Precio Unitario";
			this->PrecioUnitario->Name = L"PrecioUnitario";
			// 
			// PurchaseSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 634);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvComponentes);
			this->Name = L"PurchaseSearchForm";
			this->Text = L"PurchaseSearchForm";
			this->Load += gcnew System::EventHandler(this, &PurchaseSearchForm::PurchaseSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComponentes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	void AddPurchaseToGrid(SupplyProduct^ Purchase){
		dgvComponentes->Rows->Add(gcnew array<String^>{""+Purchase-> Id, Purchase-> Name, ""+ Purchase->UnitaryPrice });

	}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvComponentes->Rows->Clear();
	if (txtID->Text->Trim()->Equals("")) {
		
		List<SupplyProduct^>^ FajasPurchaseList = Service::QueryFajaPruchaseByName(txtNombre->Text->Trim());
		for (int i = 0; i < FajasPurchaseList->Count; i++) {
			AddPurchaseToGrid(FajasPurchaseList[i]);

		}
	}
	else {
		SupplyProduct^ Purchase = Service::QueryAllFajaPurchaseById(Convert::ToInt32(txtID->Text));
		//AddPurchaseToGrid(Purchase);
	}
}
private: System::Void PurchaseSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvComponentes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e); //Se implementa en el .cpp
};
}
