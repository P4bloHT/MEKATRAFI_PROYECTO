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
	/// Resumen de StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	public:
		StockForm(void)
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
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnagregar;
	private: System::Windows::Forms::Button^ btncancelar;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::TabControl^ tabStock;



	private: System::Windows::Forms::TabPage^ TornillosPage;


	private: System::Windows::Forms::TextBox^ txtTornilloprovee;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTornillocantidad;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::PictureBox^ pbTornilloPhoto;


	private: System::Windows::Forms::DataGridView^ dgvtornillos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;


	private: System::Windows::Forms::Label^ label10;












	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTornilloPrecioUnitario;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtidtornillo;

	private: System::Windows::Forms::TextBox^ txttornilloname;

	private: System::Windows::Forms::TabPage^ FajasPage;
	private: System::Windows::Forms::TextBox^ txtcantidadfaja;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dgvfajastock;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtproveedorfaja;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbFajasPhoto;


	private: System::Windows::Forms::Label^ label23;


	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox17;


	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label28;


	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ txtpreciofajastock;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ txtidfajastock;
private: System::Windows::Forms::TextBox^ txtnamefajastock;


	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TabPage^ PoleasPage;
private: System::Windows::Forms::TextBox^ txtpoleacantidad;

	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridView^ dgvpolea;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ txtproveedorpolea;

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
private: System::Windows::Forms::TextBox^ txtpreciopolea;

	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ txtidpolea;
private: System::Windows::Forms::TextBox^ txtpoleaname;


	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TabPage^ RodamientosPage;
private: System::Windows::Forms::TextBox^ txtcantidadrodamiento;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::DataGridView^ dgvrodamiento;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::TextBox^ txtrodamientoproveedor;

	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::PictureBox^ pbRodamientosPhoto;

	private: System::Windows::Forms::Label^ label56;



	private: System::Windows::Forms::TextBox^ textBox47;


	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::Label^ label62;

	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::TextBox^ txtpreciorodamiento;

	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::TextBox^ txtidrodamiento;
private: System::Windows::Forms::TextBox^ txtrodamientoname;


	private: System::Windows::Forms::TextBox^ textBox55;
private: System::Windows::Forms::TabPage^ btnAgregarMotorAC;

private: System::Windows::Forms::TextBox^ txtMotorACCantidad;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::DataGridView^ dgvMotorAC;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ txtMotorACVolatje;

private: System::Windows::Forms::TextBox^ txtMotorACBrand;

	private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Button^ btnPhotoMotorAC;




private: System::Windows::Forms::PictureBox^ pbMotorACPhoto;
private: System::Windows::Forms::TextBox^ txtMotorACFormaFijacion;


	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::TextBox^ txtMotorACModel;


	private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::TextBox^ txtMotorACInversorCompatilbidad;

	private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::TextBox^ txtMotorACTipoProteccion;

	private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::TextBox^ txtMotorACPotencia;

	private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::TextBox^ txtMotorACFrame;

	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::TextBox^ txtMotorACPrecioUnitario;

	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::TextBox^ txtMotorACId;
private: System::Windows::Forms::TextBox^ txtMotorACFases;
private: System::Windows::Forms::TextBox^ txtMotorACName;




private: System::Windows::Forms::TextBox^ txtMotorACDescription;



	private: System::Windows::Forms::TabPage^ MotoresDCPage;
private: System::Windows::Forms::TextBox^ txtMotorDCStock;

	private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::DataGridView^ dgvMotorDC;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::TextBox^ txtMotorDCMarca;

	private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Button^ UpdatePhotoMotorDC;




private: System::Windows::Forms::PictureBox^ pbMotorDCPhto;

	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::TextBox^ txtMotorDCModel;

	private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::TextBox^ txtMotorDCMontaje;

private: System::Windows::Forms::TextBox^ txtMotorDCVelocidad;

	private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::TextBox^ txtMotorDCVoltaje;

	private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::TextBox^ txtMotorDCPotencia;

	private: System::Windows::Forms::Label^ label97;
	private: System::Windows::Forms::Label^ label98;
	private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::TextBox^ txtMotorDCPrecioUniario;

	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::TextBox^ txtMotorDCId;
private: System::Windows::Forms::TextBox^ txtMotorDCName;
private: System::Windows::Forms::TextBox^ txtMotorDescripcion;



private: System::Windows::Forms::Button^ btnedittornillo;
private: System::Windows::Forms::Button^ btndeletetornillo;


private: System::Windows::Forms::Button^ btnaddtornillo;
private: System::Windows::Forms::Button^ btneditfaja;
private: System::Windows::Forms::Button^ btndeletefaja;

private: System::Windows::Forms::Button^ btnaddfaja;
private: System::Windows::Forms::Button^ editpoleastock;
private: System::Windows::Forms::Button^ btndeletepoleastock;


private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ btneditrodamiento;
private: System::Windows::Forms::Button^ btndeleterodamiento;


private: System::Windows::Forms::Button^ btnaddrodamiento;
private: System::Windows::Forms::TextBox^ txtroscatornillo;
private: System::Windows::Forms::Button^ btnEditMotorAC;
private: System::Windows::Forms::Button^ btnDeteleMotorAC;

private: System::Windows::Forms::Label^ label9;


private: System::Windows::Forms::TextBox^ txtpuntatornillo;
private: System::Windows::Forms::Label^ label4;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ txtdescriptornillo;
private: System::Windows::Forms::Label^ label2;

private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ btnEditarMotorDC;
private: System::Windows::Forms::Button^ btnDeleteMotorDC;


private: System::Windows::Forms::Button^ btnAgregarMotorDC;
private: System::Windows::Forms::TextBox^ txtproveedorMotorAC;

