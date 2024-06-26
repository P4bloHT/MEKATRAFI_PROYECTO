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
	/// Resumen de CompraStockForm
	/// </summary>
	public ref class CompraStockForm : public System::Windows::Forms::Form
	{
	public:
		CompraStockForm(void)
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
		~CompraStockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtTornilloDescriptioncompra;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txttornillonamecompra;

	private: System::Windows::Forms::TextBox^ txtidtornillocompra;






	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloTipoRosca;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloPrecioUnitario;







	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TabControl^ tabAdminCompraProductos;
	private: System::Windows::Forms::TabPage^ TornillosPage;

	private: System::Windows::Forms::TabPage^ FajasPage;
	private: System::Windows::Forms::TabPage^ PoleasPage;
	private: System::Windows::Forms::TabPage^ RodamientosPage;
	private: System::Windows::Forms::TabPage^ MotoresACPage;
	private: System::Windows::Forms::TabPage^ MotoresDCPage;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btncancelar;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Label^ txtLongitud;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloTipo;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloModel;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloMaterial;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloPunta;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloLongitud;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloDiametroRosca;
	private: System::Windows::Forms::DataGridView^ dgvcompratornillos;


	private: System::Windows::Forms::TextBox^ txtcompraTornilloRequerido;






	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
private: System::Windows::Forms::PictureBox^ pbTornilloPhoto;

	private: System::Windows::Forms::TextBox^ txtTornilloproveecompra;








	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtcompraTornilloMarca;






	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ txtFajaBrand;



	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ txtFajaStore;

	private: System::Windows::Forms::Label^ label19;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;








	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtFajaCode;

	private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ txtDiametroExterno;

private: System::Windows::Forms::TextBox^ txtFajaAltoGoma;


	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ txtDiameterInterno;

	private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ txtFajaType;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ txtFajaUnitaryPrice;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ txtIdFaja;
private: System::Windows::Forms::TextBox^ txtNameFaja;
private: System::Windows::Forms::TextBox^ txtDescriptionFaja;












	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;





















	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;

	private: System::Windows::Forms::Label^ label49;

	private: System::Windows::Forms::TextBox^ textBox37;

	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox40;


	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::Label^ label53;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;








	private: System::Windows::Forms::Label^ label56;

	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::TextBox^ textBox47;

	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::TextBox^ textBox51;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::TextBox^ textBox52;

	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::TextBox^ textBox55;


	private: System::Windows::Forms::TextBox^ textBox57;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::Label^ label70;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox60;






	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::TextBox^ textBox62;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::TextBox^ textBox63;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::TextBox^ textBox65;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::TextBox^ textBox70;


	private: System::Windows::Forms::TextBox^ textBox72;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::TextBox^ textBox73;
	private: System::Windows::Forms::Label^ label87;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;








	private: System::Windows::Forms::Label^ label90;

	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::TextBox^ textBox76;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::TextBox^ textBox77;

	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::Label^ label96;
	private: System::Windows::Forms::TextBox^ textBox80;
	private: System::Windows::Forms::Label^ label97;
	private: System::Windows::Forms::Label^ label98;
	private: System::Windows::Forms::Label^ label99;
	private: System::Windows::Forms::TextBox^ textBox81;
	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::Label^ label101;
	private: System::Windows::Forms::TextBox^ textBox82;

	private: System::Windows::Forms::TextBox^ textBox84;
	private: System::Windows::Forms::TextBox^ textBox85;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBox34;


	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label34;


	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
private: System::Windows::Forms::TextBox^ txtFajaQuantity;

	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::DataGridView^ dgvFaja;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::Button^ btnedittornillo;
private: System::Windows::Forms::Button^ btndeletetornillo;
private: System::Windows::Forms::Button^ btnaddtornillo;
private: System::Windows::Forms::Button^ btn_EditFaja;
private: System::Windows::Forms::Button^ btn_DeteleFaja;


private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;

















































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
			this->txtTornilloDescriptioncompra = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txttornillonamecompra = (gcnew System::Windows::Forms::TextBox());
			this->txtidtornillocompra = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloTipoRosca = (gcnew System::Windows::Forms::TextBox());
			this->txtcompraTornilloPrecioUnitario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabAdminCompraProductos = (gcnew System::Windows::Forms::TabControl());
			this->TornillosPage = (gcnew System::Windows::Forms::TabPage());
			this->btnedittornillo = (gcnew System::Windows::Forms::Button());
			this->btndeletetornillo = (gcnew System::Windows::Forms::Button());
			this->btnaddtornillo = (gcnew System::Windows::Forms::Button());
			this->txtcompraTornilloMarca = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtTornilloproveecompra = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloRequerido = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->pbTornilloPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtcompraTornilloDiametroRosca = (gcnew System::Windows::Forms::TextBox());
			this->dgvcompratornillos = (gcnew System::Windows::Forms::DataGridView());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloModel = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloMaterial = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloPunta = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloLongitud = (gcnew System::Windows::Forms::TextBox());
			this->txtLongitud = (gcnew System::Windows::Forms::Label());
			this->txtcompraTornilloTipo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FajasPage = (gcnew System::Windows::Forms::TabPage());
			this->btn_EditFaja = (gcnew System::Windows::Forms::Button());
			this->btn_DeteleFaja = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txtFajaQuantity = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgvFaja = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtFajaBrand = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtFajaStore = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtFajaCode = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtDiametroExterno = (gcnew System::Windows::Forms::TextBox());
			this->txtFajaAltoGoma = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtDiameterInterno = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtFajaType = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtFajaUnitaryPrice = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtIdFaja = (gcnew System::Windows::Forms::TextBox());
			this->txtNameFaja = (gcnew System::Windows::Forms::TextBox());
			this->txtDescriptionFaja = (gcnew System::Windows::Forms::TextBox());
			this->PoleasPage = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->RodamientosPage = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->MotoresACPage = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->MotoresDCPage = (gcnew System::Windows::Forms::TabPage());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->tabAdminCompraProductos->SuspendLayout();
			this->TornillosPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTornilloPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvcompratornillos))->BeginInit();
			this->FajasPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PoleasPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->RodamientosPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->MotoresACPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->MotoresDCPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtTornilloDescriptioncompra
			// 
			this->txtTornilloDescriptioncompra->Location = System::Drawing::Point(106, 61);
			this->txtTornilloDescriptioncompra->Margin = System::Windows::Forms::Padding(2);
			this->txtTornilloDescriptioncompra->Multiline = true;
			this->txtTornilloDescriptioncompra->Name = L"txtTornilloDescriptioncompra";
			this->txtTornilloDescriptioncompra->Size = System::Drawing::Size(379, 38);
			this->txtTornilloDescriptioncompra->TabIndex = 41;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(34, 64);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 13);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Descripción";
			// 
			// txttornillonamecompra
			// 
			this->txttornillonamecompra->Location = System::Drawing::Point(262, 26);
			this->txttornillonamecompra->Margin = System::Windows::Forms::Padding(2);
			this->txttornillonamecompra->Name = L"txttornillonamecompra";
			this->txttornillonamecompra->Size = System::Drawing::Size(223, 20);
			this->txttornillonamecompra->TabIndex = 39;
			// 
			// txtidtornillocompra
			// 
			this->txtidtornillocompra->Location = System::Drawing::Point(106, 25);
			this->txtidtornillocompra->Margin = System::Windows::Forms::Padding(2);
			this->txtidtornillocompra->Name = L"txtidtornillocompra";
			this->txtidtornillocompra->Size = System::Drawing::Size(43, 20);
			this->txtidtornillocompra->TabIndex = 38;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(200, 29);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Nombre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 29);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Id";
			// 
			// txtcompraTornilloTipoRosca
			// 
			this->txtcompraTornilloTipoRosca->Location = System::Drawing::Point(106, 220);
			this->txtcompraTornilloTipoRosca->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloTipoRosca->Name = L"txtcompraTornilloTipoRosca";
			this->txtcompraTornilloTipoRosca->Size = System::Drawing::Size(136, 20);
			this->txtcompraTornilloTipoRosca->TabIndex = 43;
			// 
			// txtcompraTornilloPrecioUnitario
			// 
			this->txtcompraTornilloPrecioUnitario->Location = System::Drawing::Point(108, 254);
			this->txtcompraTornilloPrecioUnitario->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloPrecioUnitario->Name = L"txtcompraTornilloPrecioUnitario";
			this->txtcompraTornilloPrecioUnitario->Size = System::Drawing::Size(32, 20);
			this->txtcompraTornilloPrecioUnitario->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-3, 257);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Precio Unitario (S/.)";
			// 
			// tabAdminCompraProductos
			// 
			this->tabAdminCompraProductos->Controls->Add(this->TornillosPage);
			this->tabAdminCompraProductos->Controls->Add(this->FajasPage);
			this->tabAdminCompraProductos->Controls->Add(this->PoleasPage);
			this->tabAdminCompraProductos->Controls->Add(this->RodamientosPage);
			this->tabAdminCompraProductos->Controls->Add(this->MotoresACPage);
			this->tabAdminCompraProductos->Controls->Add(this->MotoresDCPage);
			this->tabAdminCompraProductos->Location = System::Drawing::Point(179, 26);
			this->tabAdminCompraProductos->Margin = System::Windows::Forms::Padding(2);
			this->tabAdminCompraProductos->Name = L"tabAdminCompraProductos";
			this->tabAdminCompraProductos->SelectedIndex = 0;
			this->tabAdminCompraProductos->Size = System::Drawing::Size(677, 514);
			this->tabAdminCompraProductos->TabIndex = 47;
			// 
			// TornillosPage
			// 
			this->TornillosPage->Controls->Add(this->btnedittornillo);
			this->TornillosPage->Controls->Add(this->btndeletetornillo);
			this->TornillosPage->Controls->Add(this->btnaddtornillo);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloMarca);
			this->TornillosPage->Controls->Add(this->label14);
			this->TornillosPage->Controls->Add(this->txtTornilloproveecompra);
			this->TornillosPage->Controls->Add(this->label6);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloRequerido);
			this->TornillosPage->Controls->Add(this->label13);
			this->TornillosPage->Controls->Add(this->btnEmpUpdatePhoto);
			this->TornillosPage->Controls->Add(this->pbTornilloPhoto);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloDiametroRosca);
			this->TornillosPage->Controls->Add(this->dgvcompratornillos);
			this->TornillosPage->Controls->Add(this->label12);
			this->TornillosPage->Controls->Add(this->label11);
			this->TornillosPage->Controls->Add(this->label10);
			this->TornillosPage->Controls->Add(this->label9);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloModel);
			this->TornillosPage->Controls->Add(this->label5);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloMaterial);
			this->TornillosPage->Controls->Add(this->label4);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloPunta);
			this->TornillosPage->Controls->Add(this->label3);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloLongitud);
			this->TornillosPage->Controls->Add(this->txtLongitud);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloTipo);
			this->TornillosPage->Controls->Add(this->label2);
			this->TornillosPage->Controls->Add(this->label18);
			this->TornillosPage->Controls->Add(this->label8);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloPrecioUnitario);
			this->TornillosPage->Controls->Add(this->label7);
			this->TornillosPage->Controls->Add(this->label1);
			this->TornillosPage->Controls->Add(this->txtidtornillocompra);
			this->TornillosPage->Controls->Add(this->txtcompraTornilloTipoRosca);
			this->TornillosPage->Controls->Add(this->txttornillonamecompra);
			this->TornillosPage->Controls->Add(this->txtTornilloDescriptioncompra);
			this->TornillosPage->Location = System::Drawing::Point(4, 22);
			this->TornillosPage->Margin = System::Windows::Forms::Padding(2);
			this->TornillosPage->Name = L"TornillosPage";
			this->TornillosPage->Padding = System::Windows::Forms::Padding(2);
			this->TornillosPage->Size = System::Drawing::Size(669, 488);
			this->TornillosPage->TabIndex = 0;
			this->TornillosPage->Text = L"Tornillos";
			this->TornillosPage->UseVisualStyleBackColor = true;
			this->TornillosPage->Click += gcnew System::EventHandler(this, &CompraStockForm::TornillosPage_Click);
			// 
			// btnedittornillo
			// 
			this->btnedittornillo->Location = System::Drawing::Point(222, 303);
			this->btnedittornillo->Name = L"btnedittornillo";
			this->btnedittornillo->Size = System::Drawing::Size(75, 23);
			this->btnedittornillo->TabIndex = 75;
			this->btnedittornillo->Text = L"Editar";
			this->btnedittornillo->UseVisualStyleBackColor = true;
			this->btnedittornillo->Click += gcnew System::EventHandler(this, &CompraStockForm::btnedittornillo_Click);
			// 
			// btndeletetornillo
			// 
			this->btndeletetornillo->Location = System::Drawing::Point(321, 303);
			this->btndeletetornillo->Name = L"btndeletetornillo";
			this->btndeletetornillo->Size = System::Drawing::Size(75, 23);
			this->btndeletetornillo->TabIndex = 74;
			this->btndeletetornillo->Text = L"Eliminar";
			this->btndeletetornillo->UseVisualStyleBackColor = true;
			this->btndeletetornillo->Click += gcnew System::EventHandler(this, &CompraStockForm::btndeletetornillo_Click);
			// 
			// btnaddtornillo
			// 
			this->btnaddtornillo->Location = System::Drawing::Point(119, 303);
			this->btnaddtornillo->Name = L"btnaddtornillo";
			this->btnaddtornillo->Size = System::Drawing::Size(75, 23);
			this->btnaddtornillo->TabIndex = 73;
			this->btnaddtornillo->Text = L"Agregar";
			this->btnaddtornillo->UseVisualStyleBackColor = true;
			this->btnaddtornillo->Click += gcnew System::EventHandler(this, &CompraStockForm::btnaddtornillo_Click);
			// 
			// txtcompraTornilloMarca
			// 
			this->txtcompraTornilloMarca->Location = System::Drawing::Point(358, 161);
			this->txtcompraTornilloMarca->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloMarca->Name = L"txtcompraTornilloMarca";
			this->txtcompraTornilloMarca->Size = System::Drawing::Size(117, 20);
			this->txtcompraTornilloMarca->TabIndex = 71;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(311, 168);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 70;
			this->label14->Text = L"Marca";
			// 
			// txtTornilloproveecompra
			// 
			this->txtTornilloproveecompra->Location = System::Drawing::Point(358, 128);
			this->txtTornilloproveecompra->Margin = System::Windows::Forms::Padding(2);
			this->txtTornilloproveecompra->Name = L"txtTornilloproveecompra";
			this->txtTornilloproveecompra->Size = System::Drawing::Size(117, 20);
			this->txtTornilloproveecompra->TabIndex = 69;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(259, 128);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 68;
			this->label6->Text = L"Proveedor(Tienda)";
			// 
			// txtcompraTornilloRequerido
			// 
			this->txtcompraTornilloRequerido->Location = System::Drawing::Point(210, 254);
			this->txtcompraTornilloRequerido->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloRequerido->Name = L"txtcompraTornilloRequerido";
			this->txtcompraTornilloRequerido->Size = System::Drawing::Size(34, 20);
			this->txtcompraTornilloRequerido->TabIndex = 67;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(157, 257);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 66;
			this->label13->Text = L"Cantidad";
			// 
			// btnEmpUpdatePhoto
			// 
			this->btnEmpUpdatePhoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEmpUpdatePhoto->Location = System::Drawing::Point(516, 179);
			this->btnEmpUpdatePhoto->Name = L"btnEmpUpdatePhoto";
			this->btnEmpUpdatePhoto->Size = System::Drawing::Size(137, 23);
			this->btnEmpUpdatePhoto->TabIndex = 64;
			this->btnEmpUpdatePhoto->Text = L"Actualizar Foto";
			this->btnEmpUpdatePhoto->UseVisualStyleBackColor = true;
			// 
			// pbTornilloPhoto
			// 
			this->pbTornilloPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbTornilloPhoto->Location = System::Drawing::Point(516, 18);
			this->pbTornilloPhoto->Name = L"pbTornilloPhoto";
			this->pbTornilloPhoto->Size = System::Drawing::Size(137, 145);
			this->pbTornilloPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbTornilloPhoto->TabIndex = 63;
			this->pbTornilloPhoto->TabStop = false;
			// 
			// txtcompraTornilloDiametroRosca
			// 
			this->txtcompraTornilloDiametroRosca->Location = System::Drawing::Point(358, 254);
			this->txtcompraTornilloDiametroRosca->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloDiametroRosca->Name = L"txtcompraTornilloDiametroRosca";
			this->txtcompraTornilloDiametroRosca->Size = System::Drawing::Size(117, 20);
			this->txtcompraTornilloDiametroRosca->TabIndex = 62;
			// 
			// dgvcompratornillos
			// 
			this->dgvcompratornillos->AllowUserToAddRows = false;
			this->dgvcompratornillos->AllowUserToOrderColumns = true;
			this->dgvcompratornillos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvcompratornillos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombres,
					this->Carrera, this->Cantidad, this->Proveedor, this->Telefono
			});
			this->dgvcompratornillos->Location = System::Drawing::Point(23, 347);
			this->dgvcompratornillos->Name = L"dgvcompratornillos";
			this->dgvcompratornillos->RowHeadersVisible = false;
			this->dgvcompratornillos->Size = System::Drawing::Size(504, 119);
			this->dgvcompratornillos->TabIndex = 61;
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"ID";
			this->Nombres->Name = L"Nombres";
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Nombre";
			this->Carrera->Name = L"Carrera";
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			// 
			// Proveedor
			// 
			this->Proveedor->HeaderText = L"Proveedor";
			this->Proveedor->Name = L"Proveedor";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Precio Unitario";
			this->Telefono->Name = L"Telefono";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(271, 257);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 13);
			this->label12->TabIndex = 60;
			this->label12->Text = L"Diametro Rosca";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(304, 230);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Material";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(34, 289);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 58;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 128);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Codigo (Modelo)";
			// 
			// txtcompraTornilloModel
			// 
			this->txtcompraTornilloModel->Location = System::Drawing::Point(108, 125);
			this->txtcompraTornilloModel->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloModel->Name = L"txtcompraTornilloModel";
			this->txtcompraTornilloModel->Size = System::Drawing::Size(136, 20);
			this->txtcompraTornilloModel->TabIndex = 56;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(62, 196);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Punta";
			// 
			// txtcompraTornilloMaterial
			// 
			this->txtcompraTornilloMaterial->Location = System::Drawing::Point(358, 223);
			this->txtcompraTornilloMaterial->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloMaterial->Name = L"txtcompraTornilloMaterial";
			this->txtcompraTornilloMaterial->Size = System::Drawing::Size(117, 20);
			this->txtcompraTornilloMaterial->TabIndex = 54;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 223);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Tipo de Rosca";
			// 
			// txtcompraTornilloPunta
			// 
			this->txtcompraTornilloPunta->Location = System::Drawing::Point(106, 189);
			this->txtcompraTornilloPunta->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloPunta->Name = L"txtcompraTornilloPunta";
			this->txtcompraTornilloPunta->Size = System::Drawing::Size(138, 20);
			this->txtcompraTornilloPunta->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 164);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Tipo";
			// 
			// txtcompraTornilloLongitud
			// 
			this->txtcompraTornilloLongitud->Location = System::Drawing::Point(358, 192);
			this->txtcompraTornilloLongitud->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloLongitud->Name = L"txtcompraTornilloLongitud";
			this->txtcompraTornilloLongitud->Size = System::Drawing::Size(117, 20);
			this->txtcompraTornilloLongitud->TabIndex = 50;
			// 
			// txtLongitud
			// 
			this->txtLongitud->AutoSize = true;
			this->txtLongitud->Location = System::Drawing::Point(299, 199);
			this->txtLongitud->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtLongitud->Name = L"txtLongitud";
			this->txtLongitud->Size = System::Drawing::Size(48, 13);
			this->txtLongitud->TabIndex = 49;
			this->txtLongitud->Text = L"Longitud";
			// 
			// txtcompraTornilloTipo
			// 
			this->txtcompraTornilloTipo->Location = System::Drawing::Point(106, 157);
			this->txtcompraTornilloTipo->Margin = System::Windows::Forms::Padding(2);
			this->txtcompraTornilloTipo->Name = L"txtcompraTornilloTipo";
			this->txtcompraTornilloTipo->Size = System::Drawing::Size(136, 20);
			this->txtcompraTornilloTipo->TabIndex = 48;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 150);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 47;
			// 
			// FajasPage
			// 
			this->FajasPage->Controls->Add(this->btn_EditFaja);
			this->FajasPage->Controls->Add(this->btn_DeteleFaja);
			this->FajasPage->Controls->Add(this->button8);
			this->FajasPage->Controls->Add(this->txtFajaQuantity);
			this->FajasPage->Controls->Add(this->label15);
			this->FajasPage->Controls->Add(this->dgvFaja);
			this->FajasPage->Controls->Add(this->txtFajaBrand);
			this->FajasPage->Controls->Add(this->label17);
			this->FajasPage->Controls->Add(this->txtFajaStore);
			this->FajasPage->Controls->Add(this->label19);
			this->FajasPage->Controls->Add(this->button1);
			this->FajasPage->Controls->Add(this->pictureBox1);
			this->FajasPage->Controls->Add(this->label22);
			this->FajasPage->Controls->Add(this->label23);
			this->FajasPage->Controls->Add(this->label24);
			this->FajasPage->Controls->Add(this->txtFajaCode);
			this->FajasPage->Controls->Add(this->label25);
			this->FajasPage->Controls->Add(this->txtDiametroExterno);
			this->FajasPage->Controls->Add(this->txtFajaAltoGoma);
			this->FajasPage->Controls->Add(this->label27);
			this->FajasPage->Controls->Add(this->txtDiameterInterno);
			this->FajasPage->Controls->Add(this->label28);
			this->FajasPage->Controls->Add(this->txtFajaType);
			this->FajasPage->Controls->Add(this->label29);
			this->FajasPage->Controls->Add(this->label30);
			this->FajasPage->Controls->Add(this->label31);
			this->FajasPage->Controls->Add(this->txtFajaUnitaryPrice);
			this->FajasPage->Controls->Add(this->label32);
			this->FajasPage->Controls->Add(this->label33);
			this->FajasPage->Controls->Add(this->txtIdFaja);
			this->FajasPage->Controls->Add(this->txtNameFaja);
			this->FajasPage->Controls->Add(this->txtDescriptionFaja);
			this->FajasPage->Location = System::Drawing::Point(4, 22);
			this->FajasPage->Margin = System::Windows::Forms::Padding(2);
			this->FajasPage->Name = L"FajasPage";
			this->FajasPage->Padding = System::Windows::Forms::Padding(2);
			this->FajasPage->Size = System::Drawing::Size(669, 488);
			this->FajasPage->TabIndex = 1;
			this->FajasPage->Text = L"Fajas";
			this->FajasPage->UseVisualStyleBackColor = true;
			// 
			// btn_EditFaja
			// 
			this->btn_EditFaja->Location = System::Drawing::Point(270, 266);
			this->btn_EditFaja->Name = L"btn_EditFaja";
			this->btn_EditFaja->Size = System::Drawing::Size(75, 23);
			this->btn_EditFaja->TabIndex = 114;
			this->btn_EditFaja->Text = L"Editar";
			this->btn_EditFaja->UseVisualStyleBackColor = true;
			this->btn_EditFaja->Click += gcnew System::EventHandler(this, &CompraStockForm::btn_EditFaja_Click);
			// 
			// btn_DeteleFaja
			// 
			this->btn_DeteleFaja->Location = System::Drawing::Point(369, 266);
			this->btn_DeteleFaja->Name = L"btn_DeteleFaja";
			this->btn_DeteleFaja->Size = System::Drawing::Size(75, 23);
			this->btn_DeteleFaja->TabIndex = 113;
			this->btn_DeteleFaja->Text = L"Eliminar";
			this->btn_DeteleFaja->UseVisualStyleBackColor = true;
			this->btn_DeteleFaja->Click += gcnew System::EventHandler(this, &CompraStockForm::btn_DeteleFaja_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(167, 266);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 112;
			this->button8->Text = L"Agregar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &CompraStockForm::button8_Click);
			// 
			// txtFajaQuantity
			// 
			this->txtFajaQuantity->Location = System::Drawing::Point(206, 220);
			this->txtFajaQuantity->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaQuantity->Name = L"txtFajaQuantity";
			this->txtFajaQuantity->Size = System::Drawing::Size(36, 20);
			this->txtFajaQuantity->TabIndex = 111;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(153, 227);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 110;
			this->label15->Text = L"Cantidad";
			// 
			// dgvFaja
			// 
			this->dgvFaja->AllowUserToAddRows = false;
			this->dgvFaja->AllowUserToOrderColumns = true;
			this->dgvFaja->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFaja->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dgvFaja->Location = System::Drawing::Point(62, 319);
			this->dgvFaja->Name = L"dgvFaja";
			this->dgvFaja->RowHeadersVisible = false;
			this->dgvFaja->Size = System::Drawing::Size(504, 119);
			this->dgvFaja->TabIndex = 109;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// txtFajaBrand
			// 
			this->txtFajaBrand->Location = System::Drawing::Point(366, 165);
			this->txtFajaBrand->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaBrand->Name = L"txtFajaBrand";
			this->txtFajaBrand->Size = System::Drawing::Size(117, 20);
			this->txtFajaBrand->TabIndex = 106;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(315, 171);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 13);
			this->label17->TabIndex = 105;
			this->label17->Text = L"Marca";
			// 
			// txtFajaStore
			// 
			this->txtFajaStore->Location = System::Drawing::Point(366, 133);
			this->txtFajaStore->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaStore->Name = L"txtFajaStore";
			this->txtFajaStore->Size = System::Drawing::Size(117, 20);
			this->txtFajaStore->TabIndex = 104;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(257, 140);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 13);
			this->label19->TabIndex = 103;
			this->label19->Text = L"Proveedor(Tienda)";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(514, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 100;
			this->button1->Text = L"Actualizar Foto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(514, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 99;
			this->pictureBox1->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(24, 199);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 13);
			this->label22->TabIndex = 95;
			this->label22->Text = L"Alto de Goma";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(32, 293);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 94;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(11, 136);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(84, 13);
			this->label24->TabIndex = 93;
			this->label24->Text = L"Codigo (Modelo)";
			// 
			// txtFajaCode
			// 
			this->txtFajaCode->Location = System::Drawing::Point(106, 133);
			this->txtFajaCode->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaCode->Name = L"txtFajaCode";
			this->txtFajaCode->Size = System::Drawing::Size(136, 20);
			this->txtFajaCode->TabIndex = 92;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(264, 223);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 13);
			this->label25->TabIndex = 91;
			this->label25->Text = L"Diametro Externo";
			// 
			// txtDiametroExterno
			// 
			this->txtDiametroExterno->Location = System::Drawing::Point(366, 220);
			this->txtDiametroExterno->Margin = System::Windows::Forms::Padding(2);
			this->txtDiametroExterno->Name = L"txtDiametroExterno";
			this->txtDiametroExterno->Size = System::Drawing::Size(117, 20);
			this->txtDiametroExterno->TabIndex = 90;
			// 
			// txtFajaAltoGoma
			// 
			this->txtFajaAltoGoma->Location = System::Drawing::Point(106, 193);
			this->txtFajaAltoGoma->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaAltoGoma->Name = L"txtFajaAltoGoma";
			this->txtFajaAltoGoma->Size = System::Drawing::Size(136, 20);
			this->txtFajaAltoGoma->TabIndex = 88;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(67, 168);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 13);
			this->label27->TabIndex = 87;
			this->label27->Text = L"Tipo";
			// 
			// txtDiameterInterno
			// 
			this->txtDiameterInterno->Location = System::Drawing::Point(366, 192);
			this->txtDiameterInterno->Margin = System::Windows::Forms::Padding(2);
			this->txtDiameterInterno->Name = L"txtDiameterInterno";
			this->txtDiameterInterno->Size = System::Drawing::Size(117, 20);
			this->txtDiameterInterno->TabIndex = 86;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(267, 196);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(85, 13);
			this->label28->TabIndex = 85;
			this->label28->Text = L"Diametro Interno";
			// 
			// txtFajaType
			// 
			this->txtFajaType->Location = System::Drawing::Point(106, 164);
			this->txtFajaType->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaType->Name = L"txtFajaType";
			this->txtFajaType->Size = System::Drawing::Size(136, 20);
			this->txtFajaType->TabIndex = 84;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(28, 154);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 13);
			this->label29->TabIndex = 83;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(32, 68);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 13);
			this->label30->TabIndex = 78;
			this->label30->Text = L"Descripción";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(50, 33);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 13);
			this->label31->TabIndex = 74;
			this->label31->Text = L"Id";
			// 
			// txtFajaUnitaryPrice
			// 
			this->txtFajaUnitaryPrice->Location = System::Drawing::Point(106, 220);
			this->txtFajaUnitaryPrice->Margin = System::Windows::Forms::Padding(2);
			this->txtFajaUnitaryPrice->Name = L"txtFajaUnitaryPrice";
			this->txtFajaUnitaryPrice->Size = System::Drawing::Size(26, 20);
			this->txtFajaUnitaryPrice->TabIndex = 82;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(198, 33);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(44, 13);
			this->label32->TabIndex = 75;
			this->label32->Text = L"Nombre";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(-5, 227);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 13);
			this->label33->TabIndex = 81;
			this->label33->Text = L"Precio Unitario (S/.)";
			// 
			// txtIdFaja
			// 
			this->txtIdFaja->Location = System::Drawing::Point(104, 29);
			this->txtIdFaja->Margin = System::Windows::Forms::Padding(2);
			this->txtIdFaja->Name = L"txtIdFaja";
			this->txtIdFaja->Size = System::Drawing::Size(43, 20);
			this->txtIdFaja->TabIndex = 76;
			// 
			// txtNameFaja
			// 
			this->txtNameFaja->Location = System::Drawing::Point(260, 30);
			this->txtNameFaja->Margin = System::Windows::Forms::Padding(2);
			this->txtNameFaja->Name = L"txtNameFaja";
			this->txtNameFaja->Size = System::Drawing::Size(223, 20);
			this->txtNameFaja->TabIndex = 77;
			this->txtNameFaja->TextChanged += gcnew System::EventHandler(this, &CompraStockForm::textBox24_TextChanged);
			// 
			// txtDescriptionFaja
			// 
			this->txtDescriptionFaja->Location = System::Drawing::Point(104, 65);
			this->txtDescriptionFaja->Margin = System::Windows::Forms::Padding(2);
			this->txtDescriptionFaja->Multiline = true;
			this->txtDescriptionFaja->Name = L"txtDescriptionFaja";
			this->txtDescriptionFaja->Size = System::Drawing::Size(379, 38);
			this->txtDescriptionFaja->TabIndex = 79;
			// 
			// PoleasPage
			// 
			this->PoleasPage->Controls->Add(this->button9);
			this->PoleasPage->Controls->Add(this->button10);
			this->PoleasPage->Controls->Add(this->button11);
			this->PoleasPage->Controls->Add(this->textBox2);
			this->PoleasPage->Controls->Add(this->label16);
			this->PoleasPage->Controls->Add(this->dataGridView2);
			this->PoleasPage->Controls->Add(this->label43);
			this->PoleasPage->Controls->Add(this->textBox35);
			this->PoleasPage->Controls->Add(this->label42);
			this->PoleasPage->Controls->Add(this->textBox34);
			this->PoleasPage->Controls->Add(this->textBox23);
			this->PoleasPage->Controls->Add(this->label26);
			this->PoleasPage->Controls->Add(this->textBox26);
			this->PoleasPage->Controls->Add(this->label34);
			this->PoleasPage->Controls->Add(this->label36);
			this->PoleasPage->Controls->Add(this->label37);
			this->PoleasPage->Controls->Add(this->textBox28);
			this->PoleasPage->Controls->Add(this->label38);
			this->PoleasPage->Controls->Add(this->textBox29);
			this->PoleasPage->Controls->Add(this->textBox30);
			this->PoleasPage->Controls->Add(this->label39);
			this->PoleasPage->Controls->Add(this->textBox31);
			this->PoleasPage->Controls->Add(this->label40);
			this->PoleasPage->Controls->Add(this->textBox32);
			this->PoleasPage->Controls->Add(this->textBox33);
			this->PoleasPage->Controls->Add(this->label41);
			this->PoleasPage->Controls->Add(this->button2);
			this->PoleasPage->Controls->Add(this->pictureBox2);
			this->PoleasPage->Controls->Add(this->label47);
			this->PoleasPage->Controls->Add(this->label48);
			this->PoleasPage->Controls->Add(this->label49);
			this->PoleasPage->Controls->Add(this->textBox37);
			this->PoleasPage->Controls->Add(this->textBox39);
			this->PoleasPage->Controls->Add(this->textBox40);
			this->PoleasPage->Location = System::Drawing::Point(4, 22);
			this->PoleasPage->Margin = System::Windows::Forms::Padding(2);
			this->PoleasPage->Name = L"PoleasPage";
			this->PoleasPage->Padding = System::Windows::Forms::Padding(2);
			this->PoleasPage->Size = System::Drawing::Size(669, 488);
			this->PoleasPage->TabIndex = 2;
			this->PoleasPage->Text = L"Poleas";
			this->PoleasPage->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(270, 288);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 138;
			this->button9->Text = L"Editar";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(369, 288);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 137;
			this->button10->Text = L"Eliminar";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(167, 288);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 136;
			this->button11->Text = L"Agregar";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 246);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 135;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(151, 249);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 13);
			this->label16->TabIndex = 134;
			this->label16->Text = L"Cantidad";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView2->Location = System::Drawing::Point(72, 327);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(504, 119);
			this->dataGridView2->TabIndex = 133;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(285, 249);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(67, 13);
			this->label43->TabIndex = 132;
			this->label43->Text = L"Diametro Eje";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(366, 246);
			this->textBox35->Margin = System::Windows::Forms::Padding(2);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(117, 20);
			this->textBox35->TabIndex = 131;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(55, 210);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(44, 13);
			this->label42->TabIndex = 130;
			this->label42->Text = L"Material";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(107, 210);
			this->textBox34->Margin = System::Windows::Forms::Padding(2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(136, 20);
			this->textBox34->TabIndex = 129;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(366, 147);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(117, 20);
			this->textBox23->TabIndex = 126;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(315, 154);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 13);
			this->label26->TabIndex = 125;
			this->label26->Text = L"Marca";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(366, 119);
			this->textBox26->Margin = System::Windows::Forms::Padding(2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(117, 20);
			this->textBox26->TabIndex = 124;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(257, 122);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(95, 13);
			this->label34->TabIndex = 123;
			this->label34->Text = L"Proveedor(Tienda)";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(23, 183);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(80, 13);
			this->label36->TabIndex = 120;
			this->label36->Text = L"Ancho de Paso";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(15, 122);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(84, 13);
			this->label37->TabIndex = 119;
			this->label37->Text = L"Codigo (Modelo)";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(107, 119);
			this->textBox28->Margin = System::Windows::Forms::Padding(2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(136, 20);
			this->textBox28->TabIndex = 118;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(267, 217);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(88, 13);
			this->label38->TabIndex = 117;
			this->label38->Text = L"Diametro Externo";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(366, 210);
			this->textBox29->Margin = System::Windows::Forms::Padding(2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(117, 20);
			this->textBox29->TabIndex = 116;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(107, 176);
			this->textBox30->Margin = System::Windows::Forms::Padding(2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(136, 20);
			this->textBox30->TabIndex = 115;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(68, 154);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 114;
			this->label39->Text = L"Tipo";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(366, 176);
			this->textBox31->Margin = System::Windows::Forms::Padding(2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(117, 20);
			this->textBox31->TabIndex = 113;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(267, 179);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(85, 13);
			this->label40->TabIndex = 112;
			this->label40->Text = L"Diametro Interno";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(107, 147);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(136, 20);
			this->textBox32->TabIndex = 111;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(107, 246);
			this->textBox33->Margin = System::Windows::Forms::Padding(2);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(40, 20);
			this->textBox33->TabIndex = 110;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(-1, 249);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(100, 13);
			this->label41->TabIndex = 109;
			this->label41->Text = L"Precio Unitario (S/.)";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(514, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 100;
			this->button2->Text = L"Actualizar Foto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(514, 22);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(137, 145);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 99;
			this->pictureBox2->TabStop = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(32, 68);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(63, 13);
			this->label47->TabIndex = 78;
			this->label47->Text = L"Descripción";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(50, 33);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(16, 13);
			this->label48->TabIndex = 74;
			this->label48->Text = L"Id";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(198, 33);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(44, 13);
			this->label49->TabIndex = 75;
			this->label49->Text = L"Nombre";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(104, 29);
			this->textBox37->Margin = System::Windows::Forms::Padding(2);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(43, 20);
			this->textBox37->TabIndex = 76;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(260, 30);
			this->textBox39->Margin = System::Windows::Forms::Padding(2);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(223, 20);
			this->textBox39->TabIndex = 77;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(104, 65);
			this->textBox40->Margin = System::Windows::Forms::Padding(2);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(379, 38);
			this->textBox40->TabIndex = 79;
			// 
			// RodamientosPage
			// 
			this->RodamientosPage->Controls->Add(this->button12);
			this->RodamientosPage->Controls->Add(this->button13);
			this->RodamientosPage->Controls->Add(this->button14);
			this->RodamientosPage->Controls->Add(this->textBox3);
			this->RodamientosPage->Controls->Add(this->label20);
			this->RodamientosPage->Controls->Add(this->dataGridView3);
			this->RodamientosPage->Controls->Add(this->textBox42);
			this->RodamientosPage->Controls->Add(this->label52);
			this->RodamientosPage->Controls->Add(this->textBox43);
			this->RodamientosPage->Controls->Add(this->label53);
			this->RodamientosPage->Controls->Add(this->button3);
			this->RodamientosPage->Controls->Add(this->pictureBox3);
			this->RodamientosPage->Controls->Add(this->label56);
			this->RodamientosPage->Controls->Add(this->label58);
			this->RodamientosPage->Controls->Add(this->textBox46);
			this->RodamientosPage->Controls->Add(this->label59);
			this->RodamientosPage->Controls->Add(this->textBox47);
			this->RodamientosPage->Controls->Add(this->textBox48);
			this->RodamientosPage->Controls->Add(this->label61);
			this->RodamientosPage->Controls->Add(this->textBox49);
			this->RodamientosPage->Controls->Add(this->label62);
			this->RodamientosPage->Controls->Add(this->textBox50);
			this->RodamientosPage->Controls->Add(this->label63);
			this->RodamientosPage->Controls->Add(this->label64);
			this->RodamientosPage->Controls->Add(this->label65);
			this->RodamientosPage->Controls->Add(this->textBox51);
			this->RodamientosPage->Controls->Add(this->label66);
			this->RodamientosPage->Controls->Add(this->label67);
			this->RodamientosPage->Controls->Add(this->textBox52);
			this->RodamientosPage->Controls->Add(this->textBox54);
			this->RodamientosPage->Controls->Add(this->textBox55);
			this->RodamientosPage->Location = System::Drawing::Point(4, 22);
			this->RodamientosPage->Margin = System::Windows::Forms::Padding(2);
			this->RodamientosPage->Name = L"RodamientosPage";
			this->RodamientosPage->Padding = System::Windows::Forms::Padding(2);
			this->RodamientosPage->Size = System::Drawing::Size(669, 488);
			this->RodamientosPage->TabIndex = 3;
			this->RodamientosPage->Text = L"Rodamientos";
			this->RodamientosPage->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(287, 264);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 114;
			this->button12->Text = L"Editar";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(386, 264);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 113;
			this->button13->Text = L"Eliminar";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(184, 264);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 112;
			this->button14->Text = L"Agregar";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(200, 227);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 111;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(147, 230);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 13);
			this->label20->TabIndex = 110;
			this->label20->Text = L"Cantidad";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn11,
					this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->dataGridView3->Location = System::Drawing::Point(80, 305);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(504, 119);
			this->dataGridView3->TabIndex = 109;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(366, 164);
			this->textBox42->Margin = System::Windows::Forms::Padding(2);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(117, 20);
			this->textBox42->TabIndex = 106;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(315, 171);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(37, 13);
			this->label52->TabIndex = 105;
			this->label52->Text = L"Marca";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(366, 133);
			this->textBox43->Margin = System::Windows::Forms::Padding(2);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(117, 20);
			this->textBox43->TabIndex = 104;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(257, 136);
			this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(95, 13);
			this->label53->TabIndex = 103;
			this->label53->Text = L"Proveedor(Tienda)";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(514, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 23);
			this->button3->TabIndex = 100;
			this->button3->Text = L"Actualizar Foto";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(514, 22);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(137, 145);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 99;
			this->pictureBox3->TabStop = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(275, 234);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(87, 13);
			this->label56->TabIndex = 95;
			this->label56->Text = L"Diametro externo";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(11, 136);
			this->label58->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(84, 13);
			this->label58->TabIndex = 93;
			this->label58->Text = L"Codigo (Modelo)";
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(106, 133);
			this->textBox46->Margin = System::Windows::Forms::Padding(2);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(134, 20);
			this->textBox46->TabIndex = 92;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(49, 196);
			this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(38, 13);
			this->label59->TabIndex = 91;
			this->label59->Text = L"Ancho";
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(366, 227);
			this->textBox47->Margin = System::Windows::Forms::Padding(2);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(117, 20);
			this->textBox47->TabIndex = 90;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(104, 193);
			this->textBox48->Margin = System::Windows::Forms::Padding(2);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(136, 20);
			this->textBox48->TabIndex = 88;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(59, 164);
			this->label61->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(28, 13);
			this->label61->TabIndex = 87;
			this->label61->Text = L"Tipo";
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(366, 196);
			this->textBox49->Margin = System::Windows::Forms::Padding(2);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(117, 20);
			this->textBox49->TabIndex = 86;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(267, 196);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(85, 13);
			this->label62->TabIndex = 85;
			this->label62->Text = L"Diametro Interno";
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(104, 164);
			this->textBox50->Margin = System::Windows::Forms::Padding(2);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(136, 20);
			this->textBox50->TabIndex = 84;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(28, 154);
			this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(0, 13);
			this->label63->TabIndex = 83;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(32, 68);
			this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(63, 13);
			this->label64->TabIndex = 78;
			this->label64->Text = L"Descripción";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(50, 33);
			this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(16, 13);
			this->label65->TabIndex = 74;
			this->label65->Text = L"Id";
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(104, 224);
			this->textBox51->Margin = System::Windows::Forms::Padding(2);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(39, 20);
			this->textBox51->TabIndex = 82;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(198, 33);
			this->label66->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(44, 13);
			this->label66->TabIndex = 75;
			this->label66->Text = L"Nombre";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(4, 227);
			this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(100, 13);
			this->label67->TabIndex = 81;
			this->label67->Text = L"Precio Unitario (S/.)";
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(104, 29);
			this->textBox52->Margin = System::Windows::Forms::Padding(2);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(43, 20);
			this->textBox52->TabIndex = 76;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(260, 30);
			this->textBox54->Margin = System::Windows::Forms::Padding(2);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(223, 20);
			this->textBox54->TabIndex = 77;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(104, 65);
			this->textBox55->Margin = System::Windows::Forms::Padding(2);
			this->textBox55->Multiline = true;
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(379, 38);
			this->textBox55->TabIndex = 79;
			// 
			// MotoresACPage
			// 
			this->MotoresACPage->Controls->Add(this->button15);
			this->MotoresACPage->Controls->Add(this->button16);
			this->MotoresACPage->Controls->Add(this->button17);
			this->MotoresACPage->Controls->Add(this->textBox4);
			this->MotoresACPage->Controls->Add(this->label21);
			this->MotoresACPage->Controls->Add(this->dataGridView4);
			this->MotoresACPage->Controls->Add(this->label44);
			this->MotoresACPage->Controls->Add(this->textBox36);
			this->MotoresACPage->Controls->Add(this->textBox57);
			this->MotoresACPage->Controls->Add(this->label69);
			this->MotoresACPage->Controls->Add(this->textBox58);
			this->MotoresACPage->Controls->Add(this->label70);
			this->MotoresACPage->Controls->Add(this->button4);
			this->MotoresACPage->Controls->Add(this->pictureBox4);
			this->MotoresACPage->Controls->Add(this->textBox60);
			this->MotoresACPage->Controls->Add(this->label72);
			this->MotoresACPage->Controls->Add(this->label73);
			this->MotoresACPage->Controls->Add(this->label74);
			this->MotoresACPage->Controls->Add(this->label75);
			this->MotoresACPage->Controls->Add(this->textBox61);
			this->MotoresACPage->Controls->Add(this->label76);
			this->MotoresACPage->Controls->Add(this->textBox62);
			this->MotoresACPage->Controls->Add(this->label77);
			this->MotoresACPage->Controls->Add(this->textBox63);
			this->MotoresACPage->Controls->Add(this->label78);
			this->MotoresACPage->Controls->Add(this->textBox64);
			this->MotoresACPage->Controls->Add(this->label79);
			this->MotoresACPage->Controls->Add(this->textBox65);
			this->MotoresACPage->Controls->Add(this->label80);
			this->MotoresACPage->Controls->Add(this->label81);
			this->MotoresACPage->Controls->Add(this->label82);
			this->MotoresACPage->Controls->Add(this->textBox66);
			this->MotoresACPage->Controls->Add(this->label83);
			this->MotoresACPage->Controls->Add(this->label84);
			this->MotoresACPage->Controls->Add(this->textBox67);
			this->MotoresACPage->Controls->Add(this->textBox68);
			this->MotoresACPage->Controls->Add(this->textBox69);
			this->MotoresACPage->Controls->Add(this->textBox70);
			this->MotoresACPage->Location = System::Drawing::Point(4, 22);
			this->MotoresACPage->Margin = System::Windows::Forms::Padding(2);
			this->MotoresACPage->Name = L"MotoresACPage";
			this->MotoresACPage->Padding = System::Windows::Forms::Padding(2);
			this->MotoresACPage->Size = System::Drawing::Size(669, 488);
			this->MotoresACPage->TabIndex = 4;
			this->MotoresACPage->Text = L"MotoresAC";
			this->MotoresACPage->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(270, 295);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 116;
			this->button15->Text = L"Editar";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(369, 295);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 115;
			this->button16->Text = L"Eliminar";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(167, 295);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 114;
			this->button17->Text = L"Agregar";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(201, 263);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 20);
			this->textBox4->TabIndex = 113;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(151, 266);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 13);
			this->label21->TabIndex = 112;
			this->label21->Text = L"Cantidad";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20
			});
			this->dataGridView4->Location = System::Drawing::Point(74, 334);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->Size = System::Drawing::Size(504, 119);
			this->dataGridView4->TabIndex = 111;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(414, 270);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(39, 13);
			this->label44->TabIndex = 110;
			this->label44->Text = L"Voltaje";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(457, 266);
			this->textBox36->Margin = System::Windows::Forms::Padding(2);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(34, 20);
			this->textBox36->TabIndex = 109;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(366, 161);
			this->textBox57->Margin = System::Windows::Forms::Padding(2);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(125, 20);
			this->textBox57->TabIndex = 106;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(320, 168);
			this->label69->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(37, 13);
			this->label69->TabIndex = 105;
			this->label69->Text = L"Marca";
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(366, 129);
			this->textBox58->Margin = System::Windows::Forms::Padding(2);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(125, 20);
			this->textBox58->TabIndex = 104;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(262, 136);
			this->label70->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(95, 13);
			this->label70->TabIndex = 103;
			this->label70->Text = L"Proveedor(Tienda)";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(514, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 23);
			this->button4->TabIndex = 100;
			this->button4->Text = L"Actualizar Foto";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(514, 22);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(137, 145);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 99;
			this->pictureBox4->TabStop = false;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(367, 263);
			this->textBox60->Margin = System::Windows::Forms::Padding(2);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(43, 20);
			this->textBox60->TabIndex = 98;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(267, 266);
			this->label72->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(90, 13);
			this->label72->TabIndex = 96;
			this->label72->Text = L"Forma de Fijacion";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(284, 227);
			this->label73->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(78, 26);
			this->label73->TabIndex = 95;
			this->label73->Text = L"Compatibilidad \r\ndel inversor";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(295, 295);
			this->label74->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(0, 13);
			this->label74->TabIndex = 94;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(11, 132);
			this->label75->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(84, 13);
			this->label75->TabIndex = 93;
			this->label75->Text = L"Codigo (Modelo)";
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(106, 129);
			this->textBox61->Margin = System::Windows::Forms::Padding(2);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(136, 20);
			this->textBox61->TabIndex = 92;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(37, 200);
			this->label76->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(58, 13);
			this->label76->TabIndex = 91;
			this->label76->Text = L"Protección";
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(366, 231);
			this->textBox62->Margin = System::Windows::Forms::Padding(2);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(125, 20);
			this->textBox62->TabIndex = 90;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(59, 230);
			this->label77->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(35, 13);
			this->label77->TabIndex = 89;
			this->label77->Text = L"Fases";
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(104, 193);
			this->textBox63->Margin = System::Windows::Forms::Padding(2);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(136, 20);
			this->textBox63->TabIndex = 88;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(59, 164);
			this->label78->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(36, 13);
			this->label78->TabIndex = 87;
			this->label78->Text = L"Frame";
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(366, 193);
			this->textBox64->Margin = System::Windows::Forms::Padding(2);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(125, 20);
			this->textBox64->TabIndex = 86;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(308, 196);
			this->label79->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(49, 13);
			this->label79->TabIndex = 85;
			this->label79->Text = L"Potencia";
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(104, 161);
			this->textBox65->Margin = System::Windows::Forms::Padding(2);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(136, 20);
			this->textBox65->TabIndex = 84;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(28, 154);
			this->label80->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(0, 13);
			this->label80->TabIndex = 83;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(32, 68);
			this->label81->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(63, 13);
			this->label81->TabIndex = 78;
			this->label81->Text = L"Descripción";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(50, 33);
			this->label82->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(16, 13);
			this->label82->TabIndex = 74;
			this->label82->Text = L"Id";
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(106, 263);
			this->textBox66->Margin = System::Windows::Forms::Padding(2);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(41, 20);
			this->textBox66->TabIndex = 82;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(198, 33);
			this->label83->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(44, 13);
			this->label83->TabIndex = 75;
			this->label83->Text = L"Nombre";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(-5, 266);
			this->label84->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(100, 13);
			this->label84->TabIndex = 81;
			this->label84->Text = L"Precio Unitario (S/.)";
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(104, 29);
			this->textBox67->Margin = System::Windows::Forms::Padding(2);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(43, 20);
			this->textBox67->TabIndex = 76;
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(106, 227);
			this->textBox68->Margin = System::Windows::Forms::Padding(2);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(136, 20);
			this->textBox68->TabIndex = 80;
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(260, 30);
			this->textBox69->Margin = System::Windows::Forms::Padding(2);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(223, 20);
			this->textBox69->TabIndex = 77;
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(104, 65);
			this->textBox70->Margin = System::Windows::Forms::Padding(2);
			this->textBox70->Multiline = true;
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(379, 38);
			this->textBox70->TabIndex = 79;
			// 
			// MotoresDCPage
			// 
			this->MotoresDCPage->Controls->Add(this->button18);
			this->MotoresDCPage->Controls->Add(this->button19);
			this->MotoresDCPage->Controls->Add(this->button20);
			this->MotoresDCPage->Controls->Add(this->textBox5);
			this->MotoresDCPage->Controls->Add(this->label35);
			this->MotoresDCPage->Controls->Add(this->dataGridView5);
			this->MotoresDCPage->Controls->Add(this->textBox72);
			this->MotoresDCPage->Controls->Add(this->label86);
			this->MotoresDCPage->Controls->Add(this->textBox73);
			this->MotoresDCPage->Controls->Add(this->label87);
			this->MotoresDCPage->Controls->Add(this->button5);
			this->MotoresDCPage->Controls->Add(this->pictureBox5);
			this->MotoresDCPage->Controls->Add(this->label90);
			this->MotoresDCPage->Controls->Add(this->label92);
			this->MotoresDCPage->Controls->Add(this->textBox76);
			this->MotoresDCPage->Controls->Add(this->label93);
			this->MotoresDCPage->Controls->Add(this->textBox77);
			this->MotoresDCPage->Controls->Add(this->textBox78);
			this->MotoresDCPage->Controls->Add(this->label95);
			this->MotoresDCPage->Controls->Add(this->textBox79);
			this->MotoresDCPage->Controls->Add(this->label96);
			this->MotoresDCPage->Controls->Add(this->textBox80);
			this->MotoresDCPage->Controls->Add(this->label97);
			this->MotoresDCPage->Controls->Add(this->label98);
			this->MotoresDCPage->Controls->Add(this->label99);
			this->MotoresDCPage->Controls->Add(this->textBox81);
			this->MotoresDCPage->Controls->Add(this->label100);
			this->MotoresDCPage->Controls->Add(this->label101);
			this->MotoresDCPage->Controls->Add(this->textBox82);
			this->MotoresDCPage->Controls->Add(this->textBox84);
			this->MotoresDCPage->Controls->Add(this->textBox85);
			this->MotoresDCPage->Location = System::Drawing::Point(4, 22);
			this->MotoresDCPage->Margin = System::Windows::Forms::Padding(2);
			this->MotoresDCPage->Name = L"MotoresDCPage";
			this->MotoresDCPage->Padding = System::Windows::Forms::Padding(2);
			this->MotoresDCPage->Size = System::Drawing::Size(669, 488);
			this->MotoresDCPage->TabIndex = 5;
			this->MotoresDCPage->Text = L"MotoresDC";
			this->MotoresDCPage->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(272, 270);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 114;
			this->button18->Text = L"Editar";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(371, 270);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 113;
			this->button19->Text = L"Eliminar";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(169, 270);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 112;
			this->button20->Text = L"Agregar";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(201, 224);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 20);
			this->textBox5->TabIndex = 111;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(152, 227);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(49, 13);
			this->label35->TabIndex = 110;
			this->label35->Text = L"Cantidad";
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToOrderColumns = true;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25
			});
			this->dataGridView5->Location = System::Drawing::Point(73, 312);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->Size = System::Drawing::Size(504, 119);
			this->dataGridView5->TabIndex = 109;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(366, 161);
			this->textBox72->Margin = System::Windows::Forms::Padding(2);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(117, 20);
			this->textBox72->TabIndex = 106;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(310, 164);
			this->label86->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(37, 13);
			this->label86->TabIndex = 105;
			this->label86->Text = L"Marca";
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(366, 129);
			this->textBox73->Margin = System::Windows::Forms::Padding(2);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(117, 20);
			this->textBox73->TabIndex = 104;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(252, 136);
			this->label87->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(95, 13);
			this->label87->TabIndex = 103;
			this->label87->Text = L"Proveedor(Tienda)";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(514, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 23);
			this->button5->TabIndex = 100;
			this->button5->Text = L"Actualizar Foto";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Location = System::Drawing::Point(514, 22);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(137, 145);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 99;
			this->pictureBox5->TabStop = false;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(302, 230);
			this->label90->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(45, 13);
			this->label90->TabIndex = 95;
			this->label90->Text = L"Montaje";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(18, 132);
			this->label92->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(84, 13);
			this->label92->TabIndex = 93;
			this->label92->Text = L"Codigo (Modelo)";
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(106, 129);
			this->textBox76->Margin = System::Windows::Forms::Padding(2);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(136, 20);
			this->textBox76->TabIndex = 92;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(41, 193);
			this->label93->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(54, 13);
			this->label93->TabIndex = 91;
			this->label93->Text = L"Velocidad";
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(366, 227);
			this->textBox77->Margin = System::Windows::Forms::Padding(2);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(117, 20);
			this->textBox77->TabIndex = 90;
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(104, 190);
			this->textBox78->Margin = System::Windows::Forms::Padding(2);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(136, 20);
			this->textBox78->TabIndex = 88;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(46, 164);
			this->label95->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(49, 13);
			this->label95->TabIndex = 87;
			this->label95->Text = L"Potencia";
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(366, 193);
			this->textBox79->Margin = System::Windows::Forms::Padding(2);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(117, 20);
			this->textBox79->TabIndex = 86;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(308, 196);
			this->label96->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(39, 13);
			this->label96->TabIndex = 85;
			this->label96->Text = L"Voltaje";
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(104, 161);
			this->textBox80->Margin = System::Windows::Forms::Padding(2);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(136, 20);
			this->textBox80->TabIndex = 84;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(28, 154);
			this->label97->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(0, 13);
			this->label97->TabIndex = 83;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(32, 68);
			this->label98->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(63, 13);
			this->label98->TabIndex = 78;
			this->label98->Text = L"Descripción";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(50, 33);
			this->label99->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(16, 13);
			this->label99->TabIndex = 74;
			this->label99->Text = L"Id";
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(106, 224);
			this->textBox81->Margin = System::Windows::Forms::Padding(2);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(25, 20);
			this->textBox81->TabIndex = 82;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(198, 33);
			this->label100->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(44, 13);
			this->label100->TabIndex = 75;
			this->label100->Text = L"Nombre";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(-3, 227);
			this->label101->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(100, 13);
			this->label101->TabIndex = 81;
			this->label101->Text = L"Precio Unitario (S/.)";
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(104, 29);
			this->textBox82->Margin = System::Windows::Forms::Padding(2);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(43, 20);
			this->textBox82->TabIndex = 76;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(260, 30);
			this->textBox84->Margin = System::Windows::Forms::Padding(2);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(223, 20);
			this->textBox84->TabIndex = 77;
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(104, 65);
			this->textBox85->Margin = System::Windows::Forms::Padding(2);
			this->textBox85->Multiline = true;
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(379, 38);
			this->textBox85->TabIndex = 79;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->btnEliminar);
			this->panel1->Controls->Add(this->btnagregar);
			this->panel1->Controls->Add(this->btncancelar);
			this->panel1->Controls->Add(this->btnEditar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 551);
			this->panel1->TabIndex = 48;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::DarkGray;
			this->btnEliminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEliminar->Location = System::Drawing::Point(0, 91);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(174, 48);
			this->btnEliminar->TabIndex = 20;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			// 
			// btnagregar
			// 
			this->btnagregar->BackColor = System::Drawing::Color::DarkGray;
			this->btnagregar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnagregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnagregar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnagregar->Location = System::Drawing::Point(-1, 0);
			this->btnagregar->Margin = System::Windows::Forms::Padding(0);
			this->btnagregar->Name = L"btnagregar";
			this->btnagregar->Size = System::Drawing::Size(174, 48);
			this->btnagregar->TabIndex = 14;
			this->btnagregar->Text = L"Agregar";
			this->btnagregar->UseVisualStyleBackColor = false;
			this->btnagregar->Click += gcnew System::EventHandler(this, &CompraStockForm::btnagregar_Click);
			// 
			// btncancelar
			// 
			this->btncancelar->BackColor = System::Drawing::Color::DarkGray;
			this->btncancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btncancelar->Location = System::Drawing::Point(-1, 138);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(174, 44);
			this->btncancelar->TabIndex = 19;
			this->btncancelar->Text = L"Cancelar ";
			this->btncancelar->UseVisualStyleBackColor = false;
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::DarkGray;
			this->btnEditar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEditar->Location = System::Drawing::Point(0, 45);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(174, 48);
			this->btnEditar->TabIndex = 15;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			// 
			// CompraStockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 551);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabAdminCompraProductos);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CompraStockForm";
			this->Text = L"\'";
			this->Load += gcnew System::EventHandler(this, &CompraStockForm::CompraStockForm_Load);
			this->tabAdminCompraProductos->ResumeLayout(false);
			this->TornillosPage->ResumeLayout(false);
			this->TornillosPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTornilloPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvcompratornillos))->EndInit();
			this->FajasPage->ResumeLayout(false);
			this->FajasPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFaja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PoleasPage->ResumeLayout(false);
			this->PoleasPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->RodamientosPage->ResumeLayout(false);
			this->RodamientosPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->MotoresACPage->ResumeLayout(false);
			this->MotoresACPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->MotoresDCPage->ResumeLayout(false);
			this->MotoresDCPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TornillosPage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgvEmpleados_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   void showtornillo() {
			   List <SupplyProduct^>^ tornilloxdatos = Service::QueryAllTornilloPurchase();
			   if (tornilloxdatos != nullptr) {
				   dgvcompratornillos->Rows->Clear();

				   for (int i = 0; i < tornilloxdatos->Count; i++) {
					   dgvcompratornillos->Rows->Add(gcnew array<String^> {"" + tornilloxdatos[i]->Id, tornilloxdatos[i]->Name, "" + tornilloxdatos[i]->Needed, tornilloxdatos[i]->Store, "" + tornilloxdatos[i]->UnitaryPrice });
				   }
			   }
		   }
		   void Showfaja() {
			   List <SupplyProduct^>^ fajaxdatos = Service::QueryAllFajaPurchase();
			   if (fajaxdatos != nullptr) {
				   dgvFaja->Rows->Clear();

				   for (int i = 0; i < fajaxdatos->Count; i++) {
					   dgvFaja->Rows->Add(gcnew array<String^> {"" + fajaxdatos[i]->Id, fajaxdatos[i]->Name, "" + fajaxdatos[i]->Needed, fajaxdatos[i]->Store, "" + fajaxdatos[i]->UnitaryPrice });
				   }
			   }
		   }
