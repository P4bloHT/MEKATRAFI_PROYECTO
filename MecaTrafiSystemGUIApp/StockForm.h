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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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


	private: System::Windows::Forms::Button^ btncancelar;

	private: System::Windows::Forms::TabControl^ tabStock;



	private: System::Windows::Forms::TabPage^ TornillosPage;
	private: System::Windows::Forms::TextBox^ txtTornillomarca;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtTornillocantidad;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnEmpUpdatePhoto;
	private: System::Windows::Forms::PictureBox^ pbTornilloPhoto;


	private: System::Windows::Forms::DataGridView^ dgvtornillos;







	private: System::Windows::Forms::Label^ label10;












	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTornilloPrecioUnitario;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txttornilloname;

	private: System::Windows::Forms::TabPage^ FajasPage;
	private: System::Windows::Forms::TextBox^ txtcantidadFAJA;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dgvfajastock;
	private: System::Windows::Forms::TextBox^ txtmarcaFAJA;







	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txttipoFAJA;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pbFajasPhoto;


	private: System::Windows::Forms::Label^ label23;


	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ txtdiametroexterFAJA;
private: System::Windows::Forms::TextBox^ txtdiametrointerFAJA;




	private: System::Windows::Forms::Label^ label28;


	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ txtprecioFAJA;


	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ txtidFAJAS;
private: System::Windows::Forms::TextBox^ txtnameFAJA;
private: System::Windows::Forms::TextBox^ txtdescripFAJA;






	private: System::Windows::Forms::TabPage^ PoleasPage;
private: System::Windows::Forms::TextBox^ txtpoleacantidad;

	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridView^ dgvpolea;






	private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ txtprecioPOLEA;


	private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ txtmaterialPOLEA;

private: System::Windows::Forms::TextBox^ txtmarcaPOLEA;

	private: System::Windows::Forms::Label^ label26;






	private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ txtdiametroexterPOLEA;


	private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ txttipoPOLEA;
private: System::Windows::Forms::TextBox^ txtejePOLEA;





	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::PictureBox^ pbPOLEA;

	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ txtidpolea;
private: System::Windows::Forms::TextBox^ txtpoleaname;
private: System::Windows::Forms::TextBox^ txtdescripPOLEA;



	private: System::Windows::Forms::TabPage^ RodamientosPage;
private: System::Windows::Forms::TextBox^ txtcantidadrodamiento;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::DataGridView^ dgvrodamiento;






private: System::Windows::Forms::TextBox^ txtmarcaRODA;

	private: System::Windows::Forms::Label^ label52;



	private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::PictureBox^ pbRodamientosPhoto;

	private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ txtdexternRODA;




private: System::Windows::Forms::TextBox^ txtdinterRODA;



	private: System::Windows::Forms::Label^ label62;

	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::TextBox^ txtpreciorodamiento;

	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::TextBox^ txtidrodamiento;
private: System::Windows::Forms::TextBox^ txtrodamientoname;
private: System::Windows::Forms::TextBox^ txtdescripRODAMIE;



private: System::Windows::Forms::TabPage^ btnAgregarMotorAC;

private: System::Windows::Forms::TextBox^ txtMotorACCantidad;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::DataGridView^ dgvMotorAC;









private: System::Windows::Forms::TextBox^ txtMotorACBrand;

	private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Button^ btnPhotoMotorAC;




private: System::Windows::Forms::PictureBox^ pbMotorACPhoto;





	private: System::Windows::Forms::Label^ label74;




	private: System::Windows::Forms::Label^ label76;


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






private: System::Windows::Forms::TextBox^ txtMotorDCMarca;

	private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Button^ UpdatePhotoMotorDC;




private: System::Windows::Forms::PictureBox^ pbMotorDCPhto;

	private: System::Windows::Forms::Label^ label90;



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
private: System::Windows::Forms::Button^ btneditarPOLEA;

private: System::Windows::Forms::Button^ btndeletepoleastock;
private: System::Windows::Forms::Button^ btnaddPOLEA;



private: System::Windows::Forms::Button^ btneditrodamiento;
private: System::Windows::Forms::Button^ btndeleterodamiento;


private: System::Windows::Forms::Button^ btnaddrodamiento;
private: System::Windows::Forms::TextBox^ txttornillorosca;

private: System::Windows::Forms::Button^ btnEditMotorAC;
private: System::Windows::Forms::Button^ btnDeteleMotorAC;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ txttornillotipo;



private: System::Windows::Forms::Label^ label4;


private: System::Windows::Forms::TextBox^ txtdescriptornillo;
private: System::Windows::Forms::Button^ btnaddMAC;



private: System::Windows::Forms::Button^ btnEditarMotorDC;
private: System::Windows::Forms::Button^ btnDeleteMotorDC;


private: System::Windows::Forms::Button^ btnAgregarMotorDC;


//private: System::Windows::Forms::Label^ label2;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ txttornillomaterial;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ txttornilllolongitud;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Material;
private: System::Windows::Forms::TextBox^ txtidtornillo;
private: System::Windows::Forms::Button^ btnlimpiartext;
private: System::Windows::Forms::TextBox^ txtaltogomaFAJA;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
private: System::Windows::Forms::Button^ btnlimpiarPOLEA;

private: System::Windows::Forms::Button^ btnlimpiarRODA;
private: System::Windows::Forms::TextBox^ txtanchoRODA;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ txttipoRODA;
private: System::Windows::Forms::Label^ label22;






private: System::Windows::Forms::Button^ btnlimpiarMAC;
private: System::Windows::Forms::Button^ btnlimpiarMOTORDC;