//private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ txtProveedorMotorDC;
private: System::Windows::Forms::Label^ label5;
	   //private: System::Windows::Forms::Label^ label3;
























































































































































































































































	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnagregar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->tabStock = (gcnew System::Windows::Forms::TabControl());
			this->TornillosPage = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtroscatornillo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtpuntatornillo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtdescriptornillo = (gcnew System::Windows::Forms::TextBox());
			this->btnedittornillo = (gcnew System::Windows::Forms::Button());
			this->btndeletetornillo = (gcnew System::Windows::Forms::Button());
			this->btnaddtornillo = (gcnew System::Windows::Forms::Button());
			this->txtTornilloprovee = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTornillocantidad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->pbTornilloPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->dgvtornillos = (gcnew System::Windows::Forms::DataGridView());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTornilloPrecioUnitario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtidtornillo = (gcnew System::Windows::Forms::TextBox());
			this->txttornilloname = (gcnew System::Windows::Forms::TextBox());
			this->FajasPage = (gcnew System::Windows::Forms::TabPage());
			this->btneditfaja = (gcnew System::Windows::Forms::Button());
			this->btndeletefaja = (gcnew System::Windows::Forms::Button());
			this->btnaddfaja = (gcnew System::Windows::Forms::Button());
			this->txtcantidadfaja = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgvfajastock = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtproveedorfaja = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbFajasPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtpreciofajastock = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtidfajastock = (gcnew System::Windows::Forms::TextBox());
			this->txtnamefajastock = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->PoleasPage = (gcnew System::Windows::Forms::TabPage());
			this->editpoleastock = (gcnew System::Windows::Forms::Button());
			this->btndeletepoleastock = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txtpoleacantidad = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvpolea = (gcnew System::Windows::Forms::DataGridView());
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
			this->txtproveedorpolea = (gcnew System::Windows::Forms::TextBox());
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
			this->txtpreciopolea = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->txtidpolea = (gcnew System::Windows::Forms::TextBox());
			this->txtpoleaname = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->RodamientosPage = (gcnew System::Windows::Forms::TabPage());
			this->btneditrodamiento = (gcnew System::Windows::Forms::Button());
			this->btndeleterodamiento = (gcnew System::Windows::Forms::Button());
			this->btnaddrodamiento = (gcnew System::Windows::Forms::Button());
			this->txtcantidadrodamiento = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dgvrodamiento = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->txtrodamientoproveedor = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pbRodamientosPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->txtpreciorodamiento = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->txtidrodamiento = (gcnew System::Windows::Forms::TextBox());
			this->txtrodamientoname = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarMotorAC = (gcnew System::Windows::Forms::TabPage());
			this->txtproveedorMotorAC = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEditMotorAC = (gcnew System::Windows::Forms::Button());
			this->btnDeteleMotorAC = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->txtMotorACCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dgvMotorAC = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACVolatje = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACBrand = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->btnPhotoMotorAC = (gcnew System::Windows::Forms::Button());
			this->pbMotorACPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtMotorACFormaFijacion = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACModel = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACInversorCompatilbidad = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACTipoProteccion = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACPotencia = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACFrame = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACPrecioUnitario = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->txtMotorACId = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACFases = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACName = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorACDescription = (gcnew System::Windows::Forms::TextBox());
			this->MotoresDCPage = (gcnew System::Windows::Forms::TabPage());
			this->txtProveedorMotorDC = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnEditarMotorDC = (gcnew System::Windows::Forms::Button());
			this->btnDeleteMotorDC = (gcnew System::Windows::Forms::Button());
			this->btnAgregarMotorDC = (gcnew System::Windows::Forms::Button());
			this->txtMotorDCStock = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->dgvMotorDC = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMotorDCMarca = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->UpdatePhotoMotorDC = (gcnew System::Windows::Forms::Button());
			this->pbMotorDCPhto = (gcnew System::Windows::Forms::PictureBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCModel = (gcnew System::Windows::Forms::TextBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCMontaje = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorDCVelocidad = (gcnew System::Windows::Forms::TextBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCVoltaje = (gcnew System::Windows::Forms::TextBox());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCPotencia = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCPrecioUniario = (gcnew System::Windows::Forms::TextBox());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->txtMotorDCId = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorDCName = (gcnew System::Windows::Forms::TextBox());
			this->txtMotorDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->tabStock->SuspendLayout();
			this->TornillosPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTornilloPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtornillos))->BeginInit();
			this->FajasPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvfajastock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFajasPhoto))->BeginInit();
			this->PoleasPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvpolea))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->RodamientosPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvrodamiento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRodamientosPhoto))->BeginInit();
			this->btnAgregarMotorAC->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMotorAC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->BeginInit();
			this->MotoresDCPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMotorDC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorDCPhto))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(174, 525);
			this->panel1->TabIndex = 50;
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
			this->btnEliminar->Click += gcnew System::EventHandler(this, &StockForm::btnEliminar_Click);
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
			this->btnagregar->Click += gcnew System::EventHandler(this, &StockForm::btnagregar_Click);
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
			this->btncancelar->Click += gcnew System::EventHandler(this, &StockForm::btncancelar_Click);
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
			this->btnEditar->Click += gcnew System::EventHandler(this, &StockForm::btnEditar_Click);
			// 
			// tabStock
			// 
			this->tabStock->Controls->Add(this->TornillosPage);
			this->tabStock->Controls->Add(this->FajasPage);
			this->tabStock->Controls->Add(this->PoleasPage);
			this->tabStock->Controls->Add(this->RodamientosPage);
			this->tabStock->Controls->Add(this->btnAgregarMotorAC);
			this->tabStock->Controls->Add(this->MotoresDCPage);
			this->tabStock->Location = System::Drawing::Point(199, 11);
			this->tabStock->Margin = System::Windows::Forms::Padding(2);
			this->tabStock->Name = L"tabStock";
			this->tabStock->SelectedIndex = 0;
			this->tabStock->Size = System::Drawing::Size(677, 514);
			this->tabStock->TabIndex = 51;
			// 
			// TornillosPage
			// 
			this->TornillosPage->Controls->Add(this->label5);
			this->TornillosPage->Controls->Add(this->txtroscatornillo);
			this->TornillosPage->Controls->Add(this->label9);
			this->TornillosPage->Controls->Add(this->txtpuntatornillo);
			this->TornillosPage->Controls->Add(this->label4);
			this->TornillosPage->Controls->Add(this->txtdescriptornillo);
			this->TornillosPage->Controls->Add(this->btnedittornillo);
			this->TornillosPage->Controls->Add(this->btndeletetornillo);
			this->TornillosPage->Controls->Add(this->btnaddtornillo);
			this->TornillosPage->Controls->Add(this->txtTornilloprovee);
			this->TornillosPage->Controls->Add(this->label6);
			this->TornillosPage->Controls->Add(this->txtTornillocantidad);
			this->TornillosPage->Controls->Add(this->label13);
			this->TornillosPage->Controls->Add(this->btnEmpUpdatePhoto);
			this->TornillosPage->Controls->Add(this->pbTornilloPhoto);
			this->TornillosPage->Controls->Add(this->dgvtornillos);
			this->TornillosPage->Controls->Add(this->label10);
			this->TornillosPage->Controls->Add(this->label8);
			this->TornillosPage->Controls->Add(this->txtTornilloPrecioUnitario);
			this->TornillosPage->Controls->Add(this->label7);
			this->TornillosPage->Controls->Add(this->label1);
			this->TornillosPage->Controls->Add(this->txtidtornillo);
			this->TornillosPage->Controls->Add(this->txttornilloname);
			this->TornillosPage->Location = System::Drawing::Point(4, 22);
			this->TornillosPage->Margin = System::Windows::Forms::Padding(2);
			this->TornillosPage->Name = L"TornillosPage";
			this->TornillosPage->Padding = System::Windows::Forms::Padding(2);
			this->TornillosPage->Size = System::Drawing::Size(669, 488);
			this->TornillosPage->TabIndex = 0;
			this->TornillosPage->Text = L"Tornillos";
			this->TornillosPage->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(200, 129);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 83;
			this->label5->Text = L"Descripcion";
			// 
			// txtroscatornillo
			// 
			this->txtroscatornillo->Location = System::Drawing::Point(106, 129);
			this->txtroscatornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtroscatornillo->Name = L"txtroscatornillo";
			this->txtroscatornillo->Size = System::Drawing::Size(39, 20);
			this->txtroscatornillo->TabIndex = 82;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(53, 132);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 81;
			this->label9->Text = L"Rosca";
			// 
			// txtpuntatornillo
			// 
			this->txtpuntatornillo->Location = System::Drawing::Point(303, 98);
			this->txtpuntatornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtpuntatornillo->Name = L"txtpuntatornillo";
			this->txtpuntatornillo->Size = System::Drawing::Size(68, 20);
			this->txtpuntatornillo->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(200, 101);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Tipo de punta";
			// 
			// txtdescriptornillo
			// 
			this->txtdescriptornillo->Location = System::Drawing::Point(267, 126);
			this->txtdescriptornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtdescriptornillo->Multiline = true;
			this->txtdescriptornillo->Name = L"txtdescriptornillo";
			this->txtdescriptornillo->Size = System::Drawing::Size(218, 19);
			this->txtdescriptornillo->TabIndex = 74;
			// 
			// btnedittornillo
			// 
			this->btnedittornillo->Location = System::Drawing::Point(148, 157);
			this->btnedittornillo->Name = L"btnedittornillo";
			this->btnedittornillo->Size = System::Drawing::Size(75, 23);
			this->btnedittornillo->TabIndex = 72;
			this->btnedittornillo->Text = L"Editar";
			this->btnedittornillo->UseVisualStyleBackColor = true;
			this->btnedittornillo->Click += gcnew System::EventHandler(this, &StockForm::btnedittornillo_Click);
			// 
			// btndeletetornillo
			// 
			this->btndeletetornillo->Location = System::Drawing::Point(247, 157);
			this->btndeletetornillo->Name = L"btndeletetornillo";
			this->btndeletetornillo->Size = System::Drawing::Size(75, 23);
			this->btndeletetornillo->TabIndex = 71;
			this->btndeletetornillo->Text = L"Eliminar";
			this->btndeletetornillo->UseVisualStyleBackColor = true;
			this->btndeletetornillo->Click += gcnew System::EventHandler(this, &StockForm::btndeletetornillo_Click);
			// 
			// btnaddtornillo
			// 
			this->btnaddtornillo->Location = System::Drawing::Point(45, 157);
			this->btnaddtornillo->Name = L"btnaddtornillo";
			this->btnaddtornillo->Size = System::Drawing::Size(75, 23);
			this->btnaddtornillo->TabIndex = 70;
			this->btnaddtornillo->Text = L"Agregar";
			this->btnaddtornillo->UseVisualStyleBackColor = true;
			this->btnaddtornillo->Click += gcnew System::EventHandler(this, &StockForm::btnaddtornillo_Click);
			// 
			// txtTornilloprovee
			// 
			this->txtTornilloprovee->Location = System::Drawing::Point(303, 67);
			this->txtTornilloprovee->Margin = System::Windows::Forms::Padding(2);
			this->txtTornilloprovee->Name = L"txtTornilloprovee";
			this->txtTornilloprovee->Size = System::Drawing::Size(117, 20);
			this->txtTornilloprovee->TabIndex = 69;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(200, 70);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 68;
			this->label6->Text = L"Proveedor(Tienda)";
			// 
			// txtTornillocantidad
			// 
			this->txtTornillocantidad->Location = System::Drawing::Point(106, 63);
			this->txtTornillocantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtTornillocantidad->Name = L"txtTornillocantidad";
			this->txtTornillocantidad->Size = System::Drawing::Size(51, 20);
			this->txtTornillocantidad->TabIndex = 67;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 68);
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
			this->btnEmpUpdatePhoto->Click += gcnew System::EventHandler(this, &StockForm::btnEmpUpdatePhoto_Click);
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
			// dgvtornillos
			// 
			this->dgvtornillos->AllowUserToAddRows = false;
			this->dgvtornillos->AllowUserToOrderColumns = true;
			this->dgvtornillos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvtornillos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombres,
					this->Carrera, this->Cantidad, this->Proveedor, this->Telefono
			});
			this->dgvtornillos->Location = System::Drawing::Point(12, 208);
			this->dgvtornillos->Name = L"dgvtornillos";
			this->dgvtornillos->RowHeadersVisible = false;
			this->dgvtornillos->RowHeadersWidth = 51;
			this->dgvtornillos->Size = System::Drawing::Size(498, 119);
			this->dgvtornillos->TabIndex = 61;
			this->dgvtornillos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvtornillos_CellClick);
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"ID";
			this->Nombres->MinimumWidth = 6;
			this->Nombres->Name = L"Nombres";
			this->Nombres->Width = 125;
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Nombre";
			this->Carrera->MinimumWidth = 6;
			this->Carrera->Name = L"Carrera";
			this->Carrera->Width = 125;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 6;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 125;
			// 
			// Proveedor
			// 
			this->Proveedor->HeaderText = L"Proveedor";
			this->Proveedor->MinimumWidth = 6;
			this->Proveedor->Name = L"Proveedor";
			this->Proveedor->Width = 125;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Precio Unitario";
			this->Telefono->MinimumWidth = 6;
			this->Telefono->Name = L"Telefono";
			this->Telefono->Width = 125;
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(75, 28);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Id";
			// 
			// txtTornilloPrecioUnitario
			// 
			this->txtTornilloPrecioUnitario->Location = System::Drawing::Point(124, 94);
			this->txtTornilloPrecioUnitario->Margin = System::Windows::Forms::Padding(2);
			this->txtTornilloPrecioUnitario->Name = L"txtTornilloPrecioUnitario";
			this->txtTornilloPrecioUnitario->Size = System::Drawing::Size(51, 20);
			this->txtTornilloPrecioUnitario->TabIndex = 45;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 97);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Precio Unitario (S/.)";
			this->label1->Click += gcnew System::EventHandler(this, &StockForm::label1_Click);
			// 
			// txtidtornillo
			// 
			this->txtidtornillo->Location = System::Drawing::Point(106, 25);
			this->txtidtornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtidtornillo->Name = L"txtidtornillo";
			this->txtidtornillo->Size = System::Drawing::Size(43, 20);
			this->txtidtornillo->TabIndex = 38;
			// 
			// txttornilloname
			// 
			this->txttornilloname->Location = System::Drawing::Point(262, 26);
			this->txttornilloname->Margin = System::Windows::Forms::Padding(2);
			this->txttornilloname->Name = L"txttornilloname";
			this->txttornilloname->Size = System::Drawing::Size(223, 20);
			this->txttornilloname->TabIndex = 39;
			// 
			// FajasPage
			// 
			this->FajasPage->Controls->Add(this->btneditfaja);
			this->FajasPage->Controls->Add(this->btndeletefaja);
			this->FajasPage->Controls->Add(this->btnaddfaja);
			this->FajasPage->Controls->Add(this->txtcantidadfaja);
			this->FajasPage->Controls->Add(this->label15);
			this->FajasPage->Controls->Add(this->dgvfajastock);
			this->FajasPage->Controls->Add(this->textBox12);
			this->FajasPage->Controls->Add(this->label17);
			this->FajasPage->Controls->Add(this->txtproveedorfaja);
			this->FajasPage->Controls->Add(this->label19);
			this->FajasPage->Controls->Add(this->button1);
			this->FajasPage->Controls->Add(this->pbFajasPhoto);
			this->FajasPage->Controls->Add(this->label23);
			this->FajasPage->Controls->Add(this->label25);
			this->FajasPage->Controls->Add(this->textBox17);
			this->FajasPage->Controls->Add(this->textBox19);
			this->FajasPage->Controls->Add(this->label28);
			this->FajasPage->Controls->Add(this->label30);
			this->FajasPage->Controls->Add(this->label31);
			this->FajasPage->Controls->Add(this->txtpreciofajastock);
			this->FajasPage->Controls->Add(this->label32);
			this->FajasPage->Controls->Add(this->label33);
			this->FajasPage->Controls->Add(this->txtidfajastock);
			this->FajasPage->Controls->Add(this->txtnamefajastock);
			this->FajasPage->Controls->Add(this->textBox25);
			this->FajasPage->Location = System::Drawing::Point(4, 22);
			this->FajasPage->Margin = System::Windows::Forms::Padding(2);
			this->FajasPage->Name = L"FajasPage";
			this->FajasPage->Padding = System::Windows::Forms::Padding(2);
			this->FajasPage->Size = System::Drawing::Size(669, 488);
			this->FajasPage->TabIndex = 1;
			this->FajasPage->Text = L"Fajas";
			this->FajasPage->UseVisualStyleBackColor = true;
			// 
			// btneditfaja
			// 
			this->btneditfaja->Location = System::Drawing::Point(248, 208);
			this->btneditfaja->Name = L"btneditfaja";
			this->btneditfaja->Size = System::Drawing::Size(75, 23);
			this->btneditfaja->TabIndex = 114;
			this->btneditfaja->Text = L"Editar";
			this->btneditfaja->UseVisualStyleBackColor = true;
			this->btneditfaja->Click += gcnew System::EventHandler(this, &StockForm::btneditfaja_Click);
			// 
			// btndeletefaja
			// 
			this->btndeletefaja->Location = System::Drawing::Point(347, 208);
			this->btndeletefaja->Name = L"btndeletefaja";
			this->btndeletefaja->Size = System::Drawing::Size(75, 23);
			this->btndeletefaja->TabIndex = 113;
			this->btndeletefaja->Text = L"Eliminar";
			this->btndeletefaja->UseVisualStyleBackColor = true;
			this->btndeletefaja->Click += gcnew System::EventHandler(this, &StockForm::btndeletefaja_Click);
			// 
			// btnaddfaja
			// 
			this->btnaddfaja->Location = System::Drawing::Point(145, 208);
			this->btnaddfaja->Name = L"btnaddfaja";
			this->btnaddfaja->Size = System::Drawing::Size(75, 23);
			this->btnaddfaja->TabIndex = 112;
			this->btnaddfaja->Text = L"Agregar";
			this->btnaddfaja->UseVisualStyleBackColor = true;
			this->btnaddfaja->Click += gcnew System::EventHandler(this, &StockForm::btnaddfaja_Click);
			// 
			// txtcantidadfaja
			// 
			this->txtcantidadfaja->Location = System::Drawing::Point(145, 129);
			this->txtcantidadfaja->Margin = System::Windows::Forms::Padding(2);
			this->txtcantidadfaja->Name = L"txtcantidadfaja";
			this->txtcantidadfaja->Size = System::Drawing::Size(51, 20);
			this->txtcantidadfaja->TabIndex = 111;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(81, 134);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 110;
			this->label15->Text = L"Cantidad";
			// 
			// dgvfajastock
			// 
			this->dgvfajastock->AllowUserToAddRows = false;
			this->dgvfajastock->AllowUserToOrderColumns = true;
			this->dgvfajastock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvfajastock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dgvfajastock->Location = System::Drawing::Point(62, 254);
			this->dgvfajastock->Name = L"dgvfajastock";
			this->dgvfajastock->RowHeadersVisible = false;
			this->dgvfajastock->RowHeadersWidth = 51;
			this->dgvfajastock->Size = System::Drawing::Size(504, 119);
			this->dgvfajastock->TabIndex = 109;
			this->dgvfajastock->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvfajastock_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(366, 129);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(117, 20);
			this->textBox12->TabIndex = 106;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(302, 132);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 13);
			this->label17->TabIndex = 105;
			this->label17->Text = L"Marca";
			// 
			// txtproveedorfaja
			// 
			this->txtproveedorfaja->Location = System::Drawing::Point(366, 97);
			this->txtproveedorfaja->Margin = System::Windows::Forms::Padding(2);
			this->txtproveedorfaja->Name = L"txtproveedorfaja";
			this->txtproveedorfaja->Size = System::Drawing::Size(117, 20);
			this->txtproveedorfaja->TabIndex = 104;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(267, 100);
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
			// pbFajasPhoto
			// 
			this->pbFajasPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbFajasPhoto->Location = System::Drawing::Point(514, 22);
			this->pbFajasPhoto->Name = L"pbFajasPhoto";
			this->pbFajasPhoto->Size = System::Drawing::Size(137, 145);
			this->pbFajasPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbFajasPhoto->TabIndex = 99;
			this->pbFajasPhoto->TabStop = false;
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
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(47, 174);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 13);
			this->label25->TabIndex = 91;
			this->label25->Text = L"Diametro Externo";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(143, 167);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(117, 20);
			this->textBox17->TabIndex = 90;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(366, 161);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(117, 20);
			this->textBox19->TabIndex = 86;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(273, 167);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(85, 13);
			this->label28->TabIndex = 85;
			this->label28->Text = L"Diametro Interno";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(32, 68);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 13);
			this->label30->TabIndex = 78;
			this->label30->Text = L"Descripci�n";
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
			// txtpreciofajastock
			// 
			this->txtpreciofajastock->Location = System::Drawing::Point(143, 102);
			this->txtpreciofajastock->Margin = System::Windows::Forms::Padding(2);
			this->txtpreciofajastock->Name = L"txtpreciofajastock";
			this->txtpreciofajastock->Size = System::Drawing::Size(51, 20);
			this->txtpreciofajastock->TabIndex = 82;
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
			this->label33->Location = System::Drawing::Point(30, 109);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 13);
			this->label33->TabIndex = 81;
			this->label33->Text = L"Precio Unitario (S/.)";
			// 
			// txtidfajastock
			// 
			this->txtidfajastock->Location = System::Drawing::Point(104, 29);
			this->txtidfajastock->Margin = System::Windows::Forms::Padding(2);
			this->txtidfajastock->Name = L"txtidfajastock";
			this->txtidfajastock->Size = System::Drawing::Size(43, 20);
			this->txtidfajastock->TabIndex = 76;
			// 
			// txtnamefajastock
			// 
			this->txtnamefajastock->Location = System::Drawing::Point(260, 30);
			this->txtnamefajastock->Margin = System::Windows::Forms::Padding(2);
			this->txtnamefajastock->Name = L"txtnamefajastock";
			this->txtnamefajastock->Size = System::Drawing::Size(223, 20);
			this->txtnamefajastock->TabIndex = 77;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(104, 65);
			this->textBox25->Margin = System::Windows::Forms::Padding(2);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(379, 16);
			this->textBox25->TabIndex = 79;
			// 
			// PoleasPage
			// 
			this->PoleasPage->Controls->Add(this->editpoleastock);
			this->PoleasPage->Controls->Add(this->btndeletepoleastock);
			this->PoleasPage->Controls->Add(this->button8);
			this->PoleasPage->Controls->Add(this->txtpoleacantidad);
			this->PoleasPage->Controls->Add(this->label16);
			this->PoleasPage->Controls->Add(this->dgvpolea);
			this->PoleasPage->Controls->Add(this->label43);
			this->PoleasPage->Controls->Add(this->textBox35);
			this->PoleasPage->Controls->Add(this->label42);
			this->PoleasPage->Controls->Add(this->textBox34);
			this->PoleasPage->Controls->Add(this->textBox23);
			this->PoleasPage->Controls->Add(this->label26);
			this->PoleasPage->Controls->Add(this->txtproveedorpolea);
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
			this->PoleasPage->Controls->Add(this->txtpreciopolea);
			this->PoleasPage->Controls->Add(this->label41);
			this->PoleasPage->Controls->Add(this->button2);
			this->PoleasPage->Controls->Add(this->pictureBox2);
			this->PoleasPage->Controls->Add(this->label47);
			this->PoleasPage->Controls->Add(this->label48);
			this->PoleasPage->Controls->Add(this->label49);
			this->PoleasPage->Controls->Add(this->txtidpolea);
			this->PoleasPage->Controls->Add(this->txtpoleaname);
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
			// editpoleastock
			// 
			this->editpoleastock->Location = System::Drawing::Point(254, 286);
			this->editpoleastock->Name = L"editpoleastock";
			this->editpoleastock->Size = System::Drawing::Size(75, 23);
			this->editpoleastock->TabIndex = 138;
			this->editpoleastock->Text = L"Editar";
			this->editpoleastock->UseVisualStyleBackColor = true;
			this->editpoleastock->Click += gcnew System::EventHandler(this, &StockForm::editpoleastock_Click);
			// 
			// btndeletepoleastock
			// 
			this->btndeletepoleastock->Location = System::Drawing::Point(353, 286);
			this->btndeletepoleastock->Name = L"btndeletepoleastock";
			this->btndeletepoleastock->Size = System::Drawing::Size(75, 23);
			this->btndeletepoleastock->TabIndex = 137;
			this->btndeletepoleastock->Text = L"Eliminar";
			this->btndeletepoleastock->UseVisualStyleBackColor = true;
			this->btndeletepoleastock->Click += gcnew System::EventHandler(this, &StockForm::btndeletepoleastock_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(151, 286);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 136;
			this->button8->Text = L"Agregar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StockForm::button8_Click);
			// 
			// txtpoleacantidad
			// 
			this->txtpoleacantidad->Location = System::Drawing::Point(362, 261);
			this->txtpoleacantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtpoleacantidad->Name = L"txtpoleacantidad";
			this->txtpoleacantidad->Size = System::Drawing::Size(51, 20);
			this->txtpoleacantidad->TabIndex = 135;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(298, 266);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 13);
			this->label16->TabIndex = 134;
			this->label16->Text = L"Cantidad";
			// 
			// dgvpolea
			// 
			this->dgvpolea->AllowUserToAddRows = false;
			this->dgvpolea->AllowUserToOrderColumns = true;
			this->dgvpolea->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvpolea->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dgvpolea->Location = System::Drawing::Point(72, 327);
			this->dgvpolea->Name = L"dgvpolea";
			this->dgvpolea->RowHeadersVisible = false;
			this->dgvpolea->RowHeadersWidth = 51;
			this->dgvpolea->Size = System::Drawing::Size(504, 119);
			this->dgvpolea->TabIndex = 133;
			this->dgvpolea->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvpolea_CellClick);
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(274, 233);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(67, 13);
			this->label43->TabIndex = 132;
			this->label43->Text = L"Diametro Eje";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(362, 226);
			this->textBox35->Margin = System::Windows::Forms::Padding(2);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(108, 20);
			this->textBox35->TabIndex = 131;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(64, 213);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(44, 13);
			this->label42->TabIndex = 130;
			this->label42->Text = L"Material";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(116, 206);
			this->textBox34->Margin = System::Windows::Forms::Padding(2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(108, 20);
			this->textBox34->TabIndex = 129;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(366, 136);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(117, 20);
			this->textBox23->TabIndex = 126;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(302, 139);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 13);
			this->label26->TabIndex = 125;
			this->label26->Text = L"Marca";
			// 
			// txtproveedorpolea
			// 
			this->txtproveedorpolea->Location = System::Drawing::Point(366, 104);
			this->txtproveedorpolea->Margin = System::Windows::Forms::Padding(2);
			this->txtproveedorpolea->Name = L"txtproveedorpolea";
			this->txtproveedorpolea->Size = System::Drawing::Size(117, 20);
			this->txtproveedorpolea->TabIndex = 124;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(267, 107);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(95, 13);
			this->label34->TabIndex = 123;
			this->label34->Text = L"Proveedor(Tienda)";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(28, 189);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(80, 13);
			this->label36->TabIndex = 120;
			this->label36->Text = L"Ancho de Paso";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(28, 122);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(84, 13);
			this->label37->TabIndex = 119;
			this->label37->Text = L"Codigo (Modelo)";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(116, 104);
			this->textBox28->Margin = System::Windows::Forms::Padding(2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(136, 20);
			this->textBox28->TabIndex = 118;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(270, 209);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(88, 13);
			this->label38->TabIndex = 117;
			this->label38->Text = L"Diametro Externo";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(366, 202);
			this->textBox29->Margin = System::Windows::Forms::Padding(2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(117, 20);
			this->textBox29->TabIndex = 116;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(116, 171);
			this->textBox30->Margin = System::Windows::Forms::Padding(2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(108, 20);
			this->textBox30->TabIndex = 115;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(69, 151);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 114;
			this->label39->Text = L"Tipo";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(366, 168);
			this->textBox31->Margin = System::Windows::Forms::Padding(2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(117, 20);
			this->textBox31->TabIndex = 113;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(273, 174);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(85, 13);
			this->label40->TabIndex = 112;
			this->label40->Text = L"Diametro Interno";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(116, 137);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(136, 20);
			this->textBox32->TabIndex = 111;
			// 
			// txtpreciopolea
			// 
			this->txtpreciopolea->Location = System::Drawing::Point(173, 230);
			this->txtpreciopolea->Margin = System::Windows::Forms::Padding(2);
			this->txtpreciopolea->Name = L"txtpreciopolea";
			this->txtpreciopolea->Size = System::Drawing::Size(51, 20);
			this->txtpreciopolea->TabIndex = 110;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(60, 237);
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
			this->label47->Text = L"Descripci�n";
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
			// txtidpolea
			// 
			this->txtidpolea->Location = System::Drawing::Point(104, 29);
			this->txtidpolea->Margin = System::Windows::Forms::Padding(2);
			this->txtidpolea->Name = L"txtidpolea";
			this->txtidpolea->Size = System::Drawing::Size(43, 20);
			this->txtidpolea->TabIndex = 76;
			// 
			// txtpoleaname
			// 
			this->txtpoleaname->Location = System::Drawing::Point(260, 30);
			this->txtpoleaname->Margin = System::Windows::Forms::Padding(2);
			this->txtpoleaname->Name = L"txtpoleaname";
			this->txtpoleaname->Size = System::Drawing::Size(223, 20);
			this->txtpoleaname->TabIndex = 77;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(104, 65);
			this->textBox40->Margin = System::Windows::Forms::Padding(2);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(379, 28);
			this->textBox40->TabIndex = 79;
			// 
			// RodamientosPage
			// 
			this->RodamientosPage->Controls->Add(this->btneditrodamiento);
			this->RodamientosPage->Controls->Add(this->btndeleterodamiento);
			this->RodamientosPage->Controls->Add(this->btnaddrodamiento);
			this->RodamientosPage->Controls->Add(this->txtcantidadrodamiento);
			this->RodamientosPage->Controls->Add(this->label20);
			this->RodamientosPage->Controls->Add(this->dgvrodamiento);
			this->RodamientosPage->Controls->Add(this->textBox42);
			this->RodamientosPage->Controls->Add(this->label52);
			this->RodamientosPage->Controls->Add(this->txtrodamientoproveedor);
			this->RodamientosPage->Controls->Add(this->label53);
			this->RodamientosPage->Controls->Add(this->button3);
			this->RodamientosPage->Controls->Add(this->pbRodamientosPhoto);
			this->RodamientosPage->Controls->Add(this->label56);
			this->RodamientosPage->Controls->Add(this->textBox47);
			this->RodamientosPage->Controls->Add(this->textBox49);
			this->RodamientosPage->Controls->Add(this->label62);
			this->RodamientosPage->Controls->Add(this->label63);
			this->RodamientosPage->Controls->Add(this->label64);
			this->RodamientosPage->Controls->Add(this->label65);
			this->RodamientosPage->Controls->Add(this->txtpreciorodamiento);
			this->RodamientosPage->Controls->Add(this->label66);
			this->RodamientosPage->Controls->Add(this->label67);
			this->RodamientosPage->Controls->Add(this->txtidrodamiento);
			this->RodamientosPage->Controls->Add(this->txtrodamientoname);
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
			// btneditrodamiento
			// 
			this->btneditrodamiento->Location = System::Drawing::Point(260, 251);
			this->btneditrodamiento->Name = L"btneditrodamiento";
			this->btneditrodamiento->Size = System::Drawing::Size(75, 23);
			this->btneditrodamiento->TabIndex = 141;
			this->btneditrodamiento->Text = L"Editar";
			this->btneditrodamiento->UseVisualStyleBackColor = true;
			this->btneditrodamiento->Click += gcnew System::EventHandler(this, &StockForm::btneditrodamiento_Click);
			// 
			// btndeleterodamiento
			// 
			this->btndeleterodamiento->Location = System::Drawing::Point(359, 251);
			this->btndeleterodamiento->Name = L"btndeleterodamiento";
			this->btndeleterodamiento->Size = System::Drawing::Size(75, 23);
			this->btndeleterodamiento->TabIndex = 140;
			this->btndeleterodamiento->Text = L"Eliminar";
			this->btndeleterodamiento->UseVisualStyleBackColor = true;
			this->btndeleterodamiento->Click += gcnew System::EventHandler(this, &StockForm::btndeleterodamiento_Click);
			// 
			// btnaddrodamiento
			// 
			this->btnaddrodamiento->Location = System::Drawing::Point(157, 251);
			this->btnaddrodamiento->Name = L"btnaddrodamiento";
			this->btnaddrodamiento->Size = System::Drawing::Size(75, 23);
			this->btnaddrodamiento->TabIndex = 139;
			this->btnaddrodamiento->Text = L"Agregar";
			this->btnaddrodamiento->UseVisualStyleBackColor = true;
			this->btnaddrodamiento->Click += gcnew System::EventHandler(this, &StockForm::btnaddrodamiento_Click);
			// 
			// txtcantidadrodamiento
			// 
			this->txtcantidadrodamiento->Location = System::Drawing::Point(366, 186);
			this->txtcantidadrodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtcantidadrodamiento->Name = L"txtcantidadrodamiento";
			this->txtcantidadrodamiento->Size = System::Drawing::Size(51, 20);
			this->txtcantidadrodamiento->TabIndex = 111;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(302, 191);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 13);
			this->label20->TabIndex = 110;
			this->label20->Text = L"Cantidad";
			// 
			// dgvrodamiento
			// 
			this->dgvrodamiento->AllowUserToAddRows = false;
			this->dgvrodamiento->AllowUserToOrderColumns = true;
			this->dgvrodamiento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvrodamiento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn11,
					this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->dgvrodamiento->Location = System::Drawing::Point(80, 305);
			this->dgvrodamiento->Name = L"dgvrodamiento";
			this->dgvrodamiento->RowHeadersVisible = false;
			this->dgvrodamiento->RowHeadersWidth = 51;
			this->dgvrodamiento->Size = System::Drawing::Size(504, 119);
			this->dgvrodamiento->TabIndex = 109;
			this->dgvrodamiento->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvrodamiento_CellClick);
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 125;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(104, 154);
			this->textBox42->Margin = System::Windows::Forms::Padding(2);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(117, 20);
			this->textBox42->TabIndex = 106;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(40, 157);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(37, 13);
			this->label52->TabIndex = 105;
			this->label52->Text = L"Marca";
			// 
			// txtrodamientoproveedor
			// 
			this->txtrodamientoproveedor->Location = System::Drawing::Point(104, 122);
			this->txtrodamientoproveedor->Margin = System::Windows::Forms::Padding(2);
			this->txtrodamientoproveedor->Name = L"txtrodamientoproveedor";
			this->txtrodamientoproveedor->Size = System::Drawing::Size(117, 20);
			this->txtrodamientoproveedor->TabIndex = 104;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(5, 125);
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
			// pbRodamientosPhoto
			// 
			this->pbRodamientosPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbRodamientosPhoto->Location = System::Drawing::Point(514, 22);
			this->pbRodamientosPhoto->Name = L"pbRodamientosPhoto";
			this->pbRodamientosPhoto->Size = System::Drawing::Size(137, 145);
			this->pbRodamientosPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbRodamientosPhoto->TabIndex = 99;
			this->pbRodamientosPhoto->TabStop = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(275, 154);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(87, 13);
			this->label56->TabIndex = 95;
			this->label56->Text = L"Diametro externo";
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(366, 147);
			this->textBox47->Margin = System::Windows::Forms::Padding(2);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(117, 20);
			this->textBox47->TabIndex = 90;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(366, 113);
			this->textBox49->Margin = System::Windows::Forms::Padding(2);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(117, 20);
			this->textBox49->TabIndex = 86;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(277, 120);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(85, 13);
			this->label62->TabIndex = 85;
			this->label62->Text = L"Diametro Interno";
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
			this->label64->Text = L"Descripci�n";
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
			// txtpreciorodamiento
			// 
			this->txtpreciorodamiento->Location = System::Drawing::Point(132, 200);
			this->txtpreciorodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtpreciorodamiento->Name = L"txtpreciorodamiento";
			this->txtpreciorodamiento->Size = System::Drawing::Size(51, 20);
			this->txtpreciorodamiento->TabIndex = 82;
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
			this->label67->Location = System::Drawing::Point(28, 205);
			this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(100, 13);
			this->label67->TabIndex = 81;
			this->label67->Text = L"Precio Unitario (S/.)";
			// 
			// txtidrodamiento
			// 
			this->txtidrodamiento->Location = System::Drawing::Point(104, 29);
			this->txtidrodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtidrodamiento->Name = L"txtidrodamiento";
			this->txtidrodamiento->Size = System::Drawing::Size(43, 20);
			this->txtidrodamiento->TabIndex = 76;
			// 
			// txtrodamientoname
			// 
			this->txtrodamientoname->Location = System::Drawing::Point(260, 30);
			this->txtrodamientoname->Margin = System::Windows::Forms::Padding(2);
			this->txtrodamientoname->Name = L"txtrodamientoname";
			this->txtrodamientoname->Size = System::Drawing::Size(223, 20);
			this->txtrodamientoname->TabIndex = 77;
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
			// btnAgregarMotorAC
			// 
			this->btnAgregarMotorAC->Controls->Add(this->txtproveedorMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->label2);
			this->btnAgregarMotorAC->Controls->Add(this->btnEditMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->btnDeteleMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->button9);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACCantidad);
			this->btnAgregarMotorAC->Controls->Add(this->label21);
			this->btnAgregarMotorAC->Controls->Add(this->dgvMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->label44);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACVolatje);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACBrand);
			this->btnAgregarMotorAC->Controls->Add(this->label69);
			this->btnAgregarMotorAC->Controls->Add(this->btnPhotoMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->pbMotorACPhoto);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACFormaFijacion);
			this->btnAgregarMotorAC->Controls->Add(this->label72);
			this->btnAgregarMotorAC->Controls->Add(this->label73);
			this->btnAgregarMotorAC->Controls->Add(this->label74);
			this->btnAgregarMotorAC->Controls->Add(this->label75);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACModel);
			this->btnAgregarMotorAC->Controls->Add(this->label76);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACInversorCompatilbidad);
			this->btnAgregarMotorAC->Controls->Add(this->label77);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACTipoProteccion);
			this->btnAgregarMotorAC->Controls->Add(this->label78);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACPotencia);
			this->btnAgregarMotorAC->Controls->Add(this->label79);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACFrame);
			this->btnAgregarMotorAC->Controls->Add(this->label80);
			this->btnAgregarMotorAC->Controls->Add(this->label81);
			this->btnAgregarMotorAC->Controls->Add(this->label82);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACPrecioUnitario);
			this->btnAgregarMotorAC->Controls->Add(this->label83);
			this->btnAgregarMotorAC->Controls->Add(this->label84);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACId);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACFases);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACName);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACDescription);
			this->btnAgregarMotorAC->Location = System::Drawing::Point(4, 22);
			this->btnAgregarMotorAC->Margin = System::Windows::Forms::Padding(2);
			this->btnAgregarMotorAC->Name = L"btnAgregarMotorAC";
			this->btnAgregarMotorAC->Padding = System::Windows::Forms::Padding(2);
			this->btnAgregarMotorAC->Size = System::Drawing::Size(669, 488);
			this->btnAgregarMotorAC->TabIndex = 4;
			this->btnAgregarMotorAC->Text = L"MotoresAC";
			this->btnAgregarMotorAC->UseVisualStyleBackColor = true;
			// 
			// txtproveedorMotorAC
			// 
			this->txtproveedorMotorAC->Location = System::Drawing::Point(466, 265);
			this->txtproveedorMotorAC->Margin = System::Windows::Forms::Padding(2);
			this->txtproveedorMotorAC->Name = L"txtproveedorMotorAC";
			this->txtproveedorMotorAC->Size = System::Drawing::Size(117, 20);
			this->txtproveedorMotorAC->TabIndex = 146;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(368, 268);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 145;
			this->label2->Text = L"Proveedor(Tienda)";
			// 
			// btnEditMotorAC
			// 
			this->btnEditMotorAC->Location = System::Drawing::Point(256, 293);
			this->btnEditMotorAC->Name = L"btnEditMotorAC";
			this->btnEditMotorAC->Size = System::Drawing::Size(75, 23);
			this->btnEditMotorAC->TabIndex = 144;
			this->btnEditMotorAC->Text = L"Editar";
			this->btnEditMotorAC->UseVisualStyleBackColor = true;
			this->btnEditMotorAC->Click += gcnew System::EventHandler(this, &StockForm::btnEditMotorAC_Click);
			// 
			// btnDeteleMotorAC
			// 
			this->btnDeteleMotorAC->Location = System::Drawing::Point(356, 293);
			this->btnDeteleMotorAC->Name = L"btnDeteleMotorAC";
			this->btnDeteleMotorAC->Size = System::Drawing::Size(75, 23);
			this->btnDeteleMotorAC->TabIndex = 143;
			this->btnDeteleMotorAC->Text = L"Eliminar";
			this->btnDeteleMotorAC->UseVisualStyleBackColor = true;
			this->btnDeteleMotorAC->Click += gcnew System::EventHandler(this, &StockForm::btnDeteleMotorAC_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(153, 293);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 142;
			this->button9->Text = L"Agregar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StockForm::button9_Click);
			// 
			// txtMotorACCantidad
			// 
			this->txtMotorACCantidad->Location = System::Drawing::Point(303, 262);
			this->txtMotorACCantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACCantidad->Name = L"txtMotorACCantidad";
			this->txtMotorACCantidad->Size = System::Drawing::Size(51, 20);
			this->txtMotorACCantidad->TabIndex = 113;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(239, 268);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 13);
			this->label21->TabIndex = 112;
			this->label21->Text = L"Cantidad";
			// 
			// dgvMotorAC
			// 
			this->dgvMotorAC->AllowUserToAddRows = false;
			this->dgvMotorAC->AllowUserToOrderColumns = true;
			this->dgvMotorAC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMotorAC->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20
			});
			this->dgvMotorAC->Location = System::Drawing::Point(74, 334);
			this->dgvMotorAC->Name = L"dgvMotorAC";
			this->dgvMotorAC->RowHeadersVisible = false;
			this->dgvMotorAC->RowHeadersWidth = 51;
			this->dgvMotorAC->Size = System::Drawing::Size(504, 119);
			this->dgvMotorAC->TabIndex = 111;
			this->dgvMotorAC->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvMotorAC_CellClick);
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 125;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 125;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 125;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->Width = 125;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Width = 125;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(421, 236);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(39, 13);
			this->label44->TabIndex = 110;
			this->label44->Text = L"Voltaje";
			// 
			// txtMotorACVolatje
			// 
			this->txtMotorACVolatje->Location = System::Drawing::Point(466, 233);
			this->txtMotorACVolatje->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACVolatje->Name = L"txtMotorACVolatje";
			this->txtMotorACVolatje->Size = System::Drawing::Size(110, 20);
			this->txtMotorACVolatje->TabIndex = 109;
			// 
			// txtMotorACBrand
			// 
			this->txtMotorACBrand->Location = System::Drawing::Point(364, 129);
			this->txtMotorACBrand->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACBrand->Name = L"txtMotorACBrand";
			this->txtMotorACBrand->Size = System::Drawing::Size(117, 20);
			this->txtMotorACBrand->TabIndex = 106;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(301, 132);
			this->label69->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(37, 13);
			this->label69->TabIndex = 105;
			this->label69->Text = L"Marca";
			// 
			// btnPhotoMotorAC
			// 
			this->btnPhotoMotorAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPhotoMotorAC->Location = System::Drawing::Point(514, 183);
			this->btnPhotoMotorAC->Name = L"btnPhotoMotorAC";
			this->btnPhotoMotorAC->Size = System::Drawing::Size(137, 23);
			this->btnPhotoMotorAC->TabIndex = 100;
			this->btnPhotoMotorAC->Text = L"Actualizar Foto";
			this->btnPhotoMotorAC->UseVisualStyleBackColor = true;
			// 
			// pbMotorACPhoto
			// 
			this->pbMotorACPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbMotorACPhoto->Location = System::Drawing::Point(514, 22);
			this->pbMotorACPhoto->Name = L"pbMotorACPhoto";
			this->pbMotorACPhoto->Size = System::Drawing::Size(137, 145);
			this->pbMotorACPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMotorACPhoto->TabIndex = 99;
			this->pbMotorACPhoto->TabStop = false;
			// 
			// txtMotorACFormaFijacion
			// 
			this->txtMotorACFormaFijacion->Location = System::Drawing::Point(284, 232);
			this->txtMotorACFormaFijacion->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACFormaFijacion->Name = L"txtMotorACFormaFijacion";
			this->txtMotorACFormaFijacion->Size = System::Drawing::Size(117, 20);
			this->txtMotorACFormaFijacion->TabIndex = 98;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(185, 240);
			this->label72->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(90, 13);
			this->label72->TabIndex = 96;
			this->label72->Text = L"Forma de Fijacion";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(229, 202);
			this->label73->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(132, 13);
			this->label73->TabIndex = 95;
			this->label73->Text = L"Compatibilidad del inversor";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(32, 293);
			this->label74->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(0, 13);
			this->label74->TabIndex = 94;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(16, 136);
			this->label75->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(84, 13);
			this->label75->TabIndex = 93;
			this->label75->Text = L"Codigo (Modelo)";
			// 
			// txtMotorACModel
			// 
			this->txtMotorACModel->Location = System::Drawing::Point(104, 128);
			this->txtMotorACModel->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACModel->Name = L"txtMotorACModel";
			this->txtMotorACModel->Size = System::Drawing::Size(136, 20);
			this->txtMotorACModel->TabIndex = 92;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(2, 198);
			this->label76->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(102, 13);
			this->label76->TabIndex = 91;
			this->label76->Text = L"Clase de Protecci�n";
			// 
			// txtMotorACInversorCompatilbidad
			// 
			this->txtMotorACInversorCompatilbidad->Location = System::Drawing::Point(364, 199);
			this->txtMotorACInversorCompatilbidad->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACInversorCompatilbidad->Name = L"txtMotorACInversorCompatilbidad";
			this->txtMotorACInversorCompatilbidad->Size = System::Drawing::Size(117, 20);
			this->txtMotorACInversorCompatilbidad->TabIndex = 90;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(14, 240);
			this->label77->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(35, 13);
			this->label77->TabIndex = 89;
			this->label77->Text = L"Fases";
			// 
			// txtMotorACTipoProteccion
			// 
			this->txtMotorACTipoProteccion->Location = System::Drawing::Point(104, 195);
			this->txtMotorACTipoProteccion->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACTipoProteccion->Name = L"txtMotorACTipoProteccion";
			this->txtMotorACTipoProteccion->Size = System::Drawing::Size(108, 20);
			this->txtMotorACTipoProteccion->TabIndex = 88;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(64, 167);
			this->label78->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(36, 13);
			this->label78->TabIndex = 87;
			this->label78->Text = L"Frame";
			// 
			// txtMotorACPotencia
			// 
			this->txtMotorACPotencia->Location = System::Drawing::Point(364, 162);
			this->txtMotorACPotencia->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACPotencia->Name = L"txtMotorACPotencia";
			this->txtMotorACPotencia->Size = System::Drawing::Size(117, 20);
			this->txtMotorACPotencia->TabIndex = 86;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(301, 162);
			this->label79->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(49, 13);
			this->label79->TabIndex = 85;
			this->label79->Text = L"Potencia";
			// 
			// txtMotorACFrame
			// 
			this->txtMotorACFrame->Location = System::Drawing::Point(104, 162);
			this->txtMotorACFrame->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACFrame->Name = L"txtMotorACFrame";
			this->txtMotorACFrame->Size = System::Drawing::Size(136, 20);
			this->txtMotorACFrame->TabIndex = 84;
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
			this->label81->Text = L"Descripci�n";
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
			// txtMotorACPrecioUnitario
			// 
			this->txtMotorACPrecioUnitario->Location = System::Drawing::Point(136, 262);
			this->txtMotorACPrecioUnitario->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACPrecioUnitario->Name = L"txtMotorACPrecioUnitario";
			this->txtMotorACPrecioUnitario->Size = System::Drawing::Size(51, 20);
			this->txtMotorACPrecioUnitario->TabIndex = 82;
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
			this->label84->Location = System::Drawing::Point(32, 267);
			this->label84->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(100, 13);
			this->label84->TabIndex = 81;
			this->label84->Text = L"Precio Unitario (S/.)";
			// 
			// txtMotorACId
			// 
			this->txtMotorACId->Location = System::Drawing::Point(104, 29);
			this->txtMotorACId->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACId->Name = L"txtMotorACId";
			this->txtMotorACId->Size = System::Drawing::Size(43, 20);
			this->txtMotorACId->TabIndex = 76;
			// 
			// txtMotorACFases
			// 
			this->txtMotorACFases->Location = System::Drawing::Point(52, 233);
			this->txtMotorACFases->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACFases->Name = L"txtMotorACFases";
			this->txtMotorACFases->Size = System::Drawing::Size(110, 20);
			this->txtMotorACFases->TabIndex = 80;
			// 
			// txtMotorACName
			// 
			this->txtMotorACName->Location = System::Drawing::Point(260, 30);
			this->txtMotorACName->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACName->Name = L"txtMotorACName";
			this->txtMotorACName->Size = System::Drawing::Size(223, 20);
			this->txtMotorACName->TabIndex = 77;
			// 
			// txtMotorACDescription
			// 
			this->txtMotorACDescription->Location = System::Drawing::Point(104, 65);
			this->txtMotorACDescription->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACDescription->Multiline = true;
			this->txtMotorACDescription->Name = L"txtMotorACDescription";
			this->txtMotorACDescription->Size = System::Drawing::Size(379, 38);
			this->txtMotorACDescription->TabIndex = 79;
			// 
			// MotoresDCPage
			// 
			this->MotoresDCPage->Controls->Add(this->txtProveedorMotorDC);
			this->MotoresDCPage->Controls->Add(this->label3);
			this->MotoresDCPage->Controls->Add(this->btnEditarMotorDC);
			this->MotoresDCPage->Controls->Add(this->btnDeleteMotorDC);
			this->MotoresDCPage->Controls->Add(this->btnAgregarMotorDC);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCStock);
			this->MotoresDCPage->Controls->Add(this->label35);
			this->MotoresDCPage->Controls->Add(this->dgvMotorDC);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCMarca);
			this->MotoresDCPage->Controls->Add(this->label86);
			this->MotoresDCPage->Controls->Add(this->UpdatePhotoMotorDC);
			this->MotoresDCPage->Controls->Add(this->pbMotorDCPhto);
			this->MotoresDCPage->Controls->Add(this->label90);
			this->MotoresDCPage->Controls->Add(this->label92);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCModel);
			this->MotoresDCPage->Controls->Add(this->label93);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCMontaje);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCVelocidad);
			this->MotoresDCPage->Controls->Add(this->label95);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCVoltaje);
			this->MotoresDCPage->Controls->Add(this->label96);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCPotencia);
			this->MotoresDCPage->Controls->Add(this->label97);
			this->MotoresDCPage->Controls->Add(this->label98);
			this->MotoresDCPage->Controls->Add(this->label99);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCPrecioUniario);
			this->MotoresDCPage->Controls->Add(this->label100);
			this->MotoresDCPage->Controls->Add(this->label101);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCId);
			this->MotoresDCPage->Controls->Add(this->txtMotorDCName);
			this->MotoresDCPage->Controls->Add(this->txtMotorDescripcion);
			this->MotoresDCPage->Location = System::Drawing::Point(4, 22);
			this->MotoresDCPage->Margin = System::Windows::Forms::Padding(2);
			this->MotoresDCPage->Name = L"MotoresDCPage";
			this->MotoresDCPage->Padding = System::Windows::Forms::Padding(2);
			this->MotoresDCPage->Size = System::Drawing::Size(669, 488);
			this->MotoresDCPage->TabIndex = 5;
			this->MotoresDCPage->Text = L"MotoresDC";
			this->MotoresDCPage->UseVisualStyleBackColor = true;
			// 
			// txtProveedorMotorDC
			// 
			this->txtProveedorMotorDC->Location = System::Drawing::Point(536, 241);
			this->txtProveedorMotorDC->Margin = System::Windows::Forms::Padding(2);
			this->txtProveedorMotorDC->Name = L"txtProveedorMotorDC";
			this->txtProveedorMotorDC->Size = System::Drawing::Size(117, 20);
			this->txtProveedorMotorDC->TabIndex = 146;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 245);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 145;
			this->label3->Text = L"Proveedor(Tienda)";
			// 
			// btnEditarMotorDC
			// 
			this->btnEditarMotorDC->Location = System::Drawing::Point(268, 275);
			this->btnEditarMotorDC->Name = L"btnEditarMotorDC";
			this->btnEditarMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnEditarMotorDC->TabIndex = 144;
			this->btnEditarMotorDC->Text = L"Editar";
			this->btnEditarMotorDC->UseVisualStyleBackColor = true;
			this->btnEditarMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnEditarMotorDC_Click);
			// 
			// btnDeleteMotorDC
			// 
			this->btnDeleteMotorDC->Location = System::Drawing::Point(368, 275);
			this->btnDeleteMotorDC->Name = L"btnDeleteMotorDC";
			this->btnDeleteMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnDeleteMotorDC->TabIndex = 143;
			this->btnDeleteMotorDC->Text = L"Eliminar";
			this->btnDeleteMotorDC->UseVisualStyleBackColor = true;
			this->btnDeleteMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnDeleteMotorDC_Click);
			// 
			// btnAgregarMotorDC
			// 
			this->btnAgregarMotorDC->Location = System::Drawing::Point(165, 275);
			this->btnAgregarMotorDC->Name = L"btnAgregarMotorDC";
			this->btnAgregarMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnAgregarMotorDC->TabIndex = 142;
			this->btnAgregarMotorDC->Text = L"Agregar";
			this->btnAgregarMotorDC->UseVisualStyleBackColor = true;
			this->btnAgregarMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnAgregarMotorDC_Click);
			// 
			// txtMotorDCStock
			// 
			this->txtMotorDCStock->Location = System::Drawing::Point(366, 240);
			this->txtMotorDCStock->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCStock->Name = L"txtMotorDCStock";
			this->txtMotorDCStock->Size = System::Drawing::Size(51, 20);
			this->txtMotorDCStock->TabIndex = 111;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(302, 245);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(49, 13);
			this->label35->TabIndex = 110;
			this->label35->Text = L"Cantidad";
			// 
			// dgvMotorDC
			// 
			this->dgvMotorDC->AllowUserToAddRows = false;
			this->dgvMotorDC->AllowUserToOrderColumns = true;
			this->dgvMotorDC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMotorDC->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25
			});
			this->dgvMotorDC->Location = System::Drawing::Point(68, 322);
			this->dgvMotorDC->Name = L"dgvMotorDC";
			this->dgvMotorDC->RowHeadersVisible = false;
			this->dgvMotorDC->RowHeadersWidth = 51;
			this->dgvMotorDC->Size = System::Drawing::Size(504, 119);
			this->dgvMotorDC->TabIndex = 109;
			this->dgvMotorDC->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvMotorDC_CellClick);
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Width = 125;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn22->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->Width = 125;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn23->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->Width = 125;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"Proveedor";
			this->dataGridViewTextBoxColumn24->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->Width = 125;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn25->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->Width = 125;
			// 
			// txtMotorDCMarca
			// 
			this->txtMotorDCMarca->Location = System::Drawing::Point(366, 131);
			this->txtMotorDCMarca->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCMarca->Name = L"txtMotorDCMarca";
			this->txtMotorDCMarca->Size = System::Drawing::Size(117, 20);
			this->txtMotorDCMarca->TabIndex = 106;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(302, 134);
			this->label86->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(37, 13);
			this->label86->TabIndex = 105;
			this->label86->Text = L"Marca";
			// 
			// UpdatePhotoMotorDC
			// 
			this->UpdatePhotoMotorDC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UpdatePhotoMotorDC->Location = System::Drawing::Point(514, 183);
			this->UpdatePhotoMotorDC->Name = L"UpdatePhotoMotorDC";
			this->UpdatePhotoMotorDC->Size = System::Drawing::Size(137, 23);
			this->UpdatePhotoMotorDC->TabIndex = 100;
			this->UpdatePhotoMotorDC->Text = L"Actualizar Foto";
			this->UpdatePhotoMotorDC->UseVisualStyleBackColor = true;
			// 
			// pbMotorDCPhto
			// 
			this->pbMotorDCPhto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbMotorDCPhto->Location = System::Drawing::Point(514, 22);
			this->pbMotorDCPhto->Name = L"pbMotorDCPhto";
			this->pbMotorDCPhto->Size = System::Drawing::Size(137, 145);
			this->pbMotorDCPhto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbMotorDCPhto->TabIndex = 99;
			this->pbMotorDCPhto->TabStop = false;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(297, 207);
			this->label90->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(45, 13);
			this->label90->TabIndex = 95;
			this->label90->Text = L"Montaje";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(18, 137);
			this->label92->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(84, 13);
			this->label92->TabIndex = 93;
			this->label92->Text = L"Codigo (Modelo)";
			// 
			// txtMotorDCModel
			// 
			this->txtMotorDCModel->Location = System::Drawing::Point(106, 130);
			this->txtMotorDCModel->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCModel->Name = L"txtMotorDCModel";
			this->txtMotorDCModel->Size = System::Drawing::Size(136, 20);
			this->txtMotorDCModel->TabIndex = 92;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(41, 204);
			this->label93->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(54, 13);
			this->label93->TabIndex = 91;
			this->label93->Text = L"Velocidad";
			// 
			// txtMotorDCMontaje
			// 
			this->txtMotorDCMontaje->Location = System::Drawing::Point(366, 197);
			this->txtMotorDCMontaje->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCMontaje->Name = L"txtMotorDCMontaje";
			this->txtMotorDCMontaje->Size = System::Drawing::Size(117, 20);
			this->txtMotorDCMontaje->TabIndex = 90;
			// 
			// txtMotorDCVelocidad
			// 
			this->txtMotorDCVelocidad->Location = System::Drawing::Point(106, 197);
			this->txtMotorDCVelocidad->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCVelocidad->Name = L"txtMotorDCVelocidad";
			this->txtMotorDCVelocidad->Size = System::Drawing::Size(108, 20);
			this->txtMotorDCVelocidad->TabIndex = 88;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(46, 170);
			this->label95->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(49, 13);
			this->label95->TabIndex = 87;
			this->label95->Text = L"Potencia";
			// 
			// txtMotorDCVoltaje
			// 
			this->txtMotorDCVoltaje->Location = System::Drawing::Point(366, 163);
			this->txtMotorDCVoltaje->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCVoltaje->Name = L"txtMotorDCVoltaje";
			this->txtMotorDCVoltaje->Size = System::Drawing::Size(117, 20);
			this->txtMotorDCVoltaje->TabIndex = 86;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(302, 163);
			this->label96->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(39, 13);
			this->label96->TabIndex = 85;
			this->label96->Text = L"Voltaje";
			// 
			// txtMotorDCPotencia
			// 
			this->txtMotorDCPotencia->Location = System::Drawing::Point(106, 163);
			this->txtMotorDCPotencia->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCPotencia->Name = L"txtMotorDCPotencia";
			this->txtMotorDCPotencia->Size = System::Drawing::Size(136, 20);
			this->txtMotorDCPotencia->TabIndex = 84;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(28, 124);
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
			this->label98->Text = L"Descripci�n";
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
			// txtMotorDCPrecioUniario
			// 
			this->txtMotorDCPrecioUniario->Location = System::Drawing::Point(154, 242);
			this->txtMotorDCPrecioUniario->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCPrecioUniario->Name = L"txtMotorDCPrecioUniario";
			this->txtMotorDCPrecioUniario->Size = System::Drawing::Size(51, 20);
			this->txtMotorDCPrecioUniario->TabIndex = 82;
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
			this->label101->Location = System::Drawing::Point(50, 247);
			this->label101->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(100, 13);
			this->label101->TabIndex = 81;
			this->label101->Text = L"Precio Unitario (S/.)";
			// 
			// txtMotorDCId
			// 
			this->txtMotorDCId->Location = System::Drawing::Point(104, 29);
			this->txtMotorDCId->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCId->Name = L"txtMotorDCId";
			this->txtMotorDCId->Size = System::Drawing::Size(43, 20);
			this->txtMotorDCId->TabIndex = 76;
			// 
			// txtMotorDCName
			// 
			this->txtMotorDCName->Location = System::Drawing::Point(260, 30);
			this->txtMotorDCName->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCName->Name = L"txtMotorDCName";
			this->txtMotorDCName->Size = System::Drawing::Size(223, 20);
			this->txtMotorDCName->TabIndex = 77;
			// 
			// txtMotorDescripcion
			// 
			this->txtMotorDescripcion->Location = System::Drawing::Point(104, 65);
			this->txtMotorDescripcion->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDescripcion->Multiline = true;
			this->txtMotorDescripcion->Name = L"txtMotorDescripcion";
			this->txtMotorDescripcion->Size = System::Drawing::Size(379, 38);
			this->txtMotorDescripcion->TabIndex = 79;
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(887, 525);
			this->Controls->Add(this->tabStock);
			this->Controls->Add(this->panel1);
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->Load += gcnew System::EventHandler(this, &StockForm::tornillo_load);
			this->panel1->ResumeLayout(false);
			this->tabStock->ResumeLayout(false);
			this->TornillosPage->ResumeLayout(false);
			this->TornillosPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTornilloPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtornillos))->EndInit();
			this->FajasPage->ResumeLayout(false);
			this->FajasPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvfajastock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFajasPhoto))->EndInit();
			this->PoleasPage->ResumeLayout(false);
			this->PoleasPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvpolea))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->RodamientosPage->ResumeLayout(false);
			this->RodamientosPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvrodamiento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbRodamientosPhoto))->EndInit();
			this->btnAgregarMotorAC->ResumeLayout(false);
			this->btnAgregarMotorAC->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMotorAC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorACPhoto))->EndInit();
			this->MotoresDCPage->ResumeLayout(false);
			this->MotoresDCPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMotorDC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMotorDCPhto))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnagregar_Click(System::Object^ sender, System::EventArgs^ e) {
		
			//(TRANSAACCION)

		
		 
	}
		   void showtornillo() {
			   List <MechanicComponent^>^ tornilloxdatos = Service::Queryalltornillos();
			   if (tornilloxdatos != nullptr) {
				   dgvtornillos->Rows->Clear();

				   for (int i = 0; i < tornilloxdatos->Count; i++) {
					   dgvtornillos->Rows->Add(gcnew array<String^> {"" + tornilloxdatos[i]->Id, tornilloxdatos[i]->Name, "" + tornilloxdatos[i]->Stock,  tornilloxdatos[i]->Proveedor, "" + tornilloxdatos[i]->UnitaryPrice });
				   }
			   }
		   }

		   void Showfaja() {
			   List <MechanicComponent^>^ fajaxdatos = Service::Queryallfajas();
			   if (fajaxdatos != nullptr) {
				   dgvfajastock->Rows->Clear();

				   for (int i = 0; i < fajaxdatos->Count; i++) {
					   dgvfajastock->Rows->Add(gcnew array<String^> {"" + fajaxdatos[i]->Id, fajaxdatos[i]->Name, "" + fajaxdatos[i]->Stock, fajaxdatos[i]->Proveedor, "" + fajaxdatos[i]->UnitaryPrice });
				   }
			   }
		   }
		   void Showpolea() {
			   List <MechanicComponent^>^ poleaxdatos = Service::Queryallfpoleas();
			   if (poleaxdatos != nullptr) {
				   dgvpolea->Rows->Clear();

				   for (int i = 0; i < poleaxdatos->Count; i++) {
					   dgvpolea->Rows->Add(gcnew array<String^> {"" + poleaxdatos[i]->Id, poleaxdatos[i]->Name, "" + poleaxdatos[i]->Stock, poleaxdatos[i]->Proveedor, "" + poleaxdatos[i]->UnitaryPrice });
				   }
			   }
		   }

		   void Showrodamiento() {
			   List <MechanicComponent^>^ rodamientoxdatos = Service::Queryallrodamientos();
			   if (rodamientoxdatos != nullptr) {
				   dgvrodamiento->Rows->Clear();

				   for (int i = 0; i < rodamientoxdatos->Count; i++) {
					   dgvrodamiento->Rows->Add(gcnew array<String^> {"" + rodamientoxdatos[i]->Id, rodamientoxdatos[i]->Name, "" + rodamientoxdatos[i]->Stock, rodamientoxdatos[i]->Proveedor, "" + rodamientoxdatos[i]->UnitaryPrice });
				   }
			   }
		   }
		   void ShowMotorAC() {
			   List <MechanicComponent^>^ MotorACxDatos = Service::QueryallMotorACStock();
			   if (MotorACxDatos != nullptr) {
				   dgvMotorAC->Rows->Clear();

				   for (int i = 0; i < MotorACxDatos->Count; i++) {
					   dgvMotorAC->Rows->Add(gcnew array<String^> {"" + MotorACxDatos[i]->Id, MotorACxDatos[i]->Name, "" + MotorACxDatos[i]->Stock, MotorACxDatos[i]->Proveedor, "" + MotorACxDatos[i]->UnitaryPrice });
				   }
			   }
		   }
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {


	
//(TRANSACCION)
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	//NO ES ELIMINAR (TRANSACCION)
}
private: System::Void tornillo_load(System::Object^ sender, System::EventArgs^ e) {
	showtornillo();
	Showfaja();
	Showpolea();
	Showrodamiento();
}
private: System::Void dgvtornillos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int tornilloid = Int32::Parse(dgvtornillos->Rows[dgvtornillos->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	//int fajaid = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	MechanicComponent^ tornillo = Service::Queryalltornillosid(tornilloid);
	//MechanicComponent^ faja = Service::Queryallfajasid(fajaid);
	if (tornillo != nullptr) {
		txtidtornillo->Text = Convert::ToString(tornillo->Id); // "" + robot->Id;
		txttornilloname->Text = tornillo->Name;
		txtTornillocantidad->Text = Convert::ToString(tornillo->Stock);
		txtTornilloPrecioUnitario->Text = Convert::ToString(tornillo->UnitaryPrice);
		txtrodamientoproveedor->Text = tornillo->Proveedor;
		if (tornillo->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(tornillo->Photo);
			pbTornilloPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbTornilloPhoto->Image = nullptr;
			pbTornilloPhoto->Invalidate();
		}


	}
	
}


private: System::Void btnaddtornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//BOTON PARA AGREGAR TORNILLOS
	int idtornillo = Convert::ToInt32(txtidtornillo->Text);
	 
	String^ nametornillo = txttornilloname->Text;
	//String^ descripciotornillon = txtdescriptornillo->Text;
	String^ proveedortornillo = txtTornilloprovee->Text; 

	double preciounittornillo = Convert::ToInt32(txtTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtTornillocantidad->Text);
	TornilloCliente^ tornillo = gcnew TornilloCliente();
	tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;
	//tornillo->Description = descripcion;
	tornillo->Proveedor = proveedortornillo;

	tornillo->UnitaryPrice = preciounittornillo;
	tornillo->Stock = cantidadtornillo;
	if (pbTornilloPhoto != nullptr && pbTornilloPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbTornilloPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		tornillo->Photo = ms->ToArray();
	}
	//FAJAS DATOS PARA EL GUI Y CRUD
	Service::Addtornillos(tornillo);
	showtornillo();
}
private: System::Void btnedittornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//EDITAR TORNILLO
	int idtornillo = Convert::ToInt32(txtidtornillo->Text);

	String^ nametornillo = txttornilloname->Text;
	//String^ descripcion = txtTornilloDescription->Text;
	String^ proveedortornillo = txtTornilloprovee->Text;
	//String^ marca = txtTornilloMarca->Text;
	//int codigo = Convert::ToInt32(txtTornilloModel->Text);
	//String^ tipo  = txtTornilloTipo->Text;
	//int longitud = Convert::ToInt32(txtTornilloLongitud->Text);
	//String^ punta = txtTornilloPunta->Text;
	//String^ material = txtTornilloMaterial->Text;
	//String^ tiporosca = txtTornilloTipoRosca->Text;
	//int diametro = Convert::ToInt32(txtTornilloDiametroRosca->Text);
	double preciounittornillo = Convert::ToInt32(txtTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtTornillocantidad->Text);
	MechanicComponent^ tornillo = gcnew MechanicComponent();
	tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;
	//tornillo->Description = descripcion;
	tornillo->Proveedor = proveedortornillo;
	//tornillo->Model = codigo;
	//tornillo->Tipo = tipo;
	//tornillo->Longitud = longitud;
	//tornillo->Punta = punta;
	//tornillo->Material = material;
	//tornillo->Rosca = tiporosca;
	//tornillo->DiametroRosca = diametro;
	tornillo->UnitaryPrice = preciounittornillo; 
	tornillo->Stock = cantidadtornillo; 
	
	if (pbTornilloPhoto != nullptr && pbTornilloPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbTornilloPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		tornillo->Photo = ms->ToArray();
	}
	Service::Updatetornillos(tornillo);

	showtornillo();
	
}
private: System::Void btndeletetornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR TORNILLOS
	int idtornillo = Convert::ToInt32(txtidtornillo->Text); 
	//int idfaja = Convert::ToInt32(txtidfajastock->Text);
	Service::Deletetornillos(idtornillo); 
	//Service::Deletefajas(idfaja);
	showtornillo(); 
	//Showfaja();
}
private: System::Void btnaddfaja_Click(System::Object^ sender, System::EventArgs^ e) {
	int idfaja = Convert::ToInt32(txtidfajastock->Text);
	String^ namefaja = txtnamefajastock->Text;
	String^ proveedorfaja = txtproveedorfaja->Text;
	double preciounitfaja = Convert::ToInt32(txtpreciofajastock->Text);
	int cantidadfaja = Convert::ToInt32(txtcantidadfaja->Text);
	MechanicComponent^ faja = gcnew MechanicComponent();
	faja->Id = idfaja;
	faja->Name = namefaja;
	faja->Proveedor = proveedorfaja;
	faja->UnitaryPrice = preciounitfaja;
	faja->Stock = cantidadfaja;
	 

	//	Service::Addtornillos(tornillo);
	Service::Addfajas(faja);
	//	showtornillo();
	Showfaja();
}
private: System::Void btneditfaja_Click(System::Object^ sender, System::EventArgs^ e) {
	int idfaja = Convert::ToInt32(txtidfajastock->Text);
	String^ namefaja = txtnamefajastock->Text;
	String^ proveedorfaja = txtproveedorfaja->Text;
	double preciounitfaja = Convert::ToInt32(txtpreciofajastock->Text);
	int cantidadfaja = Convert::ToInt32(txtcantidadfaja->Text);
	MechanicComponent^ faja = gcnew MechanicComponent();
	faja->Id = idfaja;
	faja->Name = namefaja;
	faja->Proveedor = proveedorfaja;
	faja->UnitaryPrice = preciounitfaja;
	faja->Stock = cantidadfaja;
	Service::Updatefajas(faja);
	Showfaja();
}
private: System::Void btndeletefaja_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR FAJA
	//int idtornillo = Convert::ToInt32(txtidtornillo->Text);
	int idfaja = Convert::ToInt32(txtidfajastock->Text);
	//Service::Deletetornillos(idtornillo);
	Service::Deletefajas(idfaja);
	//showtornillo();
	Showfaja();
}
private: System::Void dgvfajastock_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//dgvFAJAS
	int FAJAID = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	//int fajaid = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	MechanicComponent^ faja = Service::Queryallfajasid(FAJAID);
	//MechanicComponent^ faja = Service::Queryallfajasid(fajaid);
	if (faja != nullptr) {
		txtidfajastock->Text = Convert::ToString(faja->Id); // "" + robot->Id;
		txtnamefajastock->Text = faja->Name;
		txtcantidadfaja->Text = Convert::ToString(faja->Stock);
		txtpreciofajastock->Text = Convert::ToString(faja->UnitaryPrice);
		txtproveedorfaja->Text = faja->Proveedor;

	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	//AGREGAR POLEA
	int idpolea = Convert::ToInt32(txtidpolea->Text);
	String^ namepolea = txtpoleaname->Text;
	String^ proveedorpolea = txtproveedorpolea->Text;
	double preciounitpolea = Convert::ToInt32(txtpreciopolea->Text);
	int cantidadpolea = Convert::ToInt32(txtpoleacantidad->Text);
	MechanicComponent^ polea = gcnew MechanicComponent();
	polea->Id = idpolea;
	polea->Name = namepolea;
	polea->Proveedor = proveedorpolea;
	polea->UnitaryPrice = preciounitpolea;
	polea->Stock = cantidadpolea;


	//	Service::Addtornillos(tornillo);
	Service::Addpoleas(polea);
	Showpolea();

}
private: System::Void editpoleastock_Click(System::Object^ sender, System::EventArgs^ e) {
	int idpolea = Convert::ToInt32(txtidpolea->Text);
	String^ namepolea = txtpoleaname->Text;
	String^ proveedorpolea = txtproveedorpolea->Text;
	double preciounitpolea = Convert::ToInt32(txtpreciopolea->Text);
	int cantidadpolea = Convert::ToInt32(txtpoleacantidad->Text);
	MechanicComponent^ polea = gcnew MechanicComponent();
	polea->Id = idpolea;
	polea->Name = namepolea;
	polea->Proveedor = proveedorpolea;
	polea->UnitaryPrice = preciounitpolea;
	polea->Stock = cantidadpolea;


	//	Service::Addtornillos(tornillo);
	Service::Updatepoleas(polea);
	Showpolea();
}
private: System::Void btndeletepoleastock_Click(System::Object^ sender, System::EventArgs^ e) {
	int idpolea = Convert::ToInt32(txtidpolea->Text);
	//Service::Deletetornillos(idtornillo);
	Service::Deletepoleas(idpolea);
	//showtornillo();
	Showpolea();
}
private: System::Void dgvpolea_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int POLEAID = Int32::Parse(dgvpolea->Rows[dgvpolea->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	//int fajaid = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	MechanicComponent^ polea = Service::Queryallfajasid(POLEAID);
	//MechanicComponent^ faja = Service::Queryallfajasid(fajaid);
	if (polea != nullptr) {
		txtidpolea->Text = Convert::ToString(polea->Id); // "" + robot->Id;
		txtpoleaname->Text = polea->Name;
		txtpoleacantidad->Text = Convert::ToString(polea->Stock);
		txtpreciopolea->Text = Convert::ToString(polea->UnitaryPrice);
		txtproveedorpolea->Text = polea->Proveedor;


	}

}
private: System::Void btnaddrodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	//AGREGAR RODAMIENTO 
	int idrodamiento = Convert::ToInt32(txtidrodamiento->Text);
	String^ namerodamiento = txtrodamientoname->Text;
	String^ proveedorrodamiento = txtrodamientoproveedor->Text;
	double preciounitrodamiento = Convert::ToInt32(txtpreciorodamiento->Text);
	int cantidadrodamiento = Convert::ToInt32(txtcantidadrodamiento->Text);
	MechanicComponent^ rodamiento = gcnew MechanicComponent();
	rodamiento->Id = idrodamiento;
	rodamiento->Name = namerodamiento;
	rodamiento->Proveedor = proveedorrodamiento;
	rodamiento->UnitaryPrice = preciounitrodamiento;
	rodamiento->Stock = cantidadrodamiento;


	//	Service::Addtornillos(tornillo);
	Service::Addrodamientos(rodamiento);
	Showrodamiento();
}
private: System::Void btneditrodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	int idrodamiento = Convert::ToInt32(txtidrodamiento->Text);
	String^ namerodamiento = txtrodamientoname->Text;
	String^ proveedorrodamiento = txtrodamientoproveedor->Text;
	double preciounitrodamiento = Convert::ToInt32(txtpreciorodamiento->Text);
	int cantidadrodamiento = Convert::ToInt32(txtcantidadrodamiento->Text);
	MechanicComponent^ rodamiento = gcnew MechanicComponent();
	rodamiento->Id = idrodamiento;
	rodamiento->Name = namerodamiento;
	rodamiento->Proveedor = proveedorrodamiento;
	rodamiento->UnitaryPrice = preciounitrodamiento;
	rodamiento->Stock = cantidadrodamiento;


	//	Service::Addtornillos(tornillo);
	Service::Updaterodamientos(rodamiento);
	Showrodamiento();

}
private: System::Void btndeleterodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	int idroda = Convert::ToInt32(txtidrodamiento->Text);
	//Service::Deletetornillos(idtornillo);
	Service::Deleterodamientos(idroda);
	//showtornillo();
	Showrodamiento();

}
private: System::Void dgvrodamiento_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int idroda = Int32::Parse(dgvrodamiento->Rows[dgvrodamiento->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	//int fajaid = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	MechanicComponent^ rodamiento = Service::Queryallrodamientosid(idroda);
	//MechanicComponent^ faja = Service::Queryallfajasid(fajaid);
	if (rodamiento != nullptr) {
		txtidrodamiento->Text = Convert::ToString(rodamiento->Id); // "" + robot->Id;
		txtrodamientoname->Text = rodamiento->Name;
		txtcantidadrodamiento->Text = Convert::ToString(rodamiento->Stock);
		txtpreciorodamiento->Text = Convert::ToString(rodamiento->UnitaryPrice);
		txtrodamientoproveedor->Text = rodamiento->Proveedor;


	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//AGREGAR MOTOR AC
	int idMotorAC = Convert::ToInt32(txtMotorACId->Text);
	String^ NameMotorAC = txtMotorACName->Text;
	String^ ProveedorMotorAC = txtproveedorMotorAC->Text;
	double PrecioUnitarioMotorAC = Convert::ToInt32(txtMotorACPrecioUnitario->Text);
	int CantidadMotorAC = Convert::ToInt32(txtMotorACCantidad->Text);
	MotoresACCliente^ MotorAC = gcnew MotoresACCliente();

	MotorAC->Id = idMotorAC;
	MotorAC->Name = NameMotorAC;
	MotorAC->Proveedor = ProveedorMotorAC;
	MotorAC->UnitaryPrice = PrecioUnitarioMotorAC;
	MotorAC->Stock = CantidadMotorAC;


	//	Service::Addtornillos(tornillo);
	Service::Addrodamientos(MotorAC);
	Showrodamiento();
}
private: System::Void btnEditMotorAC_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void btnDeteleMotorAC_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMotorAC = Convert::ToInt32(txtMotorACId->Text);
	//Service::Deletetornillos(idtornillo);
	Service::DeleteMotorACStock(IdMotorAC);
	//showtornillo();
	ShowMotorAC();
}
private: System::Void btnAgregarMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEditarMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDeleteMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvMotorAC_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dgvMotorDC_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEmpUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbTornilloPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
};
}