private: System::Void btnaddtornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOTON PARA AGREGAR TORNILLOS
	int idtornillo = Convert::ToInt32(txtidtornillocompra->Text);

	String^ nametornillo = txttornillonamecompra->Text;
	//String^ descripciotornillon = txtdescriptornillo->Text;
	String^ proveedortornillo = txtTornilloproveecompra->Text;
	//String^ marcatornillo = txttornillomarca->Text;
	//int codigotornillo = Convert::ToInt32(txtmodeltornillo->Text);
	//String^ tipotornillo  = txtTornilloTipo->Text;
	//int longitudtornillo = Convert::ToInt32(txtTornilloLongitud->Text);
	//String^ puntatornillo = txtpuntatornillo->Text;
//	String^ materialtornillo = txtTornilloMaterial->Text;
	//String^ tiporoscatornillo = txtroscatornillo->Text;
	//int diametrotornillo = Convert::ToInt32(txtTornilloDiametroRosca->Text);
	double preciounittornillo = Convert::ToInt32(txtcompraTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtcompraTornilloRequerido->Text);


	TornilloSupplier^ tornillo = gcnew TornilloSupplier();
	tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;
	//tornillo->Description = descripcion;
	tornillo->Store = proveedortornillo;
	//tornillo->Model = codigotornillo;
	//tornillo->Tipo = tipo;
	//tornillo->Longitud = longitud;
	//tornillo->Punta = puntatornillo;
	//tornillo->Material = material;
	//tornillo->Rosca = tiporoscatornillo;
	//tornillo->DiametroRosca = diametro;
	tornillo->UnitaryPrice = preciounittornillo;
	tornillo->Needed = cantidadtornillo;
	if (pbTornilloPhoto != nullptr && pbTornilloPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbTornilloPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		tornillo->Photo = ms->ToArray();
	}
	//FAJAS DATOS PARA EL GUI Y CRUD
	Service::AddTornilloPurchase(tornillo);
	showtornillo();
}
private: System::Void btnedittornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//EDITAR TORNILLO
	int idtornillo = Convert::ToInt32(txtidtornillocompra->Text);

	String^ nametornillo = txttornillonamecompra->Text;
	//String^ descripcion = txtTornilloDescription->Text;
	String^ proveedortornillo = txtTornilloproveecompra->Text;
	//String^ marca = txtTornilloMarca->Text;
	//int codigo = Convert::ToInt32(txtTornilloModel->Text);
	//String^ tipo  = txtTornilloTipo->Text;
	//int longitud = Convert::ToInt32(txtTornilloLongitud->Text);
	//String^ punta = txtTornilloPunta->Text;
	//String^ material = txtTornilloMaterial->Text;
	//String^ tiporosca = txtTornilloTipoRosca->Text;
	//int diametro = Convert::ToInt32(txtTornilloDiametroRosca->Text);
	double preciounittornillo = Convert::ToInt32(txtcompraTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtcompraTornilloRequerido->Text);
	TornilloSupplier^ tornillo = gcnew TornilloSupplier();
	tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;
	//tornillo->Description = descripcion;
	tornillo->Store = proveedortornillo;
	//tornillo->Model = codigo;
	//tornillo->Tipo = tipo;
	//tornillo->Longitud = longitud;
	//tornillo->Punta = punta;
	//tornillo->Material = material;
	//tornillo->Rosca = tiporosca;
	//tornillo->DiametroRosca = diametro;
	tornillo->UnitaryPrice = preciounittornillo;
	tornillo->Needed = cantidadtornillo;

	if (pbTornilloPhoto != nullptr && pbTornilloPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbTornilloPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		tornillo->Photo = ms->ToArray();
	}
	Service::UpdateTornilloPurchase(tornillo);

	showtornillo();

}

