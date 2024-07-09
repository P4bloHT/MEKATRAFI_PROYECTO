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
		static int Addtornillos(TornilloCliente^);
		static int Updatetornillos(TornilloCliente^);
		static int Deletetornillos(int tornillosid);
		static List<TornilloCliente^>^ Queryalltornillos();
		static TornilloCliente^ Queryalltornillosid(int tornillosid);

		//CRUD MOTORAC - STOCK
		static String^ TXT_MOTORAC_FILE_NAME = "motorACStock.txt";
		static String^ XML_MOTORAC_FILE_NAME = "motorACStock.xml";
		static String^ BIN_MOTORAC_FILE_NAME = "motorACStock.bin";
		static int AddMotorACStock(MotoresACCliente^ motorAC);
		static List<MotoresACCliente^>^ QueryallMotorACStock();
		static int UpdateMotorACStock(MotoresACCliente^ motorAC);
		static int DeleteMotorACStock(int motorACId);
		static MotoresACCliente^ QueryallMotorACStockById(int motorACId);

		//CRUD MOTORDC - STOCK
		static int AddMotorDCStock(MotoresDCCliente^ motorDC);
		static List<MotoresDCCliente^>^ QueryallMotorDCStock();
		static int UpdateMotorDCStock(MotoresDCCliente^ motorDC);
		static int DeleteMotorDCStock(int motorDCId);
		static MotoresDCCliente^ QueryallMotorDCStockById(int motorDCId);

		//CRUD DE FAJAS
		static int Addfajas(FajasCliente^);
		static int Updatefajas(FajasCliente^);
		static int Deletefajas(int fajasid);
		static List<FajasCliente^>^ Queryallfajas();
		static FajasCliente^ Queryallfajasid(int fajasid);
		//CRUD POLEAS
		static int Addpoleas(PoleaCliente^);
		static int Updatepoleas(PoleaCliente^);
		static int Deletepoleas(int poleasid);
		static List<PoleaCliente^>^ Queryallfpoleas();
		static PoleaCliente^ Queryallpoleasid(int poleasid);


		//MANTENIMIENTO
		static List<TornilloCliente^>^ QueryTornillosByName(String^ name);

		//Cliente An�nimo
		static Client^ GetAnnonymusClient();

		//Metodos para las transacciones
		static int RegisterOrder(SaleOrder^ order);
		static List<SaleOrder^>^ QueryAllOrders();




		//CRUD RODAMIENTO
		static int Addrodamientos(RodamientosCliente^);
		static int Updaterodamientos(RodamientosCliente^);
		static int Deleterodamientos(int rodamientosid);
		static List<RodamientosCliente^>^ Queryallrodamientos();
		static RodamientosCliente^ Queryallrodamientosid(int rodamientosid);

	};
}
