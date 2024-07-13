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

		//Conexion SQL
		static SqlConnection^ GetConnection();
		static List<User^>^ LoadUser();

		//REGISTRO DE USUARIOS
		static List<User^>^ UserList = gcnew List<User^>();

		//BASE DATOS COMPONENTES - STOCK
		static List <MotoresACCliente^>^ motorACDB = gcnew List <MotoresACCliente^>();
		static List <MotoresDCCliente^>^ motorDCDB = gcnew List <MotoresDCCliente^>();
		static List <TornilloCliente^>^ tornillosDB = gcnew List <TornilloCliente^>();
		static List <FajasCliente^>^ fajasDB = gcnew List <FajasCliente^>();
		static List <PoleaCliente^>^ poleaDB = gcnew List <PoleaCliente^>();
		static List <RodamientosCliente^>^ rodamientoDB = gcnew List <RodamientosCliente^>();
		//BASE DATOS DE EMPLEADOS Y CLIENTES
		static List<Employee^>^ employeeListDB = gcnew List<Employee^>();
		static List <Client^>^ clientlistdatos = gcnew List <Client^>();
		//BASE DATOS COMPONENTES - COMPRAS
		static List <SupplyProduct^>^ motorACPurchaseDB = gcnew List <SupplyProduct^>();
		static List <SupplyProduct^>^ motorDCPurchaseDB = gcnew List <SupplyProduct^>();
		static List <SupplyProduct^>^ tornillosPurchaseDB = gcnew List <SupplyProduct^>();
		static List <SupplyProduct^>^ fajasPurchaseDB = gcnew List <SupplyProduct^>();
		static List <SupplyProduct^>^ poleaPurchaseDB = gcnew List <SupplyProduct^>();
		static List <SupplyProduct^>^ rodamientoPurchaseDB = gcnew List <SupplyProduct^>();


		//BASE DATOS LISTA DE VENTAS 
		static List<SaleOrder^>^ orderListDB = gcnew List<SaleOrder^>();
		//BASE DE DATOS PARA COMPONENTE DE VENTA
		static List<MechanicComponent^>^ ComponentDB = gcnew List<MechanicComponent^>();
		//BD lista de compras
		static List <PurchaseOrder^>^ compraOrdenListDB = gcnew List <PurchaseOrder^>();

	public:

		//Metodos para las transacciones
		static String^ BIN_ORDERS_FILE_NAME = "orders.bin";
		static int RegisterOrder(SaleOrder^ order);
		static List<SaleOrder^>^ QueryAllOrders();

		static String^ BIN_COMPRAORDERS_FILE_NAME = "CompraOrders.bin";
		
		
		
		
		
		//REGISTRO DE USUARIOS
		static User^ QueryUserByName(String^ name);

		// CRUD empleados
		static String^ TXT_EMPLOYEE_FILE_NAME = "EmployeesDB.txt";
		static String^ XML_EMPLOYEE_FILE_NAME = "EmployeeDB.xml";
		static String^ BIN_EMPLOYEE_FILE_NAME = "EmployeeDB.bin";

		static int AddEmployee(Employee^ employee); //Definir Metodos
		static  List<Employee^>^ QueryAllEmployees();
		static int UpdateEmployee(Employee^ employee);
		static int DeleteEmployee(int employeeId);
		static Employee^ QueryAllEmployeesById(int employeeId);
		static Employee^ QueryAllEmployeesByName(String^ name);


		// CRUD CLIENTE
		static String^ TXT_CLIENT_FILE_NAME = "client.txt";
		static String^ XML_CLIENT_FILE_NAME = "client.xml";
		static String^ BIN_CLIENT_FILE_NAME = "client.bin";
		static int AddClient(Client^ cliente);
		static List<Client^>^ QueryAllCliente();
		static int UpdateClient(Client^ cliente);
		static int DeleteClient(int clienteId);
		static Client^ QueryAllClienteId(int clienteId);

		//METODO DE VENTA
		static List<MechanicComponent^>^ QueryallComponent();


		//METODOS DE CRUD TORNILLO - STOCK
		static String^ TXT_TORNILLO_FILE_NAME = "tornilloStock.txt";
		static String^ XML_TORNILLO_FILE_NAME = "tornilloStock.xml";
		static String^ BIN_TORNILLO_FILE_NAME = "tornilloStock.bin";
		static int Addtornillo(TornilloCliente^ tornillo);
		static List<TornilloCliente^>^ Queryalltornillo();
		static int Updatetornillo(TornilloCliente^ tornillo);
		static int Deletetornillo(int tornilloId);
		static TornilloCliente^ Queryalltornilloid(int tornilloId);

		//METODOS DE CRUD FAJAS - STOCK
		static String^ BIN_FAJAS_FILE_NAME = "fajas.bin";
		static int Addfaja(FajasCliente^ faja);
		static List<FajasCliente^>^ Queryallfaja();
		static int Updatefaja(FajasCliente^ faja);
		static int Deletefaja(int fajaId);
		static FajasCliente^ Queryallfajaid(int fajaId);
		//METODOS DE CRUD POLEAS - STOCK
		static String^ BIN_POLEAS_FILE_NAME = "polea.bin";
		static int Addpolea(PoleaCliente^ polea);
		static List<PoleaCliente^>^ Queryallpolea();
		static int Updatepolea(PoleaCliente^ polea);
		static int Deletepolea(int poleaId);
		static PoleaCliente^ Queryallpoleaid(int poleaId);


		//METODOS DE CRUD RODAMIENTO - STOCK
		static String^ BIN_RODAMIENTO_FILE_NAME = "rodamiento.bin";
		static int Addrodamiento(RodamientosCliente^ rodamiento);
		static List<RodamientosCliente^>^ Queryallrodamiento();
		static int Updaterodamiento(RodamientosCliente^ rodamiento);
		static int Deleterodamiento(int rodamientoId);
		static RodamientosCliente^ Queryallrodamientoid(int rodamientoId);

		//ELBYNAME
		static List<MechanicComponent^>^ QueryAllComponentByName(String^ name);
		// 
		static MechanicComponent^ QueryallcomponentByCode(String^ code);


		//METODOS DE CRUD MOTORAC - STOCK
		static String^ TXT_MOTORAC_FILE_NAME = "motorACStock.txt";
		static String^ XML_MOTORAC_FILE_NAME = "motorACStock.xml";
		static String^ BIN_MOTORAC_FILE_NAME = "motorACStock.bin";
		static int AddMotorACStock(MotoresACCliente^ motorAC);
		static List<MotoresACCliente^>^ QueryallMotorACStock();
		static int UpdateMotorACStock(MotoresACCliente^ motorAC);
		static int DeleteMotorACStock(int motorACId);
		static MotoresACCliente^ QueryallMotorACStockById(int motorACId);

		//METODOS DE CRUD MOTORDC - STOCK
		static String^ TXT_MOTORDC_FILE_NAME = "motorDCStock.txt";
		static String^ XML_MOTORDC_FILE_NAME = "motorDCStock.xml";
		static String^ BIN_MOTORDC_FILE_NAME = "motorDCStock.bin";
		static int AddMotorDCStock(MotoresDCCliente^ motorDC);
		static List<MotoresDCCliente^>^ QueryallMotorDCStock();
		static int UpdateMotorDCStock(MotoresDCCliente^ motorDC);
		static int DeleteMotorDCStock(int motorDCId);
		static MotoresDCCliente^ QueryallMotorDCStockById(int motorDCId);




		//CRUD DE MECHANIC COMPONENTE PURCHASE

		//METODOS DE CRUD TORNILLO - PURCHASE
		static String^ TXT_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.txt";
		static String^ XML_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.xml";
		static String^ BIN_PURCHASETORNILLO_FILE_NAME = "tornilloPurchase.bin";
		static int AddTornilloPurchase(SupplyProduct^ tornilloPurchase);
		static List<SupplyProduct^>^ QueryAllTornilloPurchase();
		static int UpdateTornilloPurchase(SupplyProduct^ tornilloPurchase);
		static int DeleteTornilloPurchase(int tornilloPurchaseId);
		static SupplyProduct^ QueryAllTornilloPurchaseById(int tornilloPurchaseId);

		//METODOS DE CRUD FAJAS - PURCHASE
		static String^ BIN_PURCHASEFAJAS_FILE_NAME = "fajasPurchase.bin";
		static int AddFajaPurchase(SupplyProduct^ fajaPurchase);
		static List<SupplyProduct^>^ QueryAllFajaPurchase();
		static int UpdateFajaPurchase(SupplyProduct^ fajaPurchase);
		static int DeleteFajaPurchase(int fajaPurchaseId);
		static SupplyProduct^ QueryAllFajaPurchaseById(int fajaPurchaseId);

		//METODOS DE CRUD POLEAS - PURCHASE
		static String^ BIN_PURCHASEPOLEAS_FILE_NAME = "poleaPurchase.bin";
		static int AddPoleaPurchase(SupplyProduct^ poleaPurchase);
		static List<SupplyProduct^>^ QueryAllPoleaPurchase();
		static int UpdatePoleaPurchase(SupplyProduct^ poleaPurchase);
		static int DeletePoleaPurchase(int poleaPurchaseId);
		static SupplyProduct^ QueryAllPoleaByIdPurchase(int poleaPurchaseId);


		//METODOS DE CRUD RODAMIENTO - PURCHASE
		static String^ BIN_PURCHASERODAMIENTO_FILE_NAME = "rodamientoPurchase.bin";
		static int AddRodamientoPurchase(SupplyProduct^ rodamientoPurchase);
		static List<SupplyProduct^>^ QueryAllRodamientoPurchase();
		static int UpdateRodamientoPurchase(SupplyProduct^ rodamientoPurchase);
		static int DeleteRodamientoPurchase(int rodamientoPurchaseId);
		static SupplyProduct^ QueryAllRodamientoPurchaseById(int rodamientoPurchaseId);

		//METODOS DE CRUD MOTORAC - PURCHASE
		static String^ TXT_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.txt";
		static String^ XML_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.xml";
		static String^ BIN_PURCHASEMOTORAC_FILE_NAME = "motorACPurchase.bin";
		static int AddMotorACPurchase(SupplyProduct^ motorACPurchase);
		static List<SupplyProduct^>^ QueryAllMotorACPurchase();
		static int UpdateMotorACPurchase(SupplyProduct^ motorACPurchase);
		static int DeleteMotorACPurchase(int motorACPurchaseId);
		static SupplyProduct^ QueryAllMotorACPurchaseById(int motorACPurchaseId);

		//METODOS DE CRUD MOTORDC - PURCHASE
		static String^ TXT_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.txt";
		static String^ XML_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.xml";
		static String^ BIN_PURCHASEMOTORDC_FILE_NAME = "motorDCPurchase.bin";
		static int AddMotorDCPurchase(SupplyProduct^ motorDCPurchase);
		static List<SupplyProduct^>^ QueryAllMotorDCPurchase();
		static int UpdateMotorDCPurchase(SupplyProduct^ motorDCPurchase);
		static int DeleteMotorDCPurchase(int motorDCPurchaseId);
		static SupplyProduct^ QueryAllMotorDCPurchaseById(int motorDCPurchaseId);

		//Metodos para transacciones de Compra Admin
		static int RegisterPurchase(PurchaseOrder^ compraOrden);
		static List<PurchaseOrder^>^ QueryAllPurchaseOrders();
	};
}