private: System::Void btndeletetornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR TORNILLOS
	int idtornillo = Convert::ToInt32(txtidtornillocompra->Text);

	Service::DeleteTornilloPurchase(idtornillo);

	showtornillo();
}
private: System::Void CompraStockForm_Load(System::Object^ sender, System::EventArgs^ e) {
	showtornillo();
	Showfaja();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int idfaja = Convert::ToInt32(txtIdFaja->Text);
	String^ namefaja = txtNameFaja->Text;
	String^ proveedorfaja = txtFajaStore->Text;
	double preciounitfaja = Convert::ToInt32(txtFajaUnitaryPrice->Text);
	int cantidadfaja = Convert::ToInt32(txtFajaUnitaryPrice->Text);
	FajasSupplier^ faja = gcnew FajasSupplier();
	faja->Id = idfaja;
	faja->Name = namefaja;
	faja->Store = proveedorfaja;
	faja->UnitaryPrice = preciounitfaja;
	faja->Needed = cantidadfaja;



	Service::AddFajaPurchase(faja);
	Showfaja();
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_EditFaja_Click(System::Object^ sender, System::EventArgs^ e) {
	int idfaja = Convert::ToInt32(txtIdFaja->Text);
	String^ namefaja = txtNameFaja->Text;
	String^ proveedorfaja = txtFajaStore->Text;
	double preciounitfaja = Convert::ToInt32(txtFajaUnitaryPrice->Text);
	int cantidadfaja = Convert::ToInt32(txtFajaUnitaryPrice->Text);

	FajasSupplier^ faja = gcnew FajasSupplier();
	faja->Id = idfaja;
	faja->Name = namefaja;
	faja->Store = proveedorfaja;
	faja->UnitaryPrice = preciounitfaja;
	faja->Needed = cantidadfaja;
	Service::UpdateFajaPurchase(faja);
	Showfaja();
}
private: System::Void btn_DeteleFaja_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR FAJA
//int idtornillo = Convert::ToInt32(txtidtornillo->Text);
	int idfaja = Convert::ToInt32(txtIdFaja->Text);
	//Service::Deletetornillos(idtornillo);
	Service::DeleteFajaPurchase(idfaja);
	//showtornillo();
	Showfaja();
}
};
}
