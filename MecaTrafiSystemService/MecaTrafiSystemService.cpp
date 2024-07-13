#include "pch.h"

#include "MecaTrafiSystemService.h"
using namespace MecaTrafiSystemPersistance;

int MecaTrafiSystemService::Service::AddClient(Client^ client)
{
    ClientsDB->Add(client);
    return client->Id;
}

int MecaTrafiSystemService::Service::UpdateClient(Client^ client)
{
    for (int i = 0; i < ClientsDB->Count; i++) {
        if (ClientsDB[i]->Id == client->Id) {
            ClientsDB[i] = client;
            return client->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemService::Service::DeleteClient(int clientId)
{
    for (int i = 0; i < ClientsDB->Count; i++) {
        if (ClientsDB[i]->Id == clientId) {
            ClientsDB->RemoveAt(i);
            return clientId;
        }
    }
    return 0;
}

List<Client^>^ MecaTrafiSystemService::Service::QueryAllClients()
{
    return ClientsDB;
}

Client^ MecaTrafiSystemService::Service::QueryClientById(int clientId)
{
    for (int i = 0; i < ClientsDB->Count; i++) {
        if (ClientsDB[i]->Id == clientId) {
            return ClientsDB[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemService::Service::AddEmployee(Employee^ employee)
{
    //EmployeeDB->Add(employee);
    Persistance::AddEmployee(employee);
    return employee->Id;
}

int MecaTrafiSystemService::Service::UpdateEmployee(Employee^ employee)
{
    /*
    for (int i = 0; i < EmployeeDB->Count; i++) {
        if (EmployeeDB[i]->Id == employee->Id) {
            EmployeeDB[i] = employee;
            return employee->Id;
        }
    }
    return 0;
    */
    return Persistance::UpdateEmployee(employee);
}

int MecaTrafiSystemService::Service::DeleteEmployee(int employeeId)
{
    /* CUANDO NO SE USA BASE DE DATOS
    for (int i = 0; i < EmployeeDB->Count; i++) {
        if (EmployeeDB[i]->Id == employeeId) {
            EmployeeDB->RemoveAt(i);
            return employeeId;
        }
    }
    return 0;
    */
    //USANDO BD
    return Persistance::DeleteEmployee(employeeId);
}

List<Employee^>^ MecaTrafiSystemService::Service::QueryAllEmployees()
{
    //return EmployeeDB;
    return Persistance::QueryAllEmployees();
}

Employee^ MecaTrafiSystemService::Service::QueryEmployeeById(int employeeId)
{
    /*for (int i = 0; i < EmployeeDB->Count; i++) {
        if (EmployeeDB[i]->Id == employeeId) {
            return EmployeeDB[i];
        }
    }
    return nullptr;
    */
    return Persistance::QueryAllEmployeesById(employeeId);
}

int MecaTrafiSystemService::Service::Addcliente(Client^ cliente)
{
    //Clientdatos->Add(cliente);
    Persistance::Addclient(cliente);
    return cliente->Id;
}

int MecaTrafiSystemService::Service::Updatecliente(Client^ cliente)
{
    /* for (int i = 0; i < Clientdatos->Count; i++) {
         if (Clientdatos[i]->Id == client->Id) {
             Clientdatos[i] = client;
             return client->Id;

         }

     }*/
    return Persistance::UpdateClient(cliente);
}

int MecaTrafiSystemService::Service::Deletecliente(int clienteid)
{
    return Persistance::DeleteClient(clienteid);
}

List<Client^>^ MecaTrafiSystemService::Service::Queryallcliente()
{
    // return Clientdatos; 
    return Persistance::Queryallcliente();
}

Client^ MecaTrafiSystemService::Service::Queryallclienteid(int clienteid)
{
    return Persistance::Queryallclienteid(clienteid);
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::QueryallComponent()
{
    return Persistance::QueryallComponent();
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::QueryAllComponentByName(String^ name)
{
    return Persistance::QueryAllComponentByName(name);
}

MechanicComponent^ MecaTrafiSystemService::Service::QueryallcomponentByCode(String^ code)
{
    return Persistance::QueryallcomponentByCode(code);
}

int MecaTrafiSystemService::Service::Addtornillos(TornilloCliente^ tornillo)
{
    Persistance::Addtornillo(tornillo);
    return tornillo->Id;
}

int MecaTrafiSystemService::Service::Updatetornillos(TornilloCliente^ tornillo)
{
    return Persistance::Updatetornillo(tornillo);
}

int MecaTrafiSystemService::Service::Deletetornillos(int tornillosid)
{
    return Persistance::Deletetornillo(tornillosid);
}

List<TornilloCliente^>^ MecaTrafiSystemService::Service::Queryalltornillos()
{
    return Persistance::Queryalltornillo();
}

TornilloCliente^ MecaTrafiSystemService::Service::Queryalltornillosid(int tornillosid)
{
    return Persistance::Queryalltornilloid(tornillosid);
}

int MecaTrafiSystemService::Service::Addfajas(FajasCliente^ faja)
{
    Persistance::Addfaja(faja);
    return faja->Id;
}

int MecaTrafiSystemService::Service::Updatefajas(FajasCliente^ faja)
{
    return Persistance::Updatefaja(faja);
}

int MecaTrafiSystemService::Service::Deletefajas(int fajasid)
{
    return Persistance::Deletefaja(fajasid);
}

List<FajasCliente^>^ MecaTrafiSystemService::Service::Queryallfajas()
{
    return Persistance::Queryallfaja();
}

FajasCliente^ MecaTrafiSystemService::Service::Queryallfajasid(int fajasid)
{
    return Persistance::Queryallfajaid(fajasid);
}

int MecaTrafiSystemService::Service::Addpoleas(PoleaCliente^ polea)
{
    Persistance::Addpolea(polea);
    return polea->Id;
}

int MecaTrafiSystemService::Service::Updatepoleas(PoleaCliente^ polea)
{
    return Persistance::Updatepolea(polea);
}

int MecaTrafiSystemService::Service::Deletepoleas(int poleasid)
{
    return Persistance::Deletepolea(poleasid);
}

List<PoleaCliente^>^ MecaTrafiSystemService::Service::Queryallfpoleas()
{
    return Persistance::Queryallpolea();
}

PoleaCliente^ MecaTrafiSystemService::Service::Queryallpoleasid(int poleasid)
{
    return Persistance::Queryallpoleaid(poleasid);
}


List<TornilloCliente^>^ MecaTrafiSystemService::Service::QueryTornillosByName(String^ name)
{
    List<TornilloCliente^>^ tornillosLista = Persistance::Queryalltornillo();
    List<TornilloCliente^>^ listToReturn = gcnew List<TornilloCliente^>();
    for (int i = 0; i < tornillosLista->Count; i++) {
        if (tornillosLista[i]->Name->Contains(name)) {
            listToReturn->Add(tornillosLista[i]);
        }
    }
    return listToReturn;
}

Client^ MecaTrafiSystemService::Service::GetAnnonymusClient()
{
    return AnnonymusClient;
}

int MecaTrafiSystemService::Service::RegisterOrder(SaleOrder^ order)
{
    return Persistance::RegisterOrder(order);
}

List<SaleOrder^>^ MecaTrafiSystemService::Service::QueryAllOrders()
{
    return Persistance::QueryAllOrders();
}
int MecaTrafiSystemService::Service::Addrodamientos(RodamientosCliente^ roda)
{
    Persistance::Addrodamiento(roda);
    return roda->Id;
}

int MecaTrafiSystemService::Service::Updaterodamientos(RodamientosCliente^ roda)
{
    return Persistance::Updaterodamiento(roda);
}

int MecaTrafiSystemService::Service::Deleterodamientos(int rodamientosid)
{
    return Persistance::Deleterodamiento(rodamientosid);
}

List<RodamientosCliente^>^ MecaTrafiSystemService::Service::Queryallrodamientos()
{
    return Persistance::Queryallrodamiento();
}

RodamientosCliente^ MecaTrafiSystemService::Service::Queryallrodamientosid(int rodamientosid)
{
    return Persistance::Queryallrodamientoid(rodamientosid);
}
//CRUD MOTOR AC - STOCK
int MecaTrafiSystemService::Service::AddMotorACStock(MotoresACCliente^ motorAC)
{
    Persistance::AddMotorACStock(motorAC);
    return motorAC->Id;
}

List<MotoresACCliente^>^ MecaTrafiSystemService::Service::QueryallMotorACStock()
{
    return Persistance::QueryallMotorACStock();
}

int MecaTrafiSystemService::Service::UpdateMotorACStock(MotoresACCliente^ motorAC)
{
    return Persistance::UpdateMotorACStock(motorAC);
}

int MecaTrafiSystemService::Service::DeleteMotorACStock(int motorACId)
{
    return Persistance::DeleteMotorACStock(motorACId);
}

MotoresACCliente^ MecaTrafiSystemService::Service::QueryallMotorACStockById(int motorACId)
{
    return Persistance::QueryallMotorACStockById(motorACId);
}

int MecaTrafiSystemService::Service::AddMotorDCStock(MotoresDCCliente^ motorDC)
{
    Persistance::AddMotorDCStock(motorDC);
    return motorDC->Id;
}

List<MotoresDCCliente^>^ MecaTrafiSystemService::Service::QueryallMotorDCStock()
{
    return Persistance::QueryallMotorDCStock();
}

int MecaTrafiSystemService::Service::UpdateMotorDCStock(MotoresDCCliente^ motorDC)
{
    return Persistance::UpdateMotorDCStock(motorDC);
}

int MecaTrafiSystemService::Service::DeleteMotorDCStock(int motorDCId)
{
    return Persistance::DeleteMotorDCStock(motorDCId);
}

MotoresDCCliente^ MecaTrafiSystemService::Service::QueryallMotorDCStockById(int motorDCId)
{
    return Persistance::QueryallMotorDCStockById(motorDCId);
}

