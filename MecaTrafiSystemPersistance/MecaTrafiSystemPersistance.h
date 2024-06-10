#pragma once

using namespace System;
using namespace MecaTrafiSystemModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace MecaTrafiSystemPersistance {
	public ref class Persistance
	{
	private:
		//FUNCIONES DE CRUD
		static void PersistTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadTextFile(String^ fileName);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);
		static SqlConnection^ GetConnection();

		//BASE DATOS COMPONENTES - STOCK
		static List <MechanicComponent^>^ motorACDB = gcnew List <MechanicComponent^>();
		static List <MechanicComponent^>^ motorDCDB = gcnew List <MechanicComponent^>();
		static List <MechanicComponent^>^ tornillosDB = gcnew List <MechanicComponent^>();
		static List <MechanicComponent^>^ fajasDB = gcnew List <MechanicComponent^>();
		static List <MechanicComponent^>^ poleaDB = gcnew List <MechanicComponent^>();
		static List <MechanicComponent^>^ rodamientoDB = gcnew List <MechanicComponent^>();
		static List<Employee^>^ employeeListDB = gcnew List<Employee^>();
		static List <Client^>^ clientlistdatos = gcnew List <Client^>();

		//BASE DATOS LISTA DE VENTAS 
		static List<SaleOrder^>^ orderListDB = gcnew List<SaleOrder^>();

	public:

		//Metodos para las transacciones
		static String^ BIN_ORDERS_FILE_NAME = "orders.bin";
		static int RegisterOrder(SaleOrder^ order);
		static List<SaleOrder^>^ QueryAllOrders();
		// CRUD empleados
		static String^ TXT_EMPLOYEE_FILE_NAME = "EmployeesDB.txt";
		static String^ XML_EMPLOYEE_FILE_NAME = "EmployeeDB.xml";
		static String^ BIN_EMPLOYEE_FILE_NAME = "EmployeeDB.bin";

		static int AddEmployee(Employee^ employee); //Definir Metodos
		static  List<Employee^>^ QueryAllEmployees();
		static int UpdateEmployee(Employee^ employee);
		static int DeleteEmployee(int employeeId);
		static Employee^ QueryAllEmployeesById(int employeeId);

		// CRUD CLIENTE
		static String^ TXT_CLIENT_FILE_NAME = "client.txt";
		static String^ XML_CLIENT_FILE_NAME = "client.xml";
		static String^ BIN_CLIENT_FILE_NAME = "client.bin";
		static int Addclient(Client^ cliente);
		static List<Client^>^ Queryallcliente();
		static int UpdateClient(Client^ cliente);
		static int DeleteClient(int clienteId);
		static Client^ Queryallclienteid(int clienteId);


		//METODOS DE CRUD TORNILLO - STOCK
		static String^ TXT_TORNILLO_FILE_NAME = "tornilloStock.txt";
		static String^ XML_TORNILLO_FILE_NAME = "tornilloStock.xml";
		static String^ BIN_TORNILLO_FILE_NAME = "tornilloStock.bin";
		static int Addtornillo(MechanicComponent^ tornillo);
		static List<MechanicComponent^>^ Queryalltornillo();
		static int Updatetornillo(MechanicComponent^ tornillo);
		static int Deletetornillo(int tornilloId);
		static MechanicComponent^ Queryalltornilloid(int tornilloId);

		//METODOS DE CRUD FAJAS - STOCK
		static String^ BIN_FAJAS_FILE_NAME = "fajas.bin";
		static int Addfaja(MechanicComponent^ faja);
		static List<MechanicComponent^>^ Queryallfaja();
		static int Updatefaja(MechanicComponent^ faja);
		static int Deletefaja(int fajaId);
		static MechanicComponent^ Queryallfajaid(int fajaId);
		//METODOS DE CRUD POLEAS - STOCK
		static String^ BIN_POLEAS_FILE_NAME = "polea.bin";
		static int Addpolea(MechanicComponent^ polea);
		static List<MechanicComponent^>^ Queryallpolea();
		static int Updatepolea(MechanicComponent^ polea);
		static int Deletepolea(int poleaId);
		static MechanicComponent^ Queryallpoleaid(int poleaId);


		//METODOS DE CRUD RODAMIENTO - STOCK
		static String^ BIN_RODAMIENTO_FILE_NAME = "rodamiento.bin";
		static int Addrodamiento(MechanicComponent^ rodamiento);
		static List<MechanicComponent^>^ Queryallrodamiento();
		static int Updaterodamiento(MechanicComponent^ rodamiento);
		static int Deleterodamiento(int rodamientoId);
		static MechanicComponent^ Queryallrodamientoid(int rodamientoId);


		//METODOS DE CRUD MOTORAC - STOCK
		static String^ TXT_MOTORAC_FILE_NAME = "motorACStock.txt";
		static String^ XML_MOTORAC_FILE_NAME = "motorACStock.xml";
		static String^ BIN_MOTORAC_FILE_NAME = "motorACStock.bin";
		static int AddMotorACStock(MechanicComponent^ motorAC);
		static List<MechanicComponent^>^ QueryallMotorACStock();
		static int UpdateMotorACStock(MechanicComponent^ motorAC);
		static int DeleteMotorACStock(int motorACId);
		static MechanicComponent^ QueryallMotorACStockById(int motorACId);

		//METODOS DE CRUD MOTORDC - STOCK
		static String^ TXT_MOTORDC_FILE_NAME = "motorDCStock.txt";
		static String^ XML_MOTORDC_FILE_NAME = "motorDCStock.xml";
		static String^ BIN_MOTORDC_FILE_NAME = "motorDCStock.bin";
		static int AddMotorDCStock(MechanicComponent^ motorDC);
		static List<MechanicComponent^>^ QueryallMotorDCStock();
		static int UpdateMotorDCStock(MechanicComponent^ motorDC);
		static int DeleteMotorDCStock(int motorDCId);
		static MechanicComponent^ QueryallMotorDCStockById(int motorDCId);

		//CRUD DE MECHANIC COMPONENTE PURCHASE

		//METODOS DE CRUD TORNILLO - PURCHASE
		static String^ TXT_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.txt";
		static String^ XML_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.xml";
		static String^ BIN_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.bin";
		static int AddTornilloPurchase(MechanicComponent^ tornilloPurchase);
		static List<MechanicComponent^>^ QueryAllTornilloPurchase();
		static int UpdateTornilloPurchase(MechanicComponent^ tornilloPurchase);
		static int DeleteTornilloPurchase(int tornilloPurchaseId);
		static MechanicComponent^ QueryAllTornilloPurchaseById(int tornilloPurchaseId);

		//METODOS DE CRUD FAJAS - PURCHASE
		static String^ BIN_PURCHASEFAJAS_FILE_NAME = "fajasPurchase.bin";
		static int AddFajaPurchase(MechanicComponent^ fajaPurchase);
		static List<MechanicComponent^>^ QueryAllFajaPurchase();
		static int UpdateFajaPurchase(MechanicComponent^ fajaPurchase);
		static int DeleteFajaPurchase(int fajaPurchaseId);
		static MechanicComponent^ QueryAllFajaPurchaseById(int fajaPurchaseId);

		//METODOS DE CRUD POLEAS - PURCHASE
		static String^ BIN_PURCHASEPOLEAS_FILE_NAME = "poleaPurchase.bin";
		static int AddPoleaPurchase(MechanicComponent^ poleaPurchase);
		static List<MechanicComponent^>^ QueryAllPoleaPurchase();
		static int UpdatePoleaPurchase(MechanicComponent^ poleaPurchase);
		static int DeletePoleaPurchase(int poleaPurchaseId);
		static MechanicComponent^ QueryAllPoleaIdPurchase(int poleaPurchaseId);


		//METODOS DE CRUD RODAMIENTO - PURCHASE
		static String^ BIN_PURCHASERODAMIENTO_FILE_NAME = "rodamientoPurchase.bin";
		static int AddRodamientoPurchase(MechanicComponent^ rodamientoPurchase);
		static List<MechanicComponent^>^ QueryAllRodamientoPurchase();
		static int UpdateRodamientoPurchase(MechanicComponent^ rodamientoPurchase);
		static int DeleteRodamientoPurchase(int rodamientoPurchaseId);
		static MechanicComponent^ QueryAllRodamientoPurchaseById(int rodamientoPurchaseId);

		//METODOS DE CRUD MOTORAC - PURCHASE
		static String^ TXT_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.txt";
		static String^ XML_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.xml";
		static String^ BIN_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.bin";
		static int AddMotorACPurchase(MechanicComponent^ motorACPurchase);
		static List<MechanicComponent^>^ QueryAllMotorACPurchase();
		static int UpdateMotorACPurchase(MechanicComponent^ motorACPurchase);
		static int DeleteMotorACPurchase(int motorACPurchaseId);
		static MechanicComponent^ QueryallMotorACPurchaseById(int motorACPurchaseId);

		//METODOS DE CRUD MOTORDC - PURCHASE
		static String^ TXT_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.txt";
		static String^ XML_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.xml";
		static String^ BIN_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.bin";
		static int AddMotorDCPurchase(MechanicComponent^ motorDCPurchase);
		static List<MechanicComponent^>^ QueryAllMotorDCPurchase();
		static int UpdateMotorDCPurchase(MechanicComponent^ motorDCPurchase);
		static int DeleteMotorDCPurchase(int motorDCPurchaseId);
		static MechanicComponent^ QueryallMotorDCPurchaseById(int motorDCPurchaseId);
	};
}
