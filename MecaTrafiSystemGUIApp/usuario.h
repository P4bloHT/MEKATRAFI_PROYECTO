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

	/// <summary>
	/// Resumen de usuario
	/// </summary>
	public ref class usuario : public System::Windows::Forms::Form
	{
	public:
		usuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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



	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtcontact;


	private: System::Windows::Forms::TextBox^ txtname;
	private: System::Windows::Forms::TextBox^ txtcarrera;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btncancelar;








	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;





	private: System::Windows::Forms::PictureBox^ pbphoto;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ sideusuario;
	private: System::Windows::Forms::Button^ btneliminar;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnsubefoto = (gcnew System::Windows::Forms::Button());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtcontact = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->txtcarrera = (gcnew System::Windows::Forms::TextBox());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbphoto = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->sideusuario = (gcnew System::Windows::Forms::Timer(this->components));
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(263, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(254, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Telefono : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(254, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombres :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(262, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Carrera : ";
			// 
			// btnsubefoto
			// 
			this->btnsubefoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubefoto->Location = System::Drawing::Point(549, 182);
			this->btnsubefoto->Name = L"btnsubefoto";
			this->btnsubefoto->Size = System::Drawing::Size(137, 23);
			this->btnsubefoto->TabIndex = 7;
			this->btnsubefoto->Text = L"Actualizar Foto";
			this->btnsubefoto->UseVisualStyleBackColor = true;
			// 
			// txtid
			// 
			this->txtid->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtid->Location = System::Drawing::Point(324, 43);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 8;
			// 
			// txtcontact
			// 
			this->txtcontact->Location = System::Drawing::Point(324, 185);
			this->txtcontact->Name = L"txtcontact";
			this->txtcontact->Size = System::Drawing::Size(186, 20);
			this->txtcontact->TabIndex = 9;
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(324, 86);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(186, 20);
			this->txtname->TabIndex = 10;
			// 
			// txtcarrera
			// 
			this->txtcarrera->Location = System::Drawing::Point(324, 136);
			this->txtcarrera->Name = L"txtcarrera";
			this->txtcarrera->Size = System::Drawing::Size(186, 20);
			this->txtcarrera->TabIndex = 11;
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
			// btncancelar
			// 
			this->btncancelar->BackColor = System::Drawing::Color::Black;
			this->btncancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btncancelar->Location = System::Drawing::Point(0, 45);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(174, 48);
			this->btncancelar->TabIndex = 15;
			this->btncancelar->Text = L"Editar";
			this->btncancelar->UseVisualStyleBackColor = false;
			this->btncancelar->Click += gcnew System::EventHandler(this, &usuario::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Nombres, this->Carrera, this->Telefono
			});
			this->dataGridView1->Location = System::Drawing::Point(257, 242);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(438, 158);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &usuario::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &usuario::dataGridView1_CellContentClick);
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
			this->pbphoto->Location = System::Drawing::Point(549, 37);
			this->pbphoto->Name = L"pbphoto";
			this->pbphoto->Size = System::Drawing::Size(137, 119);
			this->pbphoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbphoto->TabIndex = 6;
			this->pbphoto->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(0, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 44);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Cancelar ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &usuario::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->btnagregar);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btncancelar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 434);
			this->panel1->TabIndex = 20;
			// 
			// sideusuario
			// 
			this->sideusuario->Interval = 10;
			// 
			// btneliminar
			// 
			this->btneliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btneliminar->Location = System::Drawing::Point(257, 211);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(83, 25);
			this->btneliminar->TabIndex = 21;
			this->btneliminar->Text = L"Eliminar";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &usuario::txteliminar_Click);
			// 
			// usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 434);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtcarrera);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->txtcontact);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->btnsubefoto);
			this->Controls->Add(this->pbphoto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"usuario";
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
//	this -> Close(); 

	int id = Convert::ToInt32(txtid->Text); 
	String^ name = txtname->Text; 
	String^ carrera = txtcarrera->Text; 
	int contacto = Convert::ToInt32(txtcontact->Text); 
	Client^ cliente = gcnew Client(); 
	cliente->Id = id; 
	cliente->Name = name; 
	cliente->Carrera = carrera; 
	cliente->Contact = contacto; 
	Service::Updatecliente(cliente);
	showclient(); 
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   void Clearcontrols(){
		   txtid->Text = "";
		   txtname->Text = "";
		   txtcarrera->Text = "";
		   txtcontact->Text = "";
		   
	   
	   }
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Clearcontrols();
	btnagregar->Enabled = true; 
	btncancelar->Enabled = false;
	

}
private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtid->Text);
	String^ name = txtname->Text;
	String^ carrera = txtcarrera->Text;
	int contacto = Convert::ToInt32(txtcontact->Text);
	Client^ cliente = gcnew Client();
	cliente->Id = id;
	cliente->Name = name;
	cliente->Carrera = carrera;
	cliente->Contact = contacto;

	Service::Addcliente(cliente);
	showclient();
}
	   void showclient() {
		   List <Client^>^ Clientxdatos = Service::Queryallcliente();
		   if (Clientxdatos != nullptr) {
			   dataGridView1->Rows->Clear();

			   for (int i = 0; i < Clientxdatos->Count; i++) {
				   dataGridView1->Rows->Add(gcnew array<String^> {"" + Clientxdatos[i]->Id, Clientxdatos[i]->Name, Clientxdatos[i]->Carrera, "" + Clientxdatos[i]->Contact });
			   }
		   }
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txteliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtid->Text);
	Service ::Deletecliente(id);
	 showclient();
}
private: System::Void usuario_load(System::Object^ sender, System::EventArgs^ e) {
	showclient(); 
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int clienteId = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Client^ cliente = Service::Queryallclienteid(clienteId);
	if (cliente != nullptr) {
		txtid->Text = Convert::ToString(cliente->Id); // "" + robot->Id;
		txtname->Text = cliente->Name;
		txtcarrera->Text = cliente->Carrera;
		txtcontact->Text = Convert:: ToString(cliente->Contact);
		
		
	}

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};

}
