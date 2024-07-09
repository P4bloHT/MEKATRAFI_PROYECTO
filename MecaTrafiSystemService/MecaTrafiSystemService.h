#pragma once

using namespace System;
using namespace MecaTrafiSystemModel;
using namespace System::Collections::Generic;

namespace MecaTrafiSystemService {
	public ref class Service
	{
	private:
		// BD de Clientes registrados
		static List<Client^>^ ClientsDB = gcnew List<Client^>();
		// BASE DE DATOS DE CLIENTE
		static List<Client^>^ Clientdatos = gcnew List <Client^>();
		static Store^ GenericStore = gcnew Store(1, "Generica");
		//Cliente anonimo
		static Client^ AnnonymusClient = gcnew Client();

	public:
		// Metodos para el mantinimiento  (CRUD) de Producto para Clientes
		static int AddClient(Client^);
		static int UpdateClient(Client^);
		static int DeleteClient(int clientId);
		static List<Client^>^ QueryAllClients();
		static Client^ QueryClientById(int clientId);
	private:
		// BD de Empleados registrados
		static List<Employee^>^ EmployeeDB = gcnew List<Employee^>();
		static List<TornilloCliente^>^ TornilloDB = gcnew List<TornilloCliente^>();
	public:
		//REGISTRO DE USUARIO
		static User^ QueryUserByName(String^ name);

		// CRUD de empleados
		static int AddEmployee(Employee^);
		static int UpdateEmployee(Employee^);
		static int DeleteEmployee(int clientId);
		static List<Employee^>^ QueryAllEmployees();
		static Employee^ QueryEmployeeById(int clientId);


		// CRUD cliente
		static int Addcliente(Client^);
		static int Updatecliente(Client^);
		static int Deletecliente(int clienteid);
		static List<Client^>^ Queryallcliente();
		static Client^ Queryallclienteid(int clienteid);


		//CRUD TORNILLOS - STOCK
		static int Addtornillos(MechanicComponent^);
		static int Updatetornillos(MechanicComponent^);
		static int Deletetornillos(int tornillosid);
		static List<MechanicComponent^>^ Queryalltornillos();
		static MechanicComponent^ Queryalltornillosid(int tornillosid);

		//CRUD MOTORAC - STOCK
		static int AddMotorACStock(MechanicComponent^ motorAC);
		static List<MechanicComponent^>^ QueryallMotorACStock();
		static int UpdateMotorACStock(MechanicComponent^ motorAC);
		static int DeleteMotorACStock(int motorACId);
		static MechanicComponent^ QueryallMotorACStockById(int motorACId);

		//CRUD MOTORDC - STOCK
		static int AddMotorDCStock(MechanicComponent^ motorDC);
		static List<MechanicComponent^>^ QueryallMotorDCStock();
		static int UpdateMotorDCStock(MechanicComponent^ motorDC);
		static int DeleteMotorDCStock(int motorDCId);
		static MechanicComponent^ QueryallMotorDCStockById(int motorDCId);

		//CRUD DE FAJAS - STOCK
		static int Addfajas(MechanicComponent^);
		static int Updatefajas(MechanicComponent^);
		static int Deletefajas(int fajasid);
		static List<MechanicComponent^>^ Queryallfajas();
		static MechanicComponent^ Queryallfajasid(int fajasid);
		//CRUD POLEAS - Stock
		static int Addpoleas(MechanicComponent^);
		static int Updatepoleas(MechanicComponent^);
		static int Deletepoleas(int poleasid);
		static List<MechanicComponent^>^ Queryallfpoleas();
		static MechanicComponent^ Queryallpoleasid(int poleasid);



		//MANTENIMIENTO
		static List<MechanicComponent^>^ QueryTornillosByName(String^ name);


		//Cliente Anonimo

		static List<MechanicComponent^>^ QueryfajasByName(String^ name);

		static List<MechanicComponent^>^ QueryRodamientosByName(String^ name);

		static List<MechanicComponent^>^ QueryPoleasByName(String^ name);

		static List<MechanicComponent^>^ QueryMotorACByName(String^ name);

		static List<MechanicComponent^>^ QueryMotorDCByName(String^ name);



		static Client^ GetAnnonymusClient();

		//Metodos para las transacciones
		static int RegisterOrder(SaleOrder^ order);
		static List<SaleOrder^>^ QueryAllOrders();






		//CRUD RODAMIENTO
		static int Addrodamientos(MechanicComponent^);
		static int Updaterodamientos(MechanicComponent^);
		static int Deleterodamientos(int rodamientosid);
		static List<MechanicComponent^>^ Queryallrodamientos();
		static MechanicComponent^ Queryallrodamientosid(int rodamientosid);

		//CRUD COMPRA PRODUCTOS

		//METODOS DE CRUD TORNILLO - PURCHASE

		static int AddTornilloPurchase(SupplyProduct^ tornilloPurchase);
		static List<SupplyProduct^>^ QueryAllTornilloPurchase();
		static int UpdateTornilloPurchase(SupplyProduct^ tornilloPurchase);
		static int DeleteTornilloPurchase(int tornilloPurchaseId);
		static SupplyProduct^ QueryAllTornilloPurchaseById(int tornilloPurchaseId);

		//METODOS DE CRUD FAJAS - PURCHASE

		static int AddFajaPurchase(SupplyProduct^ fajaPurchase);
		static List<SupplyProduct^>^ QueryAllFajaPurchase();
		static int UpdateFajaPurchase(SupplyProduct^ fajaPurchase);
		static int DeleteFajaPurchase(int fajaPurchaseId);
		static SupplyProduct^ QueryAllFajaPurchaseById(int fajaPurchaseId);

		//Transacciones
		static List<SupplyProduct^>^ QueryFajaPruchaseByName(String^ name);
		//METODOS DE CRUD POLEAS - PURCHASE

		static int AddPoleaPurchase(SupplyProduct^ poleaPurchase);
		static List<SupplyProduct^>^ QueryAllPoleaPurchase();
		static int UpdatePoleaPurchase(SupplyProduct^ poleaPurchase);
		static int DeletePoleaPurchase(int poleaPurchaseId);
		static SupplyProduct^ QueryAllPoleaByIdPurchase(int poleaPurchaseId);


		//METODOS DE CRUD RODAMIENTO - PURCHASE

		static int AddRodamientoPurchase(SupplyProduct^ rodamientoPurchase);
		static List<SupplyProduct^>^ QueryAllRodamientoPurchase();
		static int UpdateRodamientoPurchase(SupplyProduct^ rodamientoPurchase);
		static int DeleteRodamientoPurchase(int rodamientoPurchaseId);
		static SupplyProduct^ QueryAllRodamientoPurchaseById(int rodamientoPurchaseId);

		//METODOS DE CRUD MOTORAC - PURCHASE

		static int AddMotorACPurchase(SupplyProduct^ motorACPurchase);
		static List<SupplyProduct^>^ QueryAllMotorACPurchase();
		static int UpdateMotorACPurchase(SupplyProduct^ motorACPurchase);
		static int DeleteMotorACPurchase(int motorACPurchaseId);
		static SupplyProduct^ QueryAllMotorACPurchaseById(int motorACPurchaseId);

		//METODOS DE CRUD MOTORDC - PURCHASE

		static int AddMotorDCPurchase(SupplyProduct^ motorDCPurchase);
		static List<SupplyProduct^>^ QueryAllMotorDCPurchase();
		static int UpdateMotorDCPurchase(SupplyProduct^ motorDCPurchase);
		static int DeleteMotorDCPurchase(int motorDCPurchaseId);
		static SupplyProduct^ QueryallMotorDCPurchaseById(int motorDCPurchaseId);

		static Store^ GetGenericStore();
		//Metodos Mantenmiento Admin
		static int RegisterPurchase(PurchaseOrder^ ordenCompra);
		static List<PurchaseOrder^>^ QueryAllPurchaseOrders();
	};
}