private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ti;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ MARCA_RODA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CANTIDAD_RODA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PREIO_UNIT_RODA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TIPO_RODA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ potencia;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ marc;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ volt;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;




































	   //private: System::Windows::Forms::Label^ label3;
























































































































































































































































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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->tabStock = (gcnew System::Windows::Forms::TabControl());
			this->TornillosPage = (gcnew System::Windows::Forms::TabPage());
			this->btnlimpiartext = (gcnew System::Windows::Forms::Button());
			this->txtidtornillo = (gcnew System::Windows::Forms::TextBox());
			this->txttornillomaterial = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txttornilllolongitud = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txttornillorosca = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txttornillotipo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtdescriptornillo = (gcnew System::Windows::Forms::TextBox());
			this->btnedittornillo = (gcnew System::Windows::Forms::Button());
			this->btndeletetornillo = (gcnew System::Windows::Forms::Button());
			this->btnaddtornillo = (gcnew System::Windows::Forms::Button());
			this->txtTornillomarca = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTornillocantidad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnEmpUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->pbTornilloPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->dgvtornillos = (gcnew System::Windows::Forms::DataGridView());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Material = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTornilloPrecioUnitario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txttornilloname = (gcnew System::Windows::Forms::TextBox());
			this->FajasPage = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtaltogomaFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btneditfaja = (gcnew System::Windows::Forms::Button());
			this->btndeletefaja = (gcnew System::Windows::Forms::Button());
			this->btnaddfaja = (gcnew System::Windows::Forms::Button());
			this->txtcantidadFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgvfajastock = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtmarcaFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txttipoFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pbFajasPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtdiametroexterFAJA = (gcnew System::Windows::Forms::TextBox());
			this->txtdiametrointerFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtprecioFAJA = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtidFAJAS = (gcnew System::Windows::Forms::TextBox());
			this->txtnameFAJA = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripFAJA = (gcnew System::Windows::Forms::TextBox());
			this->PoleasPage = (gcnew System::Windows::Forms::TabPage());
			this->btnlimpiarPOLEA = (gcnew System::Windows::Forms::Button());
			this->btneditarPOLEA = (gcnew System::Windows::Forms::Button());
			this->btndeletepoleastock = (gcnew System::Windows::Forms::Button());
			this->btnaddPOLEA = (gcnew System::Windows::Forms::Button());
			this->txtpoleacantidad = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dgvpolea = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->txtprecioPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->txtmaterialPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->txtmarcaPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->txtdiametroexterPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txttipoPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->txtejePOLEA = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pbPOLEA = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->txtidpolea = (gcnew System::Windows::Forms::TextBox());
			this->txtpoleaname = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripPOLEA = (gcnew System::Windows::Forms::TextBox());
			this->RodamientosPage = (gcnew System::Windows::Forms::TabPage());
			this->txttipoRODA = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->btnlimpiarRODA = (gcnew System::Windows::Forms::Button());
			this->txtanchoRODA = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btneditrodamiento = (gcnew System::Windows::Forms::Button());
			this->btndeleterodamiento = (gcnew System::Windows::Forms::Button());
			this->btnaddrodamiento = (gcnew System::Windows::Forms::Button());
			this->txtcantidadrodamiento = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dgvrodamiento = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOMBRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MARCA_RODA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CANTIDAD_RODA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PREIO_UNIT_RODA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TIPO_RODA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtmarcaRODA = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pbRodamientosPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->txtdexternRODA = (gcnew System::Windows::Forms::TextBox());
			this->txtdinterRODA = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->txtpreciorodamiento = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->txtidrodamiento = (gcnew System::Windows::Forms::TextBox());
			this->txtrodamientoname = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripRODAMIE = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarMotorAC = (gcnew System::Windows::Forms::TabPage());
			this->btnlimpiarMAC = (gcnew System::Windows::Forms::Button());
			this->btnEditMotorAC = (gcnew System::Windows::Forms::Button());
			this->btnDeteleMotorAC = (gcnew System::Windows::Forms::Button());
			this->btnaddMAC = (gcnew System::Windows::Forms::Button());
			this->txtMotorACCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dgvMotorAC = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->potencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMotorACBrand = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->btnPhotoMotorAC = (gcnew System::Windows::Forms::Button());
			this->pbMotorACPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
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
			this->btnlimpiarMOTORDC = (gcnew System::Windows::Forms::Button());
			this->btnEditarMotorDC = (gcnew System::Windows::Forms::Button());
			this->btnDeleteMotorDC = (gcnew System::Windows::Forms::Button());
			this->btnAgregarMotorDC = (gcnew System::Windows::Forms::Button());
			this->txtMotorDCStock = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->dgvMotorDC = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->marc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->volt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtMotorDCMarca = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->UpdatePhotoMotorDC = (gcnew System::Windows::Forms::Button());
			this->pbMotorDCPhto = (gcnew System::Windows::Forms::PictureBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPOLEA))->BeginInit();
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
			this->panel1->Controls->Add(this->btncancelar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(148, 525);
			this->panel1->TabIndex = 50;
			// 
			// btncancelar
			// 
			this->btncancelar->BackColor = System::Drawing::Color::DarkGray;
			this->btncancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancelar->ForeColor = System::Drawing::SystemColors::Control;
			this->btncancelar->Location = System::Drawing::Point(0, 0);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(148, 48);
			this->btncancelar->TabIndex = 19;
			this->btncancelar->Text = L"Cancelar ";
			this->btncancelar->UseVisualStyleBackColor = false;
			this->btncancelar->Click += gcnew System::EventHandler(this, &StockForm::btncancelar_Click);
			// 
			// tabStock
			// 
			this->tabStock->Controls->Add(this->TornillosPage);
			this->tabStock->Controls->Add(this->FajasPage);
			this->tabStock->Controls->Add(this->PoleasPage);
			this->tabStock->Controls->Add(this->RodamientosPage);
			this->tabStock->Controls->Add(this->btnAgregarMotorAC);
			this->tabStock->Controls->Add(this->MotoresDCPage);
			this->tabStock->Location = System::Drawing::Point(175, 11);
			this->tabStock->Margin = System::Windows::Forms::Padding(2);
			this->tabStock->Name = L"tabStock";
			this->tabStock->SelectedIndex = 0;
			this->tabStock->Size = System::Drawing::Size(675, 514);
			this->tabStock->TabIndex = 51;
			// 
			// TornillosPage
			// 
			this->TornillosPage->BackColor = System::Drawing::Color::LightGray;
			this->TornillosPage->Controls->Add(this->btnlimpiartext);
			this->TornillosPage->Controls->Add(this->txtidtornillo);
			this->TornillosPage->Controls->Add(this->txttornillomaterial);
			this->TornillosPage->Controls->Add(this->label12);
			this->TornillosPage->Controls->Add(this->txttornilllolongitud);
			this->TornillosPage->Controls->Add(this->label11);
			this->TornillosPage->Controls->Add(this->label5);
			this->TornillosPage->Controls->Add(this->txttornillorosca);
			this->TornillosPage->Controls->Add(this->label9);
			this->TornillosPage->Controls->Add(this->txttornillotipo);
			this->TornillosPage->Controls->Add(this->label4);
			this->TornillosPage->Controls->Add(this->txtdescriptornillo);
			this->TornillosPage->Controls->Add(this->btnedittornillo);
			this->TornillosPage->Controls->Add(this->btndeletetornillo);
			this->TornillosPage->Controls->Add(this->btnaddtornillo);
			this->TornillosPage->Controls->Add(this->txtTornillomarca);
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
			this->TornillosPage->Controls->Add(this->txttornilloname);
			this->TornillosPage->Location = System::Drawing::Point(4, 22);
			this->TornillosPage->Margin = System::Windows::Forms::Padding(2);
			this->TornillosPage->Name = L"TornillosPage";
			this->TornillosPage->Padding = System::Windows::Forms::Padding(2);
			this->TornillosPage->Size = System::Drawing::Size(669, 488);
			this->TornillosPage->TabIndex = 0;
			this->TornillosPage->Text = L"Tornillos";
			// 
			// btnlimpiartext
			// 
			this->btnlimpiartext->Location = System::Drawing::Point(406, 176);
			this->btnlimpiartext->Name = L"btnlimpiartext";
			this->btnlimpiartext->Size = System::Drawing::Size(75, 23);
			this->btnlimpiartext->TabIndex = 89;
			this->btnlimpiartext->Text = L"Limpiar";
			this->btnlimpiartext->UseVisualStyleBackColor = true;
			this->btnlimpiartext->Click += gcnew System::EventHandler(this, &StockForm::btnlimpiartext_Click);
			// 
			// txtidtornillo
			// 
			this->txtidtornillo->Enabled = false;
			this->txtidtornillo->Location = System::Drawing::Point(113, 14);
			this->txtidtornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtidtornillo->Name = L"txtidtornillo";
			this->txtidtornillo->Size = System::Drawing::Size(51, 20);
			this->txtidtornillo->TabIndex = 88;
			// 
			// txttornillomaterial
			// 
			this->txttornillomaterial->Location = System::Drawing::Point(288, 130);
			this->txttornillomaterial->Margin = System::Windows::Forms::Padding(2);
			this->txttornillomaterial->Name = L"txttornillomaterial";
			this->txttornillomaterial->Size = System::Drawing::Size(128, 20);
			this->txttornillomaterial->TabIndex = 87;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(51, 136);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 86;
			this->label12->Text = L"Longitud";
			// 
			// txttornilllolongitud
			// 
			this->txttornilllolongitud->Location = System::Drawing::Point(113, 133);
			this->txttornilllolongitud->Margin = System::Windows::Forms::Padding(2);
			this->txttornilllolongitud->Name = L"txttornilllolongitud";
			this->txttornilllolongitud->Size = System::Drawing::Size(68, 20);
			this->txttornilllolongitud->TabIndex = 85;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(206, 133);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 84;
			this->label11->Text = L"Material";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(206, 97);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 83;
			this->label5->Text = L"Descripcion";
			// 
			// txttornillorosca
			// 
			this->txttornillorosca->Location = System::Drawing::Point(113, 105);
			this->txttornillorosca->Margin = System::Windows::Forms::Padding(2);
			this->txttornillorosca->Name = L"txttornillorosca";
			this->txttornillorosca->Size = System::Drawing::Size(39, 20);
			this->txttornillorosca->TabIndex = 82;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(42, 108);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 81;
			this->label9->Text = L"Rosca";
			// 
			// txttornillotipo
			// 
			this->txttornillotipo->Location = System::Drawing::Point(288, 70);
			this->txttornillotipo->Margin = System::Windows::Forms::Padding(2);
			this->txttornillotipo->Name = L"txttornillotipo";
			this->txttornillotipo->Size = System::Drawing::Size(68, 20);
			this->txttornillotipo->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(219, 73);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 77;
			this->label4->Text = L"Tipo ";
			// 
			// txtdescriptornillo
			// 
			this->txtdescriptornillo->Location = System::Drawing::Point(288, 94);
			this->txtdescriptornillo->Margin = System::Windows::Forms::Padding(2);
			this->txtdescriptornillo->Multiline = true;
			this->txtdescriptornillo->Name = L"txtdescriptornillo";
			this->txtdescriptornillo->Size = System::Drawing::Size(218, 19);
			this->txtdescriptornillo->TabIndex = 74;
			// 
			// btnedittornillo
			// 
			this->btnedittornillo->Location = System::Drawing::Point(194, 176);
			this->btnedittornillo->Name = L"btnedittornillo";
			this->btnedittornillo->Size = System::Drawing::Size(75, 23);
			this->btnedittornillo->TabIndex = 72;
			this->btnedittornillo->Text = L"Editar";
			this->btnedittornillo->UseVisualStyleBackColor = true;
			this->btnedittornillo->Click += gcnew System::EventHandler(this, &StockForm::btnedittornillo_Click);
			// 
			// btndeletetornillo
			// 
			this->btndeletetornillo->Location = System::Drawing::Point(301, 176);
			this->btndeletetornillo->Name = L"btndeletetornillo";
			this->btndeletetornillo->Size = System::Drawing::Size(75, 23);
			this->btndeletetornillo->TabIndex = 71;
			this->btndeletetornillo->Text = L"Eliminar";
			this->btndeletetornillo->UseVisualStyleBackColor = true;
			this->btndeletetornillo->Click += gcnew System::EventHandler(this, &StockForm::btndeletetornillo_Click);
			// 
			// btnaddtornillo
			// 
			this->btnaddtornillo->Location = System::Drawing::Point(89, 176);
			this->btnaddtornillo->Name = L"btnaddtornillo";
			this->btnaddtornillo->Size = System::Drawing::Size(75, 23);
			this->btnaddtornillo->TabIndex = 70;
			this->btnaddtornillo->Text = L"Agregar";
			this->btnaddtornillo->UseVisualStyleBackColor = true;
			this->btnaddtornillo->Click += gcnew System::EventHandler(this, &StockForm::btnaddtornillo_Click);
			// 
			// txtTornillomarca
			// 
			this->txtTornillomarca->Location = System::Drawing::Point(288, 39);
			this->txtTornillomarca->Margin = System::Windows::Forms::Padding(2);
			this->txtTornillomarca->Name = L"txtTornillomarca";
			this->txtTornillomarca->Size = System::Drawing::Size(117, 20);
			this->txtTornillomarca->TabIndex = 69;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(213, 48);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 68;
			this->label6->Text = L"Marca";
			// 
			// txtTornillocantidad
			// 
			this->txtTornillocantidad->Location = System::Drawing::Point(113, 41);
			this->txtTornillocantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtTornillocantidad->Name = L"txtTornillocantidad";
			this->txtTornillocantidad->Size = System::Drawing::Size(51, 20);
			this->txtTornillocantidad->TabIndex = 67;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(31, 44);
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
			this->dgvtornillos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Nombres,
					this->Carrera, this->Cantidad, this->Telefono, this->Marca, this->Material
			});
			this->dgvtornillos->Location = System::Drawing::Point(45, 208);
			this->dgvtornillos->Name = L"dgvtornillos";
			this->dgvtornillos->RowHeadersVisible = false;
			this->dgvtornillos->RowHeadersWidth = 51;
			this->dgvtornillos->Size = System::Drawing::Size(578, 119);
			this->dgvtornillos->TabIndex = 61;
			this->dgvtornillos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvtornillos_CellClick);
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"ID";
			this->Nombres->MinimumWidth = 6;
			this->Nombres->Name = L"Nombres";
			this->Nombres->Width = 50;
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
			this->Cantidad->Width = 80;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Precio Unitario";
			this->Telefono->MinimumWidth = 6;
			this->Telefono->Name = L"Telefono";
			this->Telefono->Width = 80;
			// 
			// Marca
			// 
			this->Marca->HeaderText = L"Marca";
			this->Marca->MinimumWidth = 6;
			this->Marca->Name = L"Marca";
			this->Marca->Width = 140;
			// 
			// Material
			// 
			this->Material->HeaderText = L"Material";
			this->Material->Name = L"Material";
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
			this->label8->Location = System::Drawing::Point(66, 18);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Id";
			// 
			// txtTornilloPrecioUnitario
			// 
			this->txtTornilloPrecioUnitario->Location = System::Drawing::Point(113, 70);
			this->txtTornilloPrecioUnitario->Margin = System::Windows::Forms::Padding(2);
			this->txtTornilloPrecioUnitario->Name = L"txtTornilloPrecioUnitario";
			this->txtTornilloPrecioUnitario->Size = System::Drawing::Size(51, 20);
			this->txtTornilloPrecioUnitario->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(206, 17);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 73);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Precio Unitario (S/.)";
			this->label1->Click += gcnew System::EventHandler(this, &StockForm::label1_Click);
			// 
			// txttornilloname
			// 
			this->txttornilloname->Location = System::Drawing::Point(283, 14);
			this->txttornilloname->Margin = System::Windows::Forms::Padding(2);
			this->txttornilloname->Name = L"txttornilloname";
			this->txttornilloname->Size = System::Drawing::Size(167, 20);
			this->txttornilloname->TabIndex = 39;
			// 
			// FajasPage
			// 
			this->FajasPage->BackColor = System::Drawing::Color::LightGray;
			this->FajasPage->Controls->Add(this->button4);
			this->FajasPage->Controls->Add(this->txtaltogomaFAJA);
			this->FajasPage->Controls->Add(this->label14);
			this->FajasPage->Controls->Add(this->btneditfaja);
			this->FajasPage->Controls->Add(this->btndeletefaja);
			this->FajasPage->Controls->Add(this->btnaddfaja);
			this->FajasPage->Controls->Add(this->txtcantidadFAJA);
			this->FajasPage->Controls->Add(this->label15);
			this->FajasPage->Controls->Add(this->dgvfajastock);
			this->FajasPage->Controls->Add(this->txtmarcaFAJA);
			this->FajasPage->Controls->Add(this->label17);
			this->FajasPage->Controls->Add(this->txttipoFAJA);
			this->FajasPage->Controls->Add(this->label19);
			this->FajasPage->Controls->Add(this->button1);
			this->FajasPage->Controls->Add(this->pbFajasPhoto);
			this->FajasPage->Controls->Add(this->label23);
			this->FajasPage->Controls->Add(this->label25);
			this->FajasPage->Controls->Add(this->txtdiametroexterFAJA);
			this->FajasPage->Controls->Add(this->txtdiametrointerFAJA);
			this->FajasPage->Controls->Add(this->label28);
			this->FajasPage->Controls->Add(this->label30);
			this->FajasPage->Controls->Add(this->label31);
			this->FajasPage->Controls->Add(this->txtprecioFAJA);
			this->FajasPage->Controls->Add(this->label32);
			this->FajasPage->Controls->Add(this->label33);
			this->FajasPage->Controls->Add(this->txtidFAJAS);
			this->FajasPage->Controls->Add(this->txtnameFAJA);
			this->FajasPage->Controls->Add(this->txtdescripFAJA);
			this->FajasPage->Location = System::Drawing::Point(4, 22);
			this->FajasPage->Margin = System::Windows::Forms::Padding(2);
			this->FajasPage->Name = L"FajasPage";
			this->FajasPage->Padding = System::Windows::Forms::Padding(2);
			this->FajasPage->Size = System::Drawing::Size(669, 488);
			this->FajasPage->TabIndex = 1;
			this->FajasPage->Text = L"Fajas";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(433, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 117;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StockForm::button4_Click);
			// 
			// txtaltogomaFAJA
			// 
			this->txtaltogomaFAJA->Location = System::Drawing::Point(321, 143);
			this->txtaltogomaFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtaltogomaFAJA->Name = L"txtaltogomaFAJA";
			this->txtaltogomaFAJA->Size = System::Drawing::Size(117, 20);
			this->txtaltogomaFAJA->TabIndex = 116;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(244, 146);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 13);
			this->label14->TabIndex = 115;
			this->label14->Text = L"AltoGoma";
			// 
			// btneditfaja
			// 
			this->btneditfaja->Location = System::Drawing::Point(190, 208);
			this->btneditfaja->Name = L"btneditfaja";
			this->btneditfaja->Size = System::Drawing::Size(75, 23);
			this->btneditfaja->TabIndex = 114;
			this->btneditfaja->Text = L"Editar";
			this->btneditfaja->UseVisualStyleBackColor = true;
			this->btneditfaja->Click += gcnew System::EventHandler(this, &StockForm::btneditfaja_Click);
			// 
			// btndeletefaja
			// 
			this->btndeletefaja->Location = System::Drawing::Point(305, 208);
			this->btndeletefaja->Name = L"btndeletefaja";
			this->btndeletefaja->Size = System::Drawing::Size(75, 23);
			this->btndeletefaja->TabIndex = 113;
			this->btndeletefaja->Text = L"Eliminar";
			this->btndeletefaja->UseVisualStyleBackColor = true;
			this->btndeletefaja->Click += gcnew System::EventHandler(this, &StockForm::btndeletefaja_Click);
			// 
			// btnaddfaja
			// 
			this->btnaddfaja->Location = System::Drawing::Point(67, 208);
			this->btnaddfaja->Name = L"btnaddfaja";
			this->btnaddfaja->Size = System::Drawing::Size(75, 23);
			this->btnaddfaja->TabIndex = 112;
			this->btnaddfaja->Text = L"Agregar";
			this->btnaddfaja->UseVisualStyleBackColor = true;
			this->btnaddfaja->Click += gcnew System::EventHandler(this, &StockForm::btnaddfaja_Click);
			// 
			// txtcantidadFAJA
			// 
			this->txtcantidadFAJA->Location = System::Drawing::Point(125, 107);
			this->txtcantidadFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtcantidadFAJA->Name = L"txtcantidadFAJA";
			this->txtcantidadFAJA->Size = System::Drawing::Size(51, 20);
			this->txtcantidadFAJA->TabIndex = 111;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(70, 112);
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
			this->dgvfajastock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn4,
					this->Tipo
			});
			this->dgvfajastock->Location = System::Drawing::Point(62, 248);
			this->dgvfajastock->Name = L"dgvfajastock";
			this->dgvfajastock->RowHeadersVisible = false;
			this->dgvfajastock->RowHeadersWidth = 51;
			this->dgvfajastock->Size = System::Drawing::Size(548, 138);
			this->dgvfajastock->TabIndex = 109;
			this->dgvfajastock->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvfajastock_CellClick);
			this->dgvfajastock->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvfajastock_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 60;
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
			this->dataGridViewTextBoxColumn3->Width = 70;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 70;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Marca";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			// 
			// txtmarcaFAJA
			// 
			this->txtmarcaFAJA->Location = System::Drawing::Point(321, 114);
			this->txtmarcaFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtmarcaFAJA->Name = L"txtmarcaFAJA";
			this->txtmarcaFAJA->Size = System::Drawing::Size(117, 20);
			this->txtmarcaFAJA->TabIndex = 106;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(260, 117);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 13);
			this->label17->TabIndex = 105;
			this->label17->Text = L"Marca";
			// 
			// txttipoFAJA
			// 
			this->txttipoFAJA->Location = System::Drawing::Point(321, 83);
			this->txttipoFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txttipoFAJA->Name = L"txttipoFAJA";
			this->txttipoFAJA->Size = System::Drawing::Size(117, 20);
			this->txttipoFAJA->TabIndex = 104;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(269, 86);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 13);
			this->label19->TabIndex = 103;
			this->label19->Text = L"Tipo";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(514, 173);
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
			this->label25->Location = System::Drawing::Point(31, 143);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 13);
			this->label25->TabIndex = 91;
			this->label25->Text = L"Diametro Externo";
			// 
			// txtdiametroexterFAJA
			// 
			this->txtdiametroexterFAJA->Location = System::Drawing::Point(125, 140);
			this->txtdiametroexterFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtdiametroexterFAJA->Name = L"txtdiametroexterFAJA";
			this->txtdiametroexterFAJA->Size = System::Drawing::Size(51, 20);
			this->txtdiametroexterFAJA->TabIndex = 90;
			// 
			// txtdiametrointerFAJA
			// 
			this->txtdiametrointerFAJA->Location = System::Drawing::Point(125, 172);
			this->txtdiametrointerFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtdiametrointerFAJA->Name = L"txtdiametrointerFAJA";
			this->txtdiametrointerFAJA->Size = System::Drawing::Size(51, 20);
			this->txtdiametrointerFAJA->TabIndex = 86;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(34, 175);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(85, 13);
			this->label28->TabIndex = 85;
			this->label28->Text = L"Diametro Interno";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(47, 39);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 13);
			this->label30->TabIndex = 78;
			this->label30->Text = L"Descripción";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(47, 12);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(16, 13);
			this->label31->TabIndex = 74;
			this->label31->Text = L"Id";
			// 
			// txtprecioFAJA
			// 
			this->txtprecioFAJA->Location = System::Drawing::Point(125, 80);
			this->txtprecioFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtprecioFAJA->Name = L"txtprecioFAJA";
			this->txtprecioFAJA->Size = System::Drawing::Size(51, 20);
			this->txtprecioFAJA->TabIndex = 82;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(187, 12);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(44, 13);
			this->label32->TabIndex = 75;
			this->label32->Text = L"Nombre";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(21, 83);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 13);
			this->label33->TabIndex = 81;
			this->label33->Text = L"Precio Unitario (S/.)";
			// 
			// txtidFAJAS
			// 
			this->txtidFAJAS->Enabled = false;
			this->txtidFAJAS->Location = System::Drawing::Point(67, 9);
			this->txtidFAJAS->Margin = System::Windows::Forms::Padding(2);
			this->txtidFAJAS->Name = L"txtidFAJAS";
			this->txtidFAJAS->Size = System::Drawing::Size(43, 20);
			this->txtidFAJAS->TabIndex = 76;
			// 
			// txtnameFAJA
			// 
			this->txtnameFAJA->Location = System::Drawing::Point(260, 9);
			this->txtnameFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtnameFAJA->Name = L"txtnameFAJA";
			this->txtnameFAJA->Size = System::Drawing::Size(223, 20);
			this->txtnameFAJA->TabIndex = 77;
			// 
			// txtdescripFAJA
			// 
			this->txtdescripFAJA->Location = System::Drawing::Point(114, 36);
			this->txtdescripFAJA->Margin = System::Windows::Forms::Padding(2);
			this->txtdescripFAJA->Multiline = true;
			this->txtdescripFAJA->Name = L"txtdescripFAJA";
			this->txtdescripFAJA->Size = System::Drawing::Size(379, 27);
			this->txtdescripFAJA->TabIndex = 79;
			// 
			// PoleasPage
			// 
			this->PoleasPage->BackColor = System::Drawing::Color::LightGray;
			this->PoleasPage->Controls->Add(this->btnlimpiarPOLEA);
			this->PoleasPage->Controls->Add(this->btneditarPOLEA);
			this->PoleasPage->Controls->Add(this->btndeletepoleastock);
			this->PoleasPage->Controls->Add(this->btnaddPOLEA);
			this->PoleasPage->Controls->Add(this->txtpoleacantidad);
			this->PoleasPage->Controls->Add(this->label16);
			this->PoleasPage->Controls->Add(this->dgvpolea);
			this->PoleasPage->Controls->Add(this->label43);
			this->PoleasPage->Controls->Add(this->txtprecioPOLEA);
			this->PoleasPage->Controls->Add(this->label42);
			this->PoleasPage->Controls->Add(this->txtmaterialPOLEA);
			this->PoleasPage->Controls->Add(this->txtmarcaPOLEA);
			this->PoleasPage->Controls->Add(this->label26);
			this->PoleasPage->Controls->Add(this->label38);
			this->PoleasPage->Controls->Add(this->txtdiametroexterPOLEA);
			this->PoleasPage->Controls->Add(this->label39);
			this->PoleasPage->Controls->Add(this->txttipoPOLEA);
			this->PoleasPage->Controls->Add(this->txtejePOLEA);
			this->PoleasPage->Controls->Add(this->label41);
			this->PoleasPage->Controls->Add(this->button2);
			this->PoleasPage->Controls->Add(this->pbPOLEA);
			this->PoleasPage->Controls->Add(this->label47);
			this->PoleasPage->Controls->Add(this->label48);
			this->PoleasPage->Controls->Add(this->label49);
			this->PoleasPage->Controls->Add(this->txtidpolea);
			this->PoleasPage->Controls->Add(this->txtpoleaname);
			this->PoleasPage->Controls->Add(this->txtdescripPOLEA);
			this->PoleasPage->Location = System::Drawing::Point(4, 22);
			this->PoleasPage->Margin = System::Windows::Forms::Padding(2);
			this->PoleasPage->Name = L"PoleasPage";
			this->PoleasPage->Padding = System::Windows::Forms::Padding(2);
			this->PoleasPage->Size = System::Drawing::Size(669, 488);
			this->PoleasPage->TabIndex = 2;
			this->PoleasPage->Text = L"Poleas";
			// 
			// btnlimpiarPOLEA
			// 
			this->btnlimpiarPOLEA->Location = System::Drawing::Point(470, 224);
			this->btnlimpiarPOLEA->Name = L"btnlimpiarPOLEA";
			this->btnlimpiarPOLEA->Size = System::Drawing::Size(75, 23);
			this->btnlimpiarPOLEA->TabIndex = 139;
			this->btnlimpiarPOLEA->Text = L"Limpiar";
			this->btnlimpiarPOLEA->UseVisualStyleBackColor = true;
			this->btnlimpiarPOLEA->Click += gcnew System::EventHandler(this, &StockForm::button5_Click);
			// 
			// btneditarPOLEA
			// 
			this->btneditarPOLEA->Location = System::Drawing::Point(227, 224);
			this->btneditarPOLEA->Name = L"btneditarPOLEA";
			this->btneditarPOLEA->Size = System::Drawing::Size(75, 23);
			this->btneditarPOLEA->TabIndex = 138;
			this->btneditarPOLEA->Text = L"Editar";
			this->btneditarPOLEA->UseVisualStyleBackColor = true;
			this->btneditarPOLEA->Click += gcnew System::EventHandler(this, &StockForm::editpoleastock_Click);
			// 
			// btndeletepoleastock
			// 
			this->btndeletepoleastock->Location = System::Drawing::Point(353, 224);
			this->btndeletepoleastock->Name = L"btndeletepoleastock";
			this->btndeletepoleastock->Size = System::Drawing::Size(75, 23);
			this->btndeletepoleastock->TabIndex = 137;
			this->btndeletepoleastock->Text = L"Eliminar";
			this->btndeletepoleastock->UseVisualStyleBackColor = true;
			this->btndeletepoleastock->Click += gcnew System::EventHandler(this, &StockForm::btndeletepoleastock_Click);
			// 
			// btnaddPOLEA
			// 
			this->btnaddPOLEA->Location = System::Drawing::Point(91, 224);
			this->btnaddPOLEA->Name = L"btnaddPOLEA";
			this->btnaddPOLEA->Size = System::Drawing::Size(75, 23);
			this->btnaddPOLEA->TabIndex = 136;
			this->btnaddPOLEA->Text = L"Agregar";
			this->btnaddPOLEA->UseVisualStyleBackColor = true;
			this->btnaddPOLEA->Click += gcnew System::EventHandler(this, &StockForm::button8_Click);
			// 
			// txtpoleacantidad
			// 
			this->txtpoleacantidad->Location = System::Drawing::Point(91, 147);
			this->txtpoleacantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtpoleacantidad->Name = L"txtpoleacantidad";
			this->txtpoleacantidad->Size = System::Drawing::Size(51, 20);
			this->txtpoleacantidad->TabIndex = 135;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(31, 147);
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
			this->dgvpolea->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn10,
					this->ti
			});
			this->dgvpolea->Location = System::Drawing::Point(39, 253);
			this->dgvpolea->Name = L"dgvpolea";
			this->dgvpolea->RowHeadersVisible = false;
			this->dgvpolea->RowHeadersWidth = 51;
			this->dgvpolea->Size = System::Drawing::Size(532, 119);
			this->dgvpolea->TabIndex = 133;
			this->dgvpolea->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvpolea_CellClick);
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 60;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Marca";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 60;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 60;
			// 
			// ti
			// 
			this->ti->HeaderText = L"Tipo";
			this->ti->Name = L"ti";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(13, 184);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(67, 13);
			this->label43->TabIndex = 132;
			this->label43->Text = L"Diametro Eje";
			// 
			// txtprecioPOLEA
			// 
			this->txtprecioPOLEA->Location = System::Drawing::Point(353, 147);
			this->txtprecioPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtprecioPOLEA->Name = L"txtprecioPOLEA";
			this->txtprecioPOLEA->Size = System::Drawing::Size(77, 20);
			this->txtprecioPOLEA->TabIndex = 131;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(36, 113);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(44, 13);
			this->label42->TabIndex = 130;
			this->label42->Text = L"Material";
			// 
			// txtmaterialPOLEA
			// 
			this->txtmaterialPOLEA->Location = System::Drawing::Point(90, 110);
			this->txtmaterialPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtmaterialPOLEA->Name = L"txtmaterialPOLEA";
			this->txtmaterialPOLEA->Size = System::Drawing::Size(108, 20);
			this->txtmaterialPOLEA->TabIndex = 129;
			// 
			// txtmarcaPOLEA
			// 
			this->txtmarcaPOLEA->Location = System::Drawing::Point(353, 76);
			this->txtmarcaPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtmarcaPOLEA->Name = L"txtmarcaPOLEA";
			this->txtmarcaPOLEA->Size = System::Drawing::Size(117, 20);
			this->txtmarcaPOLEA->TabIndex = 126;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(298, 80);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(37, 13);
			this->label26->TabIndex = 125;
			this->label26->Text = L"Marca";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(251, 109);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(88, 13);
			this->label38->TabIndex = 117;
			this->label38->Text = L"Diametro Externo";
			// 
			// txtdiametroexterPOLEA
			// 
			this->txtdiametroexterPOLEA->Location = System::Drawing::Point(353, 106);
			this->txtdiametroexterPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtdiametroexterPOLEA->Name = L"txtdiametroexterPOLEA";
			this->txtdiametroexterPOLEA->Size = System::Drawing::Size(77, 20);
			this->txtdiametroexterPOLEA->TabIndex = 116;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(52, 83);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 13);
			this->label39->TabIndex = 114;
			this->label39->Text = L"Tipo";
			// 
			// txttipoPOLEA
			// 
			this->txttipoPOLEA->Location = System::Drawing::Point(90, 80);
			this->txttipoPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txttipoPOLEA->Name = L"txttipoPOLEA";
			this->txttipoPOLEA->Size = System::Drawing::Size(136, 20);
			this->txttipoPOLEA->TabIndex = 111;
			// 
			// txtejePOLEA
			// 
			this->txtejePOLEA->Location = System::Drawing::Point(91, 181);
			this->txtejePOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtejePOLEA->Name = L"txtejePOLEA";
			this->txtejePOLEA->Size = System::Drawing::Size(51, 20);
			this->txtejePOLEA->TabIndex = 110;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(235, 150);
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
			// pbPOLEA
			// 
			this->pbPOLEA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPOLEA->Location = System::Drawing::Point(514, 22);
			this->pbPOLEA->Name = L"pbPOLEA";
			this->pbPOLEA->Size = System::Drawing::Size(137, 145);
			this->pbPOLEA->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPOLEA->TabIndex = 99;
			this->pbPOLEA->TabStop = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(17, 47);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(63, 13);
			this->label47->TabIndex = 78;
			this->label47->Text = L"Descripción";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(64, 12);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(16, 13);
			this->label48->TabIndex = 74;
			this->label48->Text = L"Id";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(182, 15);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(44, 13);
			this->label49->TabIndex = 75;
			this->label49->Text = L"Nombre";
			// 
			// txtidpolea
			// 
			this->txtidpolea->Enabled = false;
			this->txtidpolea->Location = System::Drawing::Point(90, 12);
			this->txtidpolea->Margin = System::Windows::Forms::Padding(2);
			this->txtidpolea->Name = L"txtidpolea";
			this->txtidpolea->Size = System::Drawing::Size(43, 20);
			this->txtidpolea->TabIndex = 76;
			// 
			// txtpoleaname
			// 
			this->txtpoleaname->Location = System::Drawing::Point(254, 12);
			this->txtpoleaname->Margin = System::Windows::Forms::Padding(2);
			this->txtpoleaname->Name = L"txtpoleaname";
			this->txtpoleaname->Size = System::Drawing::Size(138, 20);
			this->txtpoleaname->TabIndex = 77;
			// 
			// txtdescripPOLEA
			// 
			this->txtdescripPOLEA->Location = System::Drawing::Point(91, 44);
			this->txtdescripPOLEA->Margin = System::Windows::Forms::Padding(2);
			this->txtdescripPOLEA->Multiline = true;
			this->txtdescripPOLEA->Name = L"txtdescripPOLEA";
			this->txtdescripPOLEA->Size = System::Drawing::Size(379, 28);
			this->txtdescripPOLEA->TabIndex = 79;
			// 
			// RodamientosPage
			// 
			this->RodamientosPage->BackColor = System::Drawing::Color::LightGray;
			this->RodamientosPage->Controls->Add(this->txttipoRODA);
			this->RodamientosPage->Controls->Add(this->label22);
			this->RodamientosPage->Controls->Add(this->btnlimpiarRODA);
			this->RodamientosPage->Controls->Add(this->txtanchoRODA);
			this->RodamientosPage->Controls->Add(this->label18);
			this->RodamientosPage->Controls->Add(this->btneditrodamiento);
			this->RodamientosPage->Controls->Add(this->btndeleterodamiento);
			this->RodamientosPage->Controls->Add(this->btnaddrodamiento);
			this->RodamientosPage->Controls->Add(this->txtcantidadrodamiento);
			this->RodamientosPage->Controls->Add(this->label20);
			this->RodamientosPage->Controls->Add(this->dgvrodamiento);
			this->RodamientosPage->Controls->Add(this->txtmarcaRODA);
			this->RodamientosPage->Controls->Add(this->label52);
			this->RodamientosPage->Controls->Add(this->button3);
			this->RodamientosPage->Controls->Add(this->pbRodamientosPhoto);
			this->RodamientosPage->Controls->Add(this->label56);
			this->RodamientosPage->Controls->Add(this->txtdexternRODA);
			this->RodamientosPage->Controls->Add(this->txtdinterRODA);
			this->RodamientosPage->Controls->Add(this->label62);
			this->RodamientosPage->Controls->Add(this->label63);
			this->RodamientosPage->Controls->Add(this->label64);
			this->RodamientosPage->Controls->Add(this->label65);
			this->RodamientosPage->Controls->Add(this->txtpreciorodamiento);
			this->RodamientosPage->Controls->Add(this->label66);
			this->RodamientosPage->Controls->Add(this->label67);
			this->RodamientosPage->Controls->Add(this->txtidrodamiento);
			this->RodamientosPage->Controls->Add(this->txtrodamientoname);
			this->RodamientosPage->Controls->Add(this->txtdescripRODAMIE);
			this->RodamientosPage->Location = System::Drawing::Point(4, 22);
			this->RodamientosPage->Margin = System::Windows::Forms::Padding(2);
			this->RodamientosPage->Name = L"RodamientosPage";
			this->RodamientosPage->Padding = System::Windows::Forms::Padding(2);
			this->RodamientosPage->Size = System::Drawing::Size(669, 488);
			this->RodamientosPage->TabIndex = 3;
			this->RodamientosPage->Text = L"Rodamientos";
			// 
			// txttipoRODA
			// 
			this->txttipoRODA->Location = System::Drawing::Point(104, 184);
			this->txttipoRODA->Margin = System::Windows::Forms::Padding(2);
			this->txttipoRODA->Name = L"txttipoRODA";
			this->txttipoRODA->Size = System::Drawing::Size(117, 20);
			this->txttipoRODA->TabIndex = 146;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(69, 183);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 13);
			this->label22->TabIndex = 145;
			this->label22->Text = L"Tipo";
			// 
			// btnlimpiarRODA
			// 
			this->btnlimpiarRODA->Location = System::Drawing::Point(432, 220);
			this->btnlimpiarRODA->Name = L"btnlimpiarRODA";
			this->btnlimpiarRODA->Size = System::Drawing::Size(75, 23);
			this->btnlimpiarRODA->TabIndex = 144;
			this->btnlimpiarRODA->Text = L"Limpiar";
			this->btnlimpiarRODA->UseVisualStyleBackColor = true;
			this->btnlimpiarRODA->Click += gcnew System::EventHandler(this, &StockForm::btnlimpiarRODA_Click);
			// 
			// txtanchoRODA
			// 
			this->txtanchoRODA->Location = System::Drawing::Point(104, 154);
			this->txtanchoRODA->Margin = System::Windows::Forms::Padding(2);
			this->txtanchoRODA->Name = L"txtanchoRODA";
			this->txtanchoRODA->Size = System::Drawing::Size(51, 20);
			this->txtanchoRODA->TabIndex = 143;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(60, 157);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(38, 13);
			this->label18->TabIndex = 142;
			this->label18->Text = L"Ancho";
			// 
			// btneditrodamiento
			// 
			this->btneditrodamiento->Location = System::Drawing::Point(191, 220);
			this->btneditrodamiento->Name = L"btneditrodamiento";
			this->btneditrodamiento->Size = System::Drawing::Size(75, 23);
			this->btneditrodamiento->TabIndex = 141;
			this->btneditrodamiento->Text = L"Editar";
			this->btneditrodamiento->UseVisualStyleBackColor = true;
			this->btneditrodamiento->Click += gcnew System::EventHandler(this, &StockForm::btneditrodamiento_Click);
			// 
			// btndeleterodamiento
			// 
			this->btndeleterodamiento->Location = System::Drawing::Point(312, 220);
			this->btndeleterodamiento->Name = L"btndeleterodamiento";
			this->btndeleterodamiento->Size = System::Drawing::Size(75, 23);
			this->btndeleterodamiento->TabIndex = 140;
			this->btndeleterodamiento->Text = L"Eliminar";
			this->btndeleterodamiento->UseVisualStyleBackColor = true;
			this->btndeleterodamiento->Click += gcnew System::EventHandler(this, &StockForm::btndeleterodamiento_Click);
			// 
			// btnaddrodamiento
			// 
			this->btnaddrodamiento->Location = System::Drawing::Point(72, 220);
			this->btnaddrodamiento->Name = L"btnaddrodamiento";
			this->btnaddrodamiento->Size = System::Drawing::Size(75, 23);
			this->btnaddrodamiento->TabIndex = 139;
			this->btnaddrodamiento->Text = L"Agregar";
			this->btnaddrodamiento->UseVisualStyleBackColor = true;
			this->btnaddrodamiento->Click += gcnew System::EventHandler(this, &StockForm::btnaddrodamiento_Click);
			// 
			// txtcantidadrodamiento
			// 
			this->txtcantidadrodamiento->Location = System::Drawing::Point(104, 120);
			this->txtcantidadrodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtcantidadrodamiento->Name = L"txtcantidadrodamiento";
			this->txtcantidadrodamiento->Size = System::Drawing::Size(117, 20);
			this->txtcantidadrodamiento->TabIndex = 111;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(49, 126);
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
			this->dgvrodamiento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->NOMBRE,
					this->MARCA_RODA, this->CANTIDAD_RODA, this->PREIO_UNIT_RODA, this->TIPO_RODA
			});
			this->dgvrodamiento->Location = System::Drawing::Point(43, 260);
			this->dgvrodamiento->Name = L"dgvrodamiento";
			this->dgvrodamiento->RowHeadersVisible = false;
			this->dgvrodamiento->RowHeadersWidth = 51;
			this->dgvrodamiento->Size = System::Drawing::Size(552, 119);
			this->dgvrodamiento->TabIndex = 109;
			this->dgvrodamiento->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvrodamiento_CellClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// NOMBRE
			// 
			this->NOMBRE->HeaderText = L"NOMBRE";
			this->NOMBRE->Name = L"NOMBRE";
			// 
			// MARCA_RODA
			// 
			this->MARCA_RODA->HeaderText = L"MARCA";
			this->MARCA_RODA->Name = L"MARCA_RODA";
			// 
			// CANTIDAD_RODA
			// 
			this->CANTIDAD_RODA->HeaderText = L"CANTIDAD";
			this->CANTIDAD_RODA->Name = L"CANTIDAD_RODA";
			// 
			// PREIO_UNIT_RODA
			// 
			this->PREIO_UNIT_RODA->HeaderText = L"PRECIO UNIT";
			this->PREIO_UNIT_RODA->Name = L"PREIO_UNIT_RODA";
			// 
			// TIPO_RODA
			// 
			this->TIPO_RODA->HeaderText = L"TIPO";
			this->TIPO_RODA->Name = L"TIPO_RODA";
			// 
			// txtmarcaRODA
			// 
			this->txtmarcaRODA->Location = System::Drawing::Point(104, 90);
			this->txtmarcaRODA->Margin = System::Windows::Forms::Padding(2);
			this->txtmarcaRODA->Name = L"txtmarcaRODA";
			this->txtmarcaRODA->Size = System::Drawing::Size(117, 20);
			this->txtmarcaRODA->TabIndex = 106;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(61, 93);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(37, 13);
			this->label52->TabIndex = 105;
			this->label52->Text = L"Marca";
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
			this->label56->Location = System::Drawing::Point(273, 119);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(87, 13);
			this->label56->TabIndex = 95;
			this->label56->Text = L"Diametro externo";
			// 
			// txtdexternRODA
			// 
			this->txtdexternRODA->Location = System::Drawing::Point(377, 116);
			this->txtdexternRODA->Margin = System::Windows::Forms::Padding(2);
			this->txtdexternRODA->Name = L"txtdexternRODA";
			this->txtdexternRODA->Size = System::Drawing::Size(117, 20);
			this->txtdexternRODA->TabIndex = 90;
			// 
			// txtdinterRODA
			// 
			this->txtdinterRODA->Location = System::Drawing::Point(377, 87);
			this->txtdinterRODA->Margin = System::Windows::Forms::Padding(2);
			this->txtdinterRODA->Name = L"txtdinterRODA";
			this->txtdinterRODA->Size = System::Drawing::Size(117, 20);
			this->txtdinterRODA->TabIndex = 86;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(275, 90);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(85, 13);
			this->label62->TabIndex = 85;
			this->label62->Text = L"Diametro Interno";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(49, 171);
			this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(0, 13);
			this->label63->TabIndex = 83;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(14, 47);
			this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(63, 13);
			this->label64->TabIndex = 78;
			this->label64->Text = L"Descripción";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(61, 12);
			this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(16, 13);
			this->label65->TabIndex = 74;
			this->label65->Text = L"Id";
			// 
			// txtpreciorodamiento
			// 
			this->txtpreciorodamiento->Location = System::Drawing::Point(377, 147);
			this->txtpreciorodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtpreciorodamiento->Name = L"txtpreciorodamiento";
			this->txtpreciorodamiento->Size = System::Drawing::Size(117, 20);
			this->txtpreciorodamiento->TabIndex = 82;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(188, 12);
			this->label66->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(44, 13);
			this->label66->TabIndex = 75;
			this->label66->Text = L"Nombre";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(260, 150);
			this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(100, 13);
			this->label67->TabIndex = 81;
			this->label67->Text = L"Precio Unitario (S/.)";
			// 
			// txtidrodamiento
			// 
			this->txtidrodamiento->Enabled = false;
			this->txtidrodamiento->Location = System::Drawing::Point(104, 12);
			this->txtidrodamiento->Margin = System::Windows::Forms::Padding(2);
			this->txtidrodamiento->Name = L"txtidrodamiento";
			this->txtidrodamiento->Size = System::Drawing::Size(43, 20);
			this->txtidrodamiento->TabIndex = 76;
			// 
			// txtrodamientoname
			// 
			this->txtrodamientoname->Location = System::Drawing::Point(260, 9);
			this->txtrodamientoname->Margin = System::Windows::Forms::Padding(2);
			this->txtrodamientoname->Name = L"txtrodamientoname";
			this->txtrodamientoname->Size = System::Drawing::Size(174, 20);
			this->txtrodamientoname->TabIndex = 77;
			// 
			// txtdescripRODAMIE
			// 
			this->txtdescripRODAMIE->Location = System::Drawing::Point(104, 47);
			this->txtdescripRODAMIE->Margin = System::Windows::Forms::Padding(2);
			this->txtdescripRODAMIE->Multiline = true;
			this->txtdescripRODAMIE->Name = L"txtdescripRODAMIE";
			this->txtdescripRODAMIE->Size = System::Drawing::Size(330, 25);
			this->txtdescripRODAMIE->TabIndex = 79;
			// 
			// btnAgregarMotorAC
			// 
			this->btnAgregarMotorAC->BackColor = System::Drawing::Color::LightGray;
			this->btnAgregarMotorAC->Controls->Add(this->btnlimpiarMAC);
			this->btnAgregarMotorAC->Controls->Add(this->btnEditMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->btnDeteleMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->btnaddMAC);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACCantidad);
			this->btnAgregarMotorAC->Controls->Add(this->label21);
			this->btnAgregarMotorAC->Controls->Add(this->dgvMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->txtMotorACBrand);
			this->btnAgregarMotorAC->Controls->Add(this->label69);
			this->btnAgregarMotorAC->Controls->Add(this->btnPhotoMotorAC);
			this->btnAgregarMotorAC->Controls->Add(this->pbMotorACPhoto);
			this->btnAgregarMotorAC->Controls->Add(this->label74);
			this->btnAgregarMotorAC->Controls->Add(this->label76);
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
			// 
			// btnlimpiarMAC
			// 
			this->btnlimpiarMAC->Location = System::Drawing::Point(435, 236);
			this->btnlimpiarMAC->Name = L"btnlimpiarMAC";
			this->btnlimpiarMAC->Size = System::Drawing::Size(75, 23);
			this->btnlimpiarMAC->TabIndex = 145;
			this->btnlimpiarMAC->Text = L"Limpiar";
			this->btnlimpiarMAC->UseVisualStyleBackColor = true;
			this->btnlimpiarMAC->Click += gcnew System::EventHandler(this, &StockForm::btnlimpiarMAC_Click);
			// 
			// btnEditMotorAC
			// 
			this->btnEditMotorAC->Location = System::Drawing::Point(165, 236);
			this->btnEditMotorAC->Name = L"btnEditMotorAC";
			this->btnEditMotorAC->Size = System::Drawing::Size(75, 23);
			this->btnEditMotorAC->TabIndex = 144;
			this->btnEditMotorAC->Text = L"Editar";
			this->btnEditMotorAC->UseVisualStyleBackColor = true;
			this->btnEditMotorAC->Click += gcnew System::EventHandler(this, &StockForm::btnEditMotorAC_Click);
			// 
			// btnDeteleMotorAC
			// 
			this->btnDeteleMotorAC->Location = System::Drawing::Point(308, 236);
			this->btnDeteleMotorAC->Name = L"btnDeteleMotorAC";
			this->btnDeteleMotorAC->Size = System::Drawing::Size(75, 23);
			this->btnDeteleMotorAC->TabIndex = 143;
			this->btnDeteleMotorAC->Text = L"Eliminar";
			this->btnDeteleMotorAC->UseVisualStyleBackColor = true;
			this->btnDeteleMotorAC->Click += gcnew System::EventHandler(this, &StockForm::btnDeteleMotorAC_Click);
			// 
			// btnaddMAC
			// 
			this->btnaddMAC->Location = System::Drawing::Point(41, 236);
			this->btnaddMAC->Name = L"btnaddMAC";
			this->btnaddMAC->Size = System::Drawing::Size(75, 23);
			this->btnaddMAC->TabIndex = 142;
			this->btnaddMAC->Text = L"Agregar";
			this->btnaddMAC->UseVisualStyleBackColor = true;
			this->btnaddMAC->Click += gcnew System::EventHandler(this, &StockForm::button9_Click);
			// 
			// txtMotorACCantidad
			// 
			this->txtMotorACCantidad->Location = System::Drawing::Point(102, 85);
			this->txtMotorACCantidad->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACCantidad->Name = L"txtMotorACCantidad";
			this->txtMotorACCantidad->Size = System::Drawing::Size(51, 20);
			this->txtMotorACCantidad->TabIndex = 113;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(38, 88);
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
			this->dgvMotorAC->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19,
					this->potencia
			});
			this->dgvMotorAC->Location = System::Drawing::Point(102, 274);
			this->dgvMotorAC->Name = L"dgvMotorAC";
			this->dgvMotorAC->RowHeadersVisible = false;
			this->dgvMotorAC->RowHeadersWidth = 51;
			this->dgvMotorAC->Size = System::Drawing::Size(459, 119);
			this->dgvMotorAC->TabIndex = 111;
			this->dgvMotorAC->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvMotorAC_CellClick);
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 50;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 125;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Width = 60;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 60;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Marca";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			// 
			// potencia
			// 
			this->potencia->HeaderText = L"Potencia";
			this->potencia->Name = L"potencia";
			this->potencia->Width = 60;
			// 
			// txtMotorACBrand
			// 
			this->txtMotorACBrand->Location = System::Drawing::Point(356, 85);
			this->txtMotorACBrand->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACBrand->Name = L"txtMotorACBrand";
			this->txtMotorACBrand->Size = System::Drawing::Size(117, 20);
			this->txtMotorACBrand->TabIndex = 106;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(305, 88);
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
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(32, 293);
			this->label74->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(0, 13);
			this->label74->TabIndex = 94;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(240, 162);
			this->label76->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(102, 13);
			this->label76->TabIndex = 91;
			this->label76->Text = L"Clase de Protección";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(52, 166);
			this->label77->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(35, 13);
			this->label77->TabIndex = 89;
			this->label77->Text = L"Fases";
			// 
			// txtMotorACTipoProteccion
			// 
			this->txtMotorACTipoProteccion->Location = System::Drawing::Point(356, 159);
			this->txtMotorACTipoProteccion->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACTipoProteccion->Name = L"txtMotorACTipoProteccion";
			this->txtMotorACTipoProteccion->Size = System::Drawing::Size(108, 20);
			this->txtMotorACTipoProteccion->TabIndex = 88;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(51, 120);
			this->label78->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(36, 13);
			this->label78->TabIndex = 87;
			this->label78->Text = L"Frame";
			// 
			// txtMotorACPotencia
			// 
			this->txtMotorACPotencia->Location = System::Drawing::Point(356, 117);
			this->txtMotorACPotencia->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACPotencia->Name = L"txtMotorACPotencia";
			this->txtMotorACPotencia->Size = System::Drawing::Size(117, 20);
			this->txtMotorACPotencia->TabIndex = 86;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(293, 117);
			this->label79->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(49, 13);
			this->label79->TabIndex = 85;
			this->label79->Text = L"Potencia";
			// 
			// txtMotorACFrame
			// 
			this->txtMotorACFrame->Location = System::Drawing::Point(102, 117);
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
			this->label81->Location = System::Drawing::Point(24, 47);
			this->label81->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(63, 13);
			this->label81->TabIndex = 78;
			this->label81->Text = L"Descripción";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(71, 15);
			this->label82->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(16, 13);
			this->label82->TabIndex = 74;
			this->label82->Text = L"Id";
			// 
			// txtMotorACPrecioUnitario
			// 
			this->txtMotorACPrecioUnitario->Location = System::Drawing::Point(356, 193);
			this->txtMotorACPrecioUnitario->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACPrecioUnitario->Name = L"txtMotorACPrecioUnitario";
			this->txtMotorACPrecioUnitario->Size = System::Drawing::Size(51, 20);
			this->txtMotorACPrecioUnitario->TabIndex = 82;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(196, 15);
			this->label83->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(44, 13);
			this->label83->TabIndex = 75;
			this->label83->Text = L"Nombre";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(242, 200);
			this->label84->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(100, 13);
			this->label84->TabIndex = 81;
			this->label84->Text = L"Precio Unitario (S/.)";
			// 
			// txtMotorACId
			// 
			this->txtMotorACId->Enabled = false;
			this->txtMotorACId->Location = System::Drawing::Point(104, 12);
			this->txtMotorACId->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACId->Name = L"txtMotorACId";
			this->txtMotorACId->Size = System::Drawing::Size(43, 20);
			this->txtMotorACId->TabIndex = 76;
			// 
			// txtMotorACFases
			// 
			this->txtMotorACFases->Location = System::Drawing::Point(102, 159);
			this->txtMotorACFases->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACFases->Name = L"txtMotorACFases";
			this->txtMotorACFases->Size = System::Drawing::Size(110, 20);
			this->txtMotorACFases->TabIndex = 80;
			// 
			// txtMotorACName
			// 
			this->txtMotorACName->Location = System::Drawing::Point(260, 12);
			this->txtMotorACName->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACName->Name = L"txtMotorACName";
			this->txtMotorACName->Size = System::Drawing::Size(223, 20);
			this->txtMotorACName->TabIndex = 77;
			// 
			// txtMotorACDescription
			// 
			this->txtMotorACDescription->Location = System::Drawing::Point(102, 44);
			this->txtMotorACDescription->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorACDescription->Multiline = true;
			this->txtMotorACDescription->Name = L"txtMotorACDescription";
			this->txtMotorACDescription->Size = System::Drawing::Size(379, 25);
			this->txtMotorACDescription->TabIndex = 79;
			// 
			// MotoresDCPage
			// 
			this->MotoresDCPage->BackColor = System::Drawing::Color::LightGray;
			this->MotoresDCPage->Controls->Add(this->btnlimpiarMOTORDC);
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
			this->MotoresDCPage->Size = System::Drawing::Size(667, 488);
			this->MotoresDCPage->TabIndex = 5;
			this->MotoresDCPage->Text = L"MotoresDC";
			// 
			// btnlimpiarMOTORDC
			// 
			this->btnlimpiarMOTORDC->Location = System::Drawing::Point(430, 257);
			this->btnlimpiarMOTORDC->Name = L"btnlimpiarMOTORDC";
			this->btnlimpiarMOTORDC->Size = System::Drawing::Size(75, 23);
			this->btnlimpiarMOTORDC->TabIndex = 145;
			this->btnlimpiarMOTORDC->Text = L"Limpiar";
			this->btnlimpiarMOTORDC->UseVisualStyleBackColor = true;
			this->btnlimpiarMOTORDC->Click += gcnew System::EventHandler(this, &StockForm::btnlimpiarMOTORDC_Click);
			// 
			// btnEditarMotorDC
			// 
			this->btnEditarMotorDC->Location = System::Drawing::Point(165, 257);
			this->btnEditarMotorDC->Name = L"btnEditarMotorDC";
			this->btnEditarMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnEditarMotorDC->TabIndex = 144;
			this->btnEditarMotorDC->Text = L"Editar";
			this->btnEditarMotorDC->UseVisualStyleBackColor = true;
			this->btnEditarMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnEditarMotorDC_Click);
			// 
			// btnDeleteMotorDC
			// 
			this->btnDeleteMotorDC->Location = System::Drawing::Point(297, 257);
			this->btnDeleteMotorDC->Name = L"btnDeleteMotorDC";
			this->btnDeleteMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnDeleteMotorDC->TabIndex = 143;
			this->btnDeleteMotorDC->Text = L"Eliminar";
			this->btnDeleteMotorDC->UseVisualStyleBackColor = true;
			this->btnDeleteMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnDeleteMotorDC_Click);
			// 
			// btnAgregarMotorDC
			// 
			this->btnAgregarMotorDC->Location = System::Drawing::Point(41, 257);
			this->btnAgregarMotorDC->Name = L"btnAgregarMotorDC";
			this->btnAgregarMotorDC->Size = System::Drawing::Size(75, 23);
			this->btnAgregarMotorDC->TabIndex = 142;
			this->btnAgregarMotorDC->Text = L"Agregar";
			this->btnAgregarMotorDC->UseVisualStyleBackColor = true;
			this->btnAgregarMotorDC->Click += gcnew System::EventHandler(this, &StockForm::btnAgregarMotorDC_Click);
			// 
			// txtMotorDCStock
			// 
			this->txtMotorDCStock->Location = System::Drawing::Point(366, 90);
			this->txtMotorDCStock->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCStock->Name = L"txtMotorDCStock";
			this->txtMotorDCStock->Size = System::Drawing::Size(51, 20);
			this->txtMotorDCStock->TabIndex = 111;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(290, 93);
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
			this->dgvMotorDC->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn21,
					this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn25, this->marc, this->volt,
					this->dataGridViewTextBoxColumn24
			});
			this->dgvMotorDC->Location = System::Drawing::Point(31, 309);
			this->dgvMotorDC->Name = L"dgvMotorDC";
			this->dgvMotorDC->RowHeadersVisible = false;
			this->dgvMotorDC->RowHeadersWidth = 51;
			this->dgvMotorDC->Size = System::Drawing::Size(577, 142);
			this->dgvMotorDC->TabIndex = 109;
			this->dgvMotorDC->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvMotorDC_CellClick);
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Width = 60;
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
			this->dataGridViewTextBoxColumn23->Width = 70;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"Precio Unitario";
			this->dataGridViewTextBoxColumn25->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->Width = 70;
			// 
			// marc
			// 
			this->marc->HeaderText = L"Marca";
			this->marc->Name = L"marc";
			this->marc->Width = 80;
			// 
			// volt
			// 
			this->volt->HeaderText = L"Voltaje";
			this->volt->Name = L"volt";
			this->volt->Width = 70;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"Potencia";
			this->dataGridViewTextBoxColumn24->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
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
			this->label86->Location = System::Drawing::Point(302, 138);
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
			this->label90->Location = System::Drawing::Point(294, 180);
			this->label90->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(45, 13);
			this->label90->TabIndex = 95;
			this->label90->Text = L"Montaje";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(23, 138);
			this->label93->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(54, 13);
			this->label93->TabIndex = 91;
			this->label93->Text = L"Velocidad";
			// 
			// txtMotorDCMontaje
			// 
			this->txtMotorDCMontaje->Location = System::Drawing::Point(366, 177);
			this->txtMotorDCMontaje->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCMontaje->Name = L"txtMotorDCMontaje";
			this->txtMotorDCMontaje->Size = System::Drawing::Size(117, 20);
			this->txtMotorDCMontaje->TabIndex = 90;
			// 
			// txtMotorDCVelocidad
			// 
			this->txtMotorDCVelocidad->Location = System::Drawing::Point(104, 135);
			this->txtMotorDCVelocidad->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCVelocidad->Name = L"txtMotorDCVelocidad";
			this->txtMotorDCVelocidad->Size = System::Drawing::Size(108, 20);
			this->txtMotorDCVelocidad->TabIndex = 88;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(28, 93);
			this->label95->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(49, 13);
			this->label95->TabIndex = 87;
			this->label95->Text = L"Potencia";
			// 
			// txtMotorDCVoltaje
			// 
			this->txtMotorDCVoltaje->Location = System::Drawing::Point(104, 177);
			this->txtMotorDCVoltaje->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCVoltaje->Name = L"txtMotorDCVoltaje";
			this->txtMotorDCVoltaje->Size = System::Drawing::Size(117, 20);
			this->txtMotorDCVoltaje->TabIndex = 86;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(38, 180);
			this->label96->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(39, 13);
			this->label96->TabIndex = 85;
			this->label96->Text = L"Voltaje";
			// 
			// txtMotorDCPotencia
			// 
			this->txtMotorDCPotencia->Location = System::Drawing::Point(104, 93);
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
			this->label98->Location = System::Drawing::Point(23, 50);
			this->label98->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(63, 13);
			this->label98->TabIndex = 78;
			this->label98->Text = L"Descripción";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(65, 15);
			this->label99->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(16, 13);
			this->label99->TabIndex = 74;
			this->label99->Text = L"Id";
			// 
			// txtMotorDCPrecioUniario
			// 
			this->txtMotorDCPrecioUniario->Location = System::Drawing::Point(366, 217);
			this->txtMotorDCPrecioUniario->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCPrecioUniario->Name = L"txtMotorDCPrecioUniario";
			this->txtMotorDCPrecioUniario->Size = System::Drawing::Size(51, 20);
			this->txtMotorDCPrecioUniario->TabIndex = 82;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(196, 15);
			this->label100->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(44, 13);
			this->label100->TabIndex = 75;
			this->label100->Text = L"Nombre";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(239, 220);
			this->label101->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(100, 13);
			this->label101->TabIndex = 81;
			this->label101->Text = L"Precio Unitario (S/.)";
			// 
			// txtMotorDCId
			// 
			this->txtMotorDCId->Enabled = false;
			this->txtMotorDCId->Location = System::Drawing::Point(104, 12);
			this->txtMotorDCId->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCId->Name = L"txtMotorDCId";
			this->txtMotorDCId->Size = System::Drawing::Size(43, 20);
			this->txtMotorDCId->TabIndex = 76;
			// 
			// txtMotorDCName
			// 
			this->txtMotorDCName->Location = System::Drawing::Point(260, 12);
			this->txtMotorDCName->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDCName->Name = L"txtMotorDCName";
			this->txtMotorDCName->Size = System::Drawing::Size(223, 20);
			this->txtMotorDCName->TabIndex = 77;
			// 
			// txtMotorDescripcion
			// 
			this->txtMotorDescripcion->Location = System::Drawing::Point(104, 47);
			this->txtMotorDescripcion->Margin = System::Windows::Forms::Padding(2);
			this->txtMotorDescripcion->Multiline = true;
			this->txtMotorDescripcion->Name = L"txtMotorDescripcion";
			this->txtMotorDescripcion->Size = System::Drawing::Size(379, 28);
			this->txtMotorDescripcion->TabIndex = 79;
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(887, 525);
			this->Controls->Add(this->tabStock);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPOLEA))->EndInit();
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
			   List<TornilloCliente^>^ tornilloxdatos = Service::Queryalltornillos();
			   if (tornilloxdatos != nullptr) {
				   dgvtornillos->Rows->Clear();

				   for (int i = 0; i < tornilloxdatos->Count; i++) {
					   dgvtornillos->Rows->Add(gcnew array<String^> {
						   "" + tornilloxdatos[i]->Id,
							   tornilloxdatos[i]->Name,
							   "" + tornilloxdatos[i]->Stock,
							   "" + tornilloxdatos[i]->UnitaryPrice,
							   tornilloxdatos[i]->Brand,
							   tornilloxdatos[i]->Material
					   });
				   }
			   }
		   }

		   void Showfaja() {
			   List<FajasCliente^>^ fajaxdatos = Service::Queryallfajas();
			   if (fajaxdatos != nullptr) {
				   dgvfajastock->Rows->Clear(); 

				   for (int i = 0; i < fajaxdatos->Count; i++) { 
					   dgvfajastock->Rows->Add(gcnew array<String^> { 
						   "" + fajaxdatos[i]->Id, 
							   fajaxdatos[i]->Name, 
							 //  fajaxdatos[i]->Proveedor,
							   "" + fajaxdatos[i]->UnitaryPrice, 
							   "" + fajaxdatos[i]->Stock, 
							   fajaxdatos[i]->Brand, 
							   fajaxdatos[i]->Tipo, 
							   "" + fajaxdatos[i]->AltoDeGoma, 
							   "" + fajaxdatos[i]->DiametroInter, 
							   "" + fajaxdatos[i]->DiametroExter, 
							   fajaxdatos[i]->Description 
					   });
				   }
			   }
		   }
		   void Showpolea() {
			   List<PoleaCliente^>^ poleaxdatos = Service::Queryallfpoleas();

			   if (poleaxdatos != nullptr) {
				   dgvpolea->Rows->Clear();

				   for (int i = 0; i < poleaxdatos->Count; i++) { 
					   dgvpolea->Rows->Add(gcnew array<String^> { 
						   "" + poleaxdatos[i]->Id, 
							   poleaxdatos[i]->Name, 
							   poleaxdatos[i]->Brand, 
							   "" + poleaxdatos[i]->Stock,
							   "" + poleaxdatos[i]->UnitaryPrice,
							   poleaxdatos[i]->Tipo, // Agregar más atributos según tu estructura de datos 
							   "" + poleaxdatos[i]->DiametroExter,
							   "" + poleaxdatos[i]->DiametroEje,
							   poleaxdatos[i]->Material, 
							   poleaxdatos[i]->Description 
					   }); 
				   } 
			   }
		   }

		   void Showrodamiento() {
			   List<RodamientosCliente^>^ rodamientoxdatos = Service::Queryallrodamientos(); 
			   if (rodamientoxdatos != nullptr) { 
				   dgvrodamiento->Rows->Clear();  

				   for (int i = 0; i < rodamientoxdatos->Count; i++) { 
					   dgvrodamiento->Rows->Add(gcnew array<String^> { 
						   "" + rodamientoxdatos[i]->Id, 
							   rodamientoxdatos[i]->Name, 
							   rodamientoxdatos[i]->Brand,
							   "" + rodamientoxdatos[i]->Stock, 
							   "" + rodamientoxdatos[i]->UnitaryPrice,
							   rodamientoxdatos[i]->Tipo,
							   rodamientoxdatos[i]->Description, 
							
							   "" + rodamientoxdatos[i]->DiametroInter,
							   "" + rodamientoxdatos[i]->DiametroExter,
							   
							   "" + rodamientoxdatos[i]->Ancho
							  
							
					   });
				   }
			   }
		   }
		   void ShowMotorAC() {
			   List<MotoresACCliente^>^ MotorACxDatos = Service::QueryallMotorACStock();
			   if (MotorACxDatos != nullptr) {
				   dgvMotorAC->Rows->Clear();

				   for (int i = 0; i < MotorACxDatos->Count; i++) {
					   dgvMotorAC->Rows->Add(gcnew array<String^> {
						   "" + MotorACxDatos[i]->Id,
							   MotorACxDatos[i]->Name,
							   "" + MotorACxDatos[i]->UnitaryPrice,
							   "" + MotorACxDatos[i]->Stock,
							   MotorACxDatos[i]->Brand, 
							   MotorACxDatos[i]->Potencia, 
							   MotorACxDatos[i]->Description,
							   
							  
							   MotorACxDatos[i]->Frame,
							 
							   MotorACxDatos[i]->Fases,
							   MotorACxDatos[i]->ClaseProteccion
							   
							   // Asegúrate de ajustar según la estructura de tus datos y tu DataGridView (dgvMotorAC)
					   });
				   }
			   }
		   }

		   void ShowMotorDC() {
			   List<MotoresDCCliente^>^ MotorDCxDatos = Service::QueryallMotorDCStock();
			   if (MotorDCxDatos != nullptr) {
				   dgvMotorDC->Rows->Clear(); 

				   for (int i = 0; i < MotorDCxDatos->Count; i++) {
					   dgvMotorDC->Rows->Add(gcnew array<String^> {
						   "" + MotorDCxDatos[i]->Id,
							   MotorDCxDatos[i]->Name,
							   "" + MotorDCxDatos[i]->Stock,
							   "" + MotorDCxDatos[i]->UnitaryPrice,
							   
							   MotorDCxDatos[i]->Brand, 
							   MotorDCxDatos[i]->Voltaje, 
							   MotorDCxDatos[i]->Potencia,
							   "" + MotorDCxDatos[i]->Velocidad ,
							  
							   MotorDCxDatos[i]->Montaje, 
							   MotorDCxDatos[i]->Description 
					   });
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
	if (e->RowIndex >= 0) {
		tornilloId = Int32::Parse(dgvtornillos->Rows[dgvtornillos->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString()); 
		TornilloCliente^ tornillo = Service::Queryalltornillosid(tornilloId);
		//int clienteId = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		//Client^ cliente = Service::Queryallclienteid(clienteId);

		if (tornillo != nullptr) {
			txtidtornillo->Text = Convert::ToString(tornilloId);
			txttornilloname->Text = tornillo->Name;
			txtdescriptornillo->Text = tornillo->Description;
			txtTornillomarca->Text = tornillo->Brand;
			txttornillotipo->Text = tornillo->Tipo;
			txttornilllolongitud->Text = Convert::ToString(tornillo->Longitud);
			txttornillomaterial->Text = tornillo->Material;
			txttornillorosca->Text = tornillo->Rosca;
			txtTornilloPrecioUnitario->Text = Convert::ToString(tornillo->UnitaryPrice);
			txtTornillocantidad->Text = Convert::ToString(tornillo->Stock);

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
	
}
	   String^ GenerateDescription(String^ name, String^ tipo, int longitud, String^ rosca, String^ material, String^ marca) { 
		   return String::Format("Name: {0}, Tipo: {1}, Longitud: {2}mm, Rosca: {3}, Material: {4}, Marca: {5}",
			   name, tipo, longitud, rosca, material, marca);
	   } 

private: System::Void btnaddtornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	// BOTON PARA AGREGAR TORNILLOS
 // BOTON PARA AGREGAR TORNILLOS
	//int idtornillo = Convert::ToInt32(txtidtornillo->Text);
	if (validar_campos_tornillo() == 1) { 
		return;
	}
	String^ nametornillo = txttornilloname->Text;
	// String^ descripciotornillon = txtdescriptornillo->Text;
	String^ marcatornillo = txtTornillomarca->Text;
	// int codigotornillo = Convert::ToInt32(txtmodeltornillo->Text);
	String^ tipotornillo = txttornillotipo->Text;
	int longitudtornillo = Convert::ToInt32(txttornilllolongitud->Text);
	String^ materialtornillo = txttornillomaterial->Text;
	String^ tiporoscatornillo = txttornillorosca->Text;
	double preciounittornillo = Convert::ToInt32(txtTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtTornillocantidad->Text);

	TornilloCliente^ tornillo = gcnew TornilloCliente();
	// tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;

	// Generar la descripción concatenada
	tornillo->Description = GenerateDescription(nametornillo, tipotornillo, longitudtornillo, tiporoscatornillo, materialtornillo, marcatornillo);

	tornillo->Brand = marcatornillo;
	tornillo->Tipo = tipotornillo;
	tornillo->Longitud = longitudtornillo;
	// tornillo->Punta = puntatornillo;
	tornillo->Material = materialtornillo;
	tornillo->Rosca = tiporoscatornillo;
	tornillo->UnitaryPrice = preciounittornillo;
	tornillo->Stock = cantidadtornillo;

	if (pbTornilloPhoto != nullptr && pbTornilloPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbTornilloPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		tornillo->Photo = ms->ToArray();
	}
	 
	// FAJAS DATOS PARA EL GUI Y CRUD
	Service::Addtornillos(tornillo);
	showtornillo();
	ClearTornilloControls(); 
}
	   private: int tornilloId = 0;
 
private: System::Void btnedittornillo_Click(System::Object^ sender, System::EventArgs^ e) {
	//EDITAR TORNILLO
	if (validar_campos_tornillo() == 1) {
		return;
	} 
	int idtornillo = Convert::ToInt32(txtidtornillo->Text);

	String^ nametornillo = txttornilloname->Text;
	String^ descripciotornillon = txtdescriptornillo->Text;

	String^ marcatornillo = txtTornillomarca->Text;
	//int codigotornillo = Convert::ToInt32(txtmodeltornillo->Text);
	String^ tipotornillo = txttornillotipo->Text;
	int longitudtornillo = Convert::ToInt32(txttornilllolongitud->Text);

	String^ materialtornillo = txttornillomaterial->Text;
	String^ tiporoscatornillo = txttornillorosca->Text;

	double preciounittornillo = Convert::ToInt32(txtTornilloPrecioUnitario->Text);
	int cantidadtornillo = Convert::ToInt32(txtTornillocantidad->Text);
	TornilloCliente^ tornillo = gcnew TornilloCliente();
	tornillo->Id = idtornillo;
	tornillo->Name = nametornillo;
	tornillo->Description = descripciotornillon;
	tornillo->Brand = marcatornillo;

	tornillo->Tipo = tipotornillo;
	tornillo->Longitud = longitudtornillo;
	//tornillo->Punta = puntatornillo;
	tornillo->Material = materialtornillo;
	tornillo->Rosca = tiporoscatornillo;

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
	//int idtornillo = Convert::ToInt32(txtidtornillo->Text); 
	//int idfaja = Convert::ToInt32(txtidfajastock->Text);
	//Service::Deletetornillos(idtornillo); 
	 int id = Convert::ToInt32(txtidtornillo->Text);
	Service::Deletetornillos(id);
	
	//Service::Deletefajas(idfaja);
	showtornillo(); 
	ClearTornilloControls();
	//Showfaja();
}
private: System::Void btnaddfaja_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validar campos de faja (debes implementar la función validar_campos_faja)
	if (validar_campos_faja() == 1) {
		return;
	}

	// Obtener los valores de los controles de la interfaz
	String^ namefaja = txtnameFAJA->Text;
	String^ marcafaja = txtmarcaFAJA->Text;
	String^ descripcionfaja = txtdescripFAJA->Text;
	String^ tipofaja = txttipoFAJA->Text;
	double altodegomafaja = Convert::ToInt32(txtaltogomaFAJA->Text);
	double diametrointernofaja = Convert::ToInt32(txtdiametrointerFAJA->Text);
	double diametroexternofaja = Convert::ToInt32(txtdiametroexterFAJA->Text);
	//String^ proveedordefaja = txtproveedordefaja->Text;
	double preciounitariofaja = Convert::ToDouble(txtprecioFAJA->Text);
	int cantidadfaja = Convert::ToInt32(txtcantidadFAJA->Text);

	// Crear una instancia de FajasCliente
	FajasCliente^ faja = gcnew FajasCliente();
	faja->Name = namefaja;
	faja->Brand = marcafaja;
	faja->Description = descripcionfaja;
	faja->Tipo = tipofaja;
	faja->AltoDeGoma = altodegomafaja;
	faja->DiametroInter = diametrointernofaja;
	faja->DiametroExter = diametroexternofaja;
	//faja->Proveedor = proveedordefaja;
	faja->UnitaryPrice = preciounitariofaja;
	faja->Stock = cantidadfaja;

	// Guardar la foto si está disponible
	if (pbFajasPhoto != nullptr && pbFajasPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbFajasPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		faja->Photo = ms->ToArray();
	}

	// Llamar al servicio para agregar la faja
	Service::Addfajas(faja);

	// Mostrar la lista actualizada de fajas y limpiar los controles
	Showfaja();
	ClearFAJAControls();  // Implementa esta función para limpiar los controles
}
private: System::Void btneditfaja_Click(System::Object^ sender, System::EventArgs^ e) {
	// EDITAR FAJA
	if (validar_campos_faja() == 1) {
		return;
	}

	int idfaja = Convert::ToInt32(txtidFAJAS->Text);
	String^ namefaja = txtnameFAJA->Text;
	//String^ proveedorfaja = txtproveedorfaja->Text;
	double preciounitfaja = Convert::ToDouble(txtprecioFAJA->Text);
	int cantidadfaja = Convert::ToInt32(txtcantidadFAJA->Text);
	String^ marcafaja = txtmarcaFAJA->Text;
	String^ tipofaja = txttipoFAJA->Text;
	double altodegomafaja = Convert::ToInt32(txtaltogomaFAJA->Text); 
	double diametrointernofaja = Convert::ToInt32(txtdiametrointerFAJA->Text); 
	double diametroexternofaja = Convert::ToInt32(txtdiametroexterFAJA->Text); 
	String^ descripcionfaja = txtdescripFAJA->Text;

	FajasCliente^ faja = gcnew FajasCliente();
	faja->Id = idfaja;
	faja->Name = namefaja;
	//faja->Proveedor = proveedorfaja;
	faja->UnitaryPrice = preciounitfaja;
	faja->Stock = cantidadfaja;
	faja->Brand = marcafaja;
	faja->Tipo = tipofaja;
	faja->AltoDeGoma = altodegomafaja;
	faja->DiametroInter = diametrointernofaja;
	faja->DiametroExter = diametroexternofaja;
	faja->Description = descripcionfaja;

	if (pbFajasPhoto != nullptr && pbFajasPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbFajasPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		faja->Photo = ms->ToArray();
	}
	Service::Updatefajas(faja);

	Showfaja();
}
private: System::Void btndeletefaja_Click(System::Object^ sender, System::EventArgs^ e) {
	//ELIMINAR FAJA
	//int idtornillo = Convert::ToInt32(txtidtornillo->Text);
	int idfaja = Convert::ToInt32(txtidFAJAS->Text);
	//Service::Deletetornillos(idtornillo);
	Service::Deletefajas(idfaja);
	//showtornillo();
	Showfaja();
	ClearFAJAControls();
	
}
private: System::Void dgvfajastock_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//dgvFAJAS
	if (e->RowIndex >= 0) {
		int fajaId = Int32::Parse(dgvfajastock->Rows[dgvfajastock->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		FajasCliente^ faja = Service::Queryallfajasid(fajaId);

		if (faja != nullptr) {
			txtidFAJAS->Text = Convert::ToString(faja->Id);
			txtnameFAJA->Text = faja->Name;
			//txtproveedorfaja->Text = faja->Proveedor;
			txtcantidadFAJA->Text = Convert::ToString(faja->Stock);  
			txtprecioFAJA->Text = Convert::ToString(faja->UnitaryPrice);
			
			txtmarcaFAJA->Text = faja->Brand;
			txttipoFAJA->Text = faja->Tipo;
			txtaltogomaFAJA->Text = Convert::ToString(faja->AltoDeGoma); 
			txtdiametrointerFAJA->Text = Convert::ToString(faja->DiametroInter); 
			txtdiametroexterFAJA->Text = Convert::ToString(faja->DiametroExter);
			txtdescripFAJA->Text = faja->Description;

			if (faja->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(faja->Photo);
				pbFajasPhoto->Image = Image::FromStream(ms);
			}
			else {
				pbFajasPhoto->Image = nullptr;
				pbFajasPhoto->Invalidate();
			}
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//AGREAGAR POLEA
		//int idPolea = Convert::ToInt32(txtidpolea->Text);
	if (validar_campos_polea() == 1) {
		return;
	}
		String^ namePolea = txtpoleaname->Text;
		String^ marcaPolea = txtmarcaPOLEA->Text;
		String^ descripcionPolea = txtdescripPOLEA->Text;
		String^ tipoPolea = txttipoPOLEA->Text;
		double diametroExternoPolea = Convert::ToDouble(txtdiametroexterPOLEA->Text);
		String^ materialPolea = txtmaterialPOLEA->Text;
		double diametroEjePolea = Convert::ToDouble(txtejePOLEA->Text);
		double preciounitarioPolea = Convert::ToDouble(txtprecioPOLEA->Text);
		int stockPolea = Convert::ToInt32(txtpoleacantidad->Text);

		// Crear una instancia de PoleaCliente
		PoleaCliente^ polea = gcnew PoleaCliente();
		//polea->Id = idPolea;
		polea->Name = namePolea;
		polea->Brand = marcaPolea;
		polea->Description = descripcionPolea;
		polea->Tipo = tipoPolea;
		polea->DiametroExter = diametroExternoPolea;
		polea->Material = materialPolea;
		polea->DiametroEje = diametroEjePolea;
		polea->UnitaryPrice = preciounitarioPolea;
		polea->Stock = stockPolea;

		// Guardar la foto si está disponible
		if (pbPOLEA != nullptr && pbPOLEA->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPOLEA->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			polea->Photo = ms->ToArray();
		}

		// Llamar al servicio para agregar la polea
		Service::Addpoleas(polea);

		// Mostrar la lista actualizada de poleas y limpiar los controles
		Showpolea();
		//ClearPoleaControls(); // Suponiendo que este método limpia los campos de la interfaz para la polea
	

}
private: System::Void editpoleastock_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validar_campos_polea() == 1) {
		return;
	}
	int idPolea = Convert::ToInt32(txtidpolea->Text); 
	String^ namePolea = txtpoleaname->Text; 
	String^ marcaPolea = txtmarcaPOLEA->Text; 
	String^ descripcionPolea = txtdescripPOLEA->Text; 
	String^ tipoPolea = txttipoPOLEA->Text; 
	double diametroExternoPolea = Convert::ToDouble(txtdiametroexterPOLEA->Text); 
	String^ materialPolea = txtmaterialPOLEA->Text; 
	double diametroEjePolea = Convert::ToDouble(txtejePOLEA->Text); 
	double preciounitarioPolea = Convert::ToDouble(txtprecioPOLEA->Text); 
	int stockPolea = Convert::ToInt32(txtpoleacantidad->Text); 

	// Crear una instancia de PoleaCliente
	PoleaCliente^ polea = gcnew PoleaCliente(); 
	polea->Id = idPolea; 
	polea->Name = namePolea; 
	polea->Brand = marcaPolea; 
	polea->Description = descripcionPolea; 
	polea->Tipo = tipoPolea; 
	polea->DiametroExter = diametroExternoPolea; 
	polea->Material = materialPolea; 
	polea->DiametroEje = diametroEjePolea; 
	polea->UnitaryPrice = preciounitarioPolea; 
	polea->Stock = stockPolea; 


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
	ClearpoleaControls();
	btnaddPOLEA -> Enabled= true; 
}
private: System::Void dgvpolea_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	 btnaddPOLEA -> Enabled = false; 
	 btneditarPOLEA->Enabled = true;
	 btndeletepoleastock->Enabled = true;
		int poleaId = Int32::Parse(dgvpolea->Rows[dgvpolea->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString()); 
		PoleaCliente^ polea = Service::Queryallpoleasid(poleaId); 

		if (polea != nullptr) {
			txtidpolea->Text = Convert::ToString(polea->Id); 
			txtpoleaname->Text = polea->Name; 
			txtpoleacantidad->Text = Convert::ToString(polea->Stock); 
			txtprecioPOLEA->Text = Convert::ToString(polea->UnitaryPrice);
			txttipoPOLEA->Text = polea->Tipo;
			txtdiametroexterPOLEA->Text = Convert::ToString(polea->DiametroExter);
			txtmaterialPOLEA->Text = polea->Material;
			txtdescripPOLEA->Text = polea->Description;
			txtmarcaPOLEA->Text = polea->Brand;
			txtejePOLEA ->Text = Convert::ToString(polea->DiametroEje);

			if (polea->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(polea->Photo);
				pbPOLEA->Image = Image::FromStream(ms);
			}
			else {
				pbPOLEA->Image = nullptr;
				pbPOLEA->Invalidate();
			}
		}
	

}
private: System::Void btnaddrodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	//AGREGAR RODAMIENTO 
// Agregar Rodamiento
	if (validar_campos_rodamientos() == 1) {
		return;
	}
	String^ namerodamiento = txtrodamientoname->Text;
	String^ descripcionrodamiento = txtdescripRODAMIE->Text;
	String^ marcarodamiento = txtmarcaRODA->Text;
	double diametrointernorodamiento = Convert::ToDouble(txtdinterRODA->Text); 
	double diametroexternorodamiento = Convert::ToDouble(txtdexternRODA->Text); 
	int cantidadrodamiento = Convert::ToInt32(txtcantidadrodamiento->Text); 
	double anchorodamiento = Convert::ToDouble(txtanchoRODA->Text);
	String^ tiporodamiento = txttipoRODA->Text;
	double preciounitrodamiento = Convert::ToDouble(txtpreciorodamiento->Text);
	array<Byte>^ photorodamiento = nullptr;

	// Obtener la foto
	if (pbRodamientosPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbRodamientosPhoto->Image->Save(ms, pbRodamientosPhoto->Image->RawFormat);
		photorodamiento = ms->ToArray();
	}

	RodamientosCliente^ rodamiento = gcnew RodamientosCliente();
	rodamiento->Name = namerodamiento;
	rodamiento->Description = descripcionrodamiento;
	rodamiento->Brand = marcarodamiento;
	rodamiento->DiametroInter = diametrointernorodamiento;
	rodamiento->DiametroExter = diametroexternorodamiento;
	rodamiento->Stock = cantidadrodamiento;
	rodamiento->Ancho = anchorodamiento;
	rodamiento->Tipo = tiporodamiento;
	rodamiento->UnitaryPrice = preciounitrodamiento;
	rodamiento->Photo = photorodamiento;

	// Llamar al servicio para agregar el rodamiento
	Service::Addrodamientos(rodamiento);
	Showrodamiento();
}
private: System::Void btneditrodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validar_campos_rodamientos() == 1) {
		return;
	}
	int idrodamiento = Convert::ToInt32(txtidrodamiento->Text);
	String^ namerodamiento = txtrodamientoname->Text;
	String^ marcarodamiento = txtmarcaRODA->Text;
	int cantidadrodamiento = Convert::ToInt32(txtcantidadrodamiento->Text);
	double preciounitrodamiento = Convert::ToDouble(txtpreciorodamiento->Text);
	String^ tiporodamiento = txttipoRODA->Text;
	String^ descripcionrodamiento = txtdescripRODAMIE->Text;
	//	String^ marcarodamiento = txtmarcaRODA->Text;
	double diametrointernorodamiento = Convert::ToDouble(txtdinterRODA->Text);
	double diametroexternorodamiento = Convert::ToDouble(txtdexternRODA->Text);
	double anchoredamiento = Convert::ToDouble(txtanchoRODA->Text);


	RodamientosCliente^ rodamiento = gcnew RodamientosCliente();
	rodamiento->Id = idrodamiento;
	rodamiento->Name = namerodamiento;
	rodamiento->Description = descripcionrodamiento;
	rodamiento->Brand = marcarodamiento;
	rodamiento->DiametroInter = diametrointernorodamiento;
	rodamiento->DiametroExter = diametroexternorodamiento;
	rodamiento->Stock = cantidadrodamiento;
	rodamiento->Ancho = anchoredamiento;
	rodamiento->Tipo = tiporodamiento;
	rodamiento->UnitaryPrice = preciounitrodamiento;

	Service::Updaterodamientos(rodamiento);
	Showrodamiento();

}
private: System::Void btndeleterodamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	int idroda = Convert::ToInt32(txtidrodamiento->Text);
	//Service::Deletetornillos(idtornillo);
	Service::Deleterodamientos(idroda);
	//showtornillo();
	Showrodamiento();
	Clearrodamiento();

}
private: System::Void dgvrodamiento_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
		int idroda = Int32::Parse(dgvrodamiento->Rows[dgvrodamiento->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		RodamientosCliente^ rodamiento = Service::Queryallrodamientosid(idroda);

		if (rodamiento != nullptr) {
			txtidrodamiento->Text = Convert::ToString(rodamiento->Id);
			txtrodamientoname->Text = rodamiento->Name;
			txtmarcaRODA->Text = rodamiento->Brand;
			txtcantidadrodamiento->Text = Convert::ToString(rodamiento->Stock);
			txtpreciorodamiento->Text = Convert::ToString(rodamiento->UnitaryPrice);
			txttipoRODA->Text = rodamiento->Tipo;
			txtdescripRODAMIE->Text = rodamiento->Description;
			
			txtdinterRODA->Text = Convert::ToString(rodamiento->DiametroInter);
			txtdexternRODA->Text = Convert::ToString(rodamiento->DiametroExter);
			txtanchoRODA->Text = Convert::ToString(rodamiento->Ancho);
			

			if (rodamiento->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(rodamiento->Photo);
				pbRodamientosPhoto->Image = Image::FromStream(ms);
			}
			else {
				pbRodamientosPhoto->Image = nullptr;
				pbRodamientosPhoto->Invalidate();
			}
		}	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	// AGREGAR MOTOR AC
	//int idMotorAC = Convert::ToInt32(txtMotorACId->Text);
	if (validar_campos_motorAC() == 1) {
		return;
	}
	String^ NameMotorAC = txtMotorACName->Text;
	String^ DescripcionMotorAC = txtMotorACDescription->Text;  // Asegúrate de tener un campo de texto para la descripción
	String^ MarcaMotorAC = txtMotorACBrand->Text;  // Asegúrate de tener un campo de texto para la marca
	String^ FrameMotorAC = txtMotorACFrame->Text;  // Asegúrate de tener un campo de texto para el frame
	String^ PotenciaMotorAC = txtMotorACPotencia->Text;  // Asegúrate de tener un campo de texto para la potencia
	String^ FasesMotorAC = txtMotorACFases->Text;  // Asegúrate de tener un campo de texto para las fases
	String^ ClaseProteccionMotorAC = txtMotorACTipoProteccion->Text;  // Asegúrate de tener un campo de texto para la clase de protección
	double PrecioUnitarioMotorAC = Convert::ToDouble(txtMotorACPrecioUnitario->Text); 
	int CantidadMotorAC = Convert::ToInt32(txtMotorACCantidad->Text); 
	array<Byte>^ pbMotorACPhoto = nullptr;  // Asegúrate de manejar la foto si es necesario

	MotoresACCliente^ MotorAC = gcnew MotoresACCliente();

	//MotorAC->Id = idMotorAC;
	MotorAC->Name = NameMotorAC;
	MotorAC->Description = DescripcionMotorAC;
	MotorAC->Brand = MarcaMotorAC;
	MotorAC->Frame = FrameMotorAC;
	MotorAC->Potencia = PotenciaMotorAC;
	MotorAC->Fases = FasesMotorAC;
	MotorAC->ClaseProteccion = ClaseProteccionMotorAC;
	MotorAC->UnitaryPrice = PrecioUnitarioMotorAC;
	MotorAC->Stock = CantidadMotorAC;
	MotorAC->Photo = pbMotorACPhoto;  // Asegúrate de asignar la foto si es necesario

	// Agregar el motor AC utilizando el servicio adecuado (Service::AddMotorACStock)
	Service::AddMotorACStock(MotorAC);

	// Mostrar los motores AC actualizados
	ShowMotorAC();
}
private: System::Void btnEditMotorAC_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validar_campos_motorAC() == 1) {
		return;
	}
	int idMotorAC = Convert::ToInt32(txtMotorACId->Text);
	String^ nameMotorAC = txtMotorACName->Text;
	String^ marcaMotorAC = txtMotorACBrand->Text;
	int cantidadMotorAC = Convert::ToInt32(txtMotorACCantidad->Text);
	double precioUnitarioMotorAC = Convert::ToDouble(txtMotorACPrecioUnitario->Text);
	String^ frameMotorAC = txtMotorACFrame->Text;
	String^ potenciaMotorAC = txtMotorACPotencia->Text;
	String^ clasesProteccionMotorAC = txtMotorACTipoProteccion->Text;
	String^ fasesMotorAC = txtMotorACFases->Text;
	String^ descripcionMotorAC = txtMotorACDescription->Text;

	MotoresACCliente^ motorAC = gcnew MotoresACCliente();
	motorAC->Id = idMotorAC;
	motorAC->Name = nameMotorAC;
	motorAC->Brand = marcaMotorAC;
	motorAC->Stock = cantidadMotorAC; 
	motorAC->UnitaryPrice = precioUnitarioMotorAC; 
	motorAC->Frame = frameMotorAC; 
	motorAC->Potencia = potenciaMotorAC; 
	motorAC->ClaseProteccion = clasesProteccionMotorAC; 
	motorAC->Fases = fasesMotorAC; 
	motorAC->Description = descripcionMotorAC; 

	Service::UpdateMotorACStock(motorAC); 
	ShowMotorAC(); 

}
private: System::Void btnDeteleMotorAC_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMotorAC = Convert::ToInt32(txtMotorACId->Text);
	//Service::Deletetornillos(idtornillo);
	Service::DeleteMotorACStock(IdMotorAC);
	//showtornillo();
	ShowMotorAC();
	ClearMotorAC();
}
private: System::Void btnAgregarMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (validar_campos_motorDC() == 1) {
	//	return;
//	}
	if (validar_campos_motorDC() == 1) {
		return;
	}
	// Obtener los valores de los campos del formulario
	String^ nameMotorDC = txtMotorDCName->Text;
	String^ descriptionMotorDC = txtMotorDescripcion->Text;
	String^ brandMotorDC = txtMotorDCMarca->Text;
	String^ potenciaMotorDC = txtMotorDCPotencia->Text;
	double velocidadMotorDC = Convert::ToDouble(txtMotorDCVelocidad->Text);
	String^ voltajeMotorDC = txtMotorDCVoltaje->Text;
	String^ montajeMotorDC = txtMotorDCMontaje->Text;
	double unitaryPriceMotorDC = Convert::ToDouble(txtMotorDCPrecioUniario->Text);
	int stockMotorDC = Convert::ToInt32(txtMotorDCStock->Text);

	// Crear una nueva instancia de MotoresDCCliente
	MotoresDCCliente^ motorDC = gcnew MotoresDCCliente();

	// Asignar los valores a las propiedades de MotoresDCCliente
	motorDC->Name = nameMotorDC;
	motorDC->Description = descriptionMotorDC;
	motorDC->Brand = brandMotorDC;
	motorDC->Potencia = potenciaMotorDC;
	motorDC->Velocidad = velocidadMotorDC;
	motorDC->Voltaje = voltajeMotorDC;
	motorDC->Montaje = montajeMotorDC;
	motorDC->UnitaryPrice = unitaryPriceMotorDC;
	motorDC->Stock = stockMotorDC;

	// Asignar la imagen si existe
	if (pbMotorDCPhto != nullptr && pbMotorDCPhto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbMotorDCPhto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		motorDC->Photo = ms->ToArray();
	}

	// Llamar al servicio para agregar el motor DC
	Service::AddMotorDCStock(motorDC);

	// Actualizar la lista de motores DC en la interfaz de usuario
	ShowMotorDC();

	// Limpiar los controles del formulario
	ClearMotorDC();

}
private: System::Void btnEditarMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validar_campos_motorDC() == 1) {
		return;
	}
	int idMotorDC = Convert::ToInt32(txtMotorDCId->Text);
	String^ nameMotorDC = txtMotorDCName->Text;
	String^ brandMotorDC = txtMotorDCMarca->Text;
	String^ potenciaMotorDC = txtMotorDCPotencia->Text;
	double velocidadMotorDC = Convert::ToDouble(txtMotorDCVelocidad->Text);
	String^ voltajeMotorDC = txtMotorDCVoltaje->Text;
	String^ montajeMotorDC = txtMotorDCMontaje->Text;
	double unitaryPriceMotorDC = Convert::ToDouble(txtMotorDCPrecioUniario->Text);
	int stockMotorDC = Convert::ToInt32(txtMotorDCStock->Text);
	String^ descriptionMotorDC = txtMotorDescripcion->Text;

	// Crear una instancia de MotoresDCCliente
	MotoresDCCliente^ motorDC = gcnew MotoresDCCliente();
	motorDC->Id = idMotorDC;
	motorDC->Name = nameMotorDC;
	motorDC->Brand = brandMotorDC;
	motorDC->Potencia = potenciaMotorDC;
	motorDC->Velocidad = velocidadMotorDC;
	motorDC->Voltaje = voltajeMotorDC;
	motorDC->Montaje = montajeMotorDC;
	motorDC->UnitaryPrice = unitaryPriceMotorDC;
	motorDC->Stock = stockMotorDC;
	motorDC->Description = descriptionMotorDC;

	// Llamar al servicio para actualizar el motor DC
	Service::UpdateMotorDCStock(motorDC);

	// Actualizar la lista de motores DC en la interfaz de usuario
	ShowMotorDC();

	// Limpiar los controles del formulario después de la edición
	ClearMotorDC();
}
private: System::Void btnDeleteMotorDC_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMotorDC = Convert::ToInt32(txtMotorDCId->Text);
	//Service::Deletetornillos(idtornillo);
	Service::DeleteMotorDCStock(IdMotorDC);
	//showtornillo();
	ShowMotorDC();
	ClearMotorDC();
}
private: System::Void dgvMotorAC_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int idMotorAC = Int32::Parse(dgvMotorAC->Rows[dgvMotorAC->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

	// Obtener los datos del Motor AC desde el servicio
	MotoresACCliente^ motorAC = Service::QueryallMotorACStockById(idMotorAC);

	if (motorAC != nullptr) {
		// Llenar los campos del formulario con los datos del Motor AC
		txtMotorACId->Text = Convert::ToString(motorAC->Id);
		txtMotorACName->Text = motorAC->Name;
		txtMotorACBrand->Text = motorAC->Brand;
		txtMotorACCantidad->Text = Convert::ToString(motorAC->Stock);
		txtMotorACPrecioUnitario->Text = Convert::ToString(motorAC->UnitaryPrice);
		txtMotorACFrame->Text = motorAC->Frame;
		txtMotorACPotencia->Text = motorAC->Potencia;
		txtMotorACTipoProteccion->Text = motorAC->ClaseProteccion;
		txtMotorACFases->Text = motorAC->Fases;
		txtMotorACDescription->Text = motorAC->Description;

		// Verificar y mostrar la foto del Motor AC si existe
		if (motorAC->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(motorAC->Photo); 
			pbMotorACPhoto->Image = Image::FromStream(ms); 
		}
		else {
			pbMotorACPhoto->Image = nullptr; 
			pbMotorACPhoto->Invalidate(); 
		}
	}

}
private: System::Void dgvMotorDC_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int idMotorDC = Int32::Parse(dgvMotorDC->Rows[dgvMotorDC->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

	// Obtener los datos del Motor DC desde el servicio
	MotoresDCCliente^ motorDC = Service::QueryallMotorDCStockById(idMotorDC);

	if (motorDC != nullptr) {
		// Llenar los campos del formulario con los datos del Motor DC
		txtMotorDCId->Text = Convert::ToString(motorDC->Id);
		txtMotorDCName->Text = motorDC->Name;
		txtMotorDCMarca->Text = motorDC->Brand;
		txtMotorDCPotencia->Text = Convert::ToString(motorDC->Potencia);
		txtMotorDCVelocidad->Text = Convert::ToString(motorDC->Velocidad);
		txtMotorDCVoltaje->Text = Convert::ToString(motorDC->Voltaje);
		txtMotorDCMontaje->Text = motorDC->Montaje;
		txtMotorDCPrecioUniario->Text = Convert::ToString(motorDC->UnitaryPrice);
		txtMotorDCStock->Text = Convert::ToString(motorDC->Stock);
		txtMotorDescripcion->Text = motorDC->Description;

		// Verificar y mostrar la foto del Motor DC si existe
		if (motorDC->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(motorDC->Photo);
			pbMotorDCPhto->Image = Image::FromStream(ms);
		}
		else {
			pbMotorDCPhto->Image = nullptr;
			pbMotorDCPhto->Invalidate();
		}
	}

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
	   void ClearTornilloControls() {
		   txttornilloname->Text = "";
		   txtTornillocantidad->Text = "";
		   txtTornilloPrecioUnitario->Text = "";
		   txtdescriptornillo->Text = "";
		   txtTornillomarca->Text = "";
		   txttornillotipo->Text = "";
		   txttornilllolongitud->Text = "";
		   txttornillomaterial->Text = "";
		   txttornillorosca->Text = "";
		   pbTornilloPhoto->Image = nullptr; // Limpiar la imagen del PictureBox
	   }

	   void ClearFAJAControls() {
		   txtnameFAJA->Text = "";
		   txtcantidadFAJA->Text = "";
		   txtprecioFAJA->Text = "";
		   txtdescripFAJA->Text = "";
		   txtmarcaFAJA->Text = "";
		   txttipoFAJA->Text = "";
		   txtaltogomaFAJA->Text = "";
		   txtdiametrointerFAJA->Text = "";
		   txtdiametroexterFAJA->Text = "";
		   pbFajasPhoto->Image = nullptr; // Limpiar la imagen del PictureBox
	   } 
	   void ClearpoleaControls() {
		   txtidpolea->Text = "";
		   txtpoleaname->Text = "";
		//   txtproveedorpolea->Text = "";
		   txtprecioPOLEA->Text = "";
		   txtpoleacantidad->Text = "";
		   txttipoPOLEA->Text = "";
		   txtdiametroexterPOLEA->Text = "";
		   txtmaterialPOLEA->Text = "";
		   txtejePOLEA->Text = "";
		   txtdescripPOLEA->Text = "";
		   pbPOLEA->Image = nullptr; // Limpiar la imagen del PictureBox si es necesario
	   }
	   void Clearrodamiento () {
		   txtidrodamiento->Text = "";
		   txtrodamientoname->Text = "";
		   //   txtproveedorpolea->Text = "";
		   txtpreciorodamiento->Text = "";
		   txtcantidadrodamiento->Text = "";
		   txttipoRODA->Text = "";
		   txtdexternRODA->Text = "";
		   txtdinterRODA->Text = "";
		   txtanchoRODA->Text = "";
		   txtmarcaRODA->Text = "";
		   txtdescripRODAMIE->Text = "";
		   pbRodamientosPhoto->Image = nullptr; // Limpiar la imagen del PictureBox si es necesario
	   }
	   void ClearMotorAC() {
		   txtMotorACId->Text = "";
		   txtMotorACName->Text = "";
		   txtMotorACBrand->Text = "";
		   txtMotorACCantidad->Text = "";
		   txtMotorACPrecioUnitario->Text = "";
		   txtMotorACFrame->Text = "";
		   txtMotorACPotencia->Text = "";
		   txtMotorACTipoProteccion->Text = "";
		   txtMotorACFases->Text = "";
		   txtMotorACDescription->Text = "";
		   pbMotorACPhoto->Image = nullptr; // Limpiar la imagen del PictureBox si es necesario
	   }
	   void ClearMotorDC() {
		   txtMotorDCId->Text = "";
		   txtMotorDCName->Text = "";
		   txtMotorDCMarca->Text = "";
		   txtMotorDCPotencia->Text = "";
		   txtMotorDCVelocidad->Text = "";
		   txtMotorDCVoltaje->Text = "";
		   txtMotorDCMontaje->Text = "";
		   txtMotorDCPrecioUniario->Text = "";
		   txtMotorDCStock->Text = "";
		   txtMotorDescripcion->Text = "";
		   pbMotorDCPhto->Image = nullptr; // Limpiar la imagen del PictureBox si es necesario
	   }
	   int validar_campos_tornillo() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txttornilloname->Text) || 
			   String::IsNullOrWhiteSpace(txtTornillocantidad->Text) || 
			   String::IsNullOrWhiteSpace(txtTornilloPrecioUnitario->Text) || 
			   String::IsNullOrWhiteSpace(txtdescriptornillo->Text) || 
			   String::IsNullOrWhiteSpace(txtTornillomarca->Text) || 
			   String::IsNullOrWhiteSpace(txttornillotipo->Text) || 
			   String::IsNullOrWhiteSpace(txttornilllolongitud->Text) || 
			   String::IsNullOrWhiteSpace(txttornillomaterial->Text) || 
			   String::IsNullOrWhiteSpace(txttornillorosca->Text)) { 

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }
	   int validar_campos_faja() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txtnameFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtcantidadFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtprecioFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtdescripFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtmarcaFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txttipoFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtaltogomaFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtdiametrointerFAJA->Text) ||
			   String::IsNullOrWhiteSpace(txtdiametroexterFAJA->Text) ) {

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }
	   int validar_campos_polea() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txtpoleaname->Text) ||
			   String::IsNullOrWhiteSpace(txtpoleacantidad->Text) ||
			   String::IsNullOrWhiteSpace(txtprecioPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txtdescripPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txtmarcaPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txttipoPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txtmaterialPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txtdiametroexterPOLEA->Text) ||
			   String::IsNullOrWhiteSpace(txtejePOLEA->Text)) {

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }
	   int validar_campos_rodamientos() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txtrodamientoname->Text) ||
			   String::IsNullOrWhiteSpace(txtcantidadrodamiento->Text) ||
			   String::IsNullOrWhiteSpace(txtpreciorodamiento->Text) ||
			   String::IsNullOrWhiteSpace(txtdescripRODAMIE->Text) ||
			   String::IsNullOrWhiteSpace(txtmarcaRODA->Text) ||
			   String::IsNullOrWhiteSpace(txttipoRODA->Text) ||
			   String::IsNullOrWhiteSpace(txtdexternRODA->Text) ||
			   String::IsNullOrWhiteSpace(txtdinterRODA->Text) ||
			   String::IsNullOrWhiteSpace(txtanchoRODA->Text)) {

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }
	   int validar_campos_motorAC() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txtMotorACName->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACCantidad->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACPrecioUnitario->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACDescription->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACBrand->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACPotencia->Text) ||  
			   String::IsNullOrWhiteSpace(txtMotorACFrame->Text) || 
			   String::IsNullOrWhiteSpace(txtMotorACFases->Text) ||  
			   String::IsNullOrWhiteSpace(txtMotorACTipoProteccion->Text)) { 

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }
	   int validar_campos_motorDC() {
		   // Verificar que los cuadros de texto estén completos
		   if (String::IsNullOrWhiteSpace(txtMotorDCName->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCStock->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCPrecioUniario->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDescripcion->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCMarca->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCMontaje->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCPotencia->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCVelocidad->Text) ||
			   String::IsNullOrWhiteSpace(txtMotorDCVoltaje->Text)) {

			   // Mostrar cuadro de mensaje
			   MessageBox::Show("Por favor, complete todos los campos antes de agregar.", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return 1;
		   }
		   else {
			   return 0;
		   }
	   }

	   //TORNILLOS
private: System::Void btnlimpiartext_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearTornilloControls();
	
	btnaddtornillo->Enabled = true;
	btndeletetornillo->Enabled = true;
	btnedittornillo->Enabled = false; 

}
	   //FAJAS
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearFAJAControls();

	btnaddfaja->Enabled = true; 
	btndeletefaja->Enabled = true; 
	btneditfaja->Enabled = false; 
}
private: System::Void dgvfajastock_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	ClearpoleaControls(); 

	btnaddPOLEA->Enabled = true; 
	btndeletepoleastock->Enabled = true; 
	btneditarPOLEA->Enabled = false; 
}
private: System::Void btnlimpiarRODA_Click(System::Object^ sender, System::EventArgs^ e) {
	Clearrodamiento();

	btnaddrodamiento->Enabled = true;
	btndeleterodamiento->Enabled = true;
	btneditrodamiento->Enabled = false;

}
private: System::Void btnlimpiarMAC_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearMotorAC();

	btnaddMAC->Enabled = true;
	btnDeteleMotorAC->Enabled = true;
	btnEditMotorAC->Enabled = false;
}
private: System::Void btnlimpiarMOTORDC_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearMotorDC();


	btnAgregarMotorDC->Enabled = true;
	btnDeleteMotorDC->Enabled = true;
	btnEditarMotorDC->Enabled = false;
}
};
}
