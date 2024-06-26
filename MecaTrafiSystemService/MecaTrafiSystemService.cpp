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

int MecaTrafiSystemService::Service::Addtornillos(MechanicComponent^ tornillo)
{
    Persistance::Addtornillo(tornillo);
    return tornillo->Id;
}

int MecaTrafiSystemService::Service::Updatetornillos(MechanicComponent^ tornillo)
{
    return Persistance::Updatetornillo(tornillo);
}

int MecaTrafiSystemService::Service::Deletetornillos(int tornillosid)
{
    return Persistance::Deletetornillo(tornillosid);
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::Queryalltornillos()
{
    return Persistance::Queryalltornillo();
}

MechanicComponent^ MecaTrafiSystemService::Service::Queryalltornillosid(int tornillosid)
{
    return Persistance::Queryalltornilloid(tornillosid);
}

int MecaTrafiSystemService::Service::Addfajas(MechanicComponent^ faja)
{
    Persistance::Addfaja(faja);
    return faja->Id;
}

int MecaTrafiSystemService::Service::Updatefajas(MechanicComponent^ faja)
{
    return Persistance::Updatefaja(faja);
}

int MecaTrafiSystemService::Service::Deletefajas(int fajasid)
{
    return Persistance::Deletefaja(fajasid);
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::Queryallfajas()
{
    return Persistance::Queryallfaja();
}

MechanicComponent^ MecaTrafiSystemService::Service::Queryallfajasid(int fajasid)
{
    return Persistance::Queryallfajaid(fajasid);
}

int MecaTrafiSystemService::Service::Addpoleas(MechanicComponent^ polea)
{
    Persistance::Addpolea(polea);
    return polea->Id;
}

int MecaTrafiSystemService::Service::Updatepoleas(MechanicComponent^ polea)
{
    return Persistance::Updatepolea(polea);
}

int MecaTrafiSystemService::Service::Deletepoleas(int poleasid)
{
    return Persistance::Deletepolea(poleasid);
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::Queryallfpoleas()
{
    return Persistance::Queryallpolea();
}

MechanicComponent^ MecaTrafiSystemService::Service::Queryallpoleasid(int poleasid)
{
    return Persistance::Queryallpoleaid(poleasid);
}


List<MechanicComponent^>^ MecaTrafiSystemService::Service::QueryTornillosByName(String^ name)
{
    List<MechanicComponent^>^ tornillosLista = Persistance::Queryalltornillo();
    List<MechanicComponent^>^ listToReturn = gcnew List<MechanicComponent^>();
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
int MecaTrafiSystemService::Service::Addrodamientos(MechanicComponent^ roda)
{
    Persistance::Addrodamiento(roda);
    return roda->Id;
}

int MecaTrafiSystemService::Service::Updaterodamientos(MechanicComponent^ roda)
{
    return Persistance::Updaterodamiento(roda);
}

int MecaTrafiSystemService::Service::Deleterodamientos(int rodamientosid)
{
    return Persistance::Deleterodamiento(rodamientosid);
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::Queryallrodamientos()
{
    return Persistance::Queryallrodamiento();
}

MechanicComponent^ MecaTrafiSystemService::Service::Queryallrodamientosid(int rodamientosid)
{
    return Persistance::Queryallrodamientoid(rodamientosid);
}
//METODOS TORNILLO - COMPRA
int MecaTrafiSystemService::Service::AddTornilloPurchase(SupplyProduct^ tornilloPurchase)
{
    Persistance::AddTornilloPurchase(tornilloPurchase);
    return tornilloPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllTornilloPurchase()
{
    return Persistance::QueryAllTornilloPurchase();
}
int MecaTrafiSystemService::Service::UpdateTornilloPurchase(SupplyProduct^ tornilloPurchase)
{
    return Persistance::UpdateTornilloPurchase(tornilloPurchase);
}
int MecaTrafiSystemService::Service::DeleteTornilloPurchase(int tornilloPurchaseId)
{
    return Persistance::DeleteTornilloPurchase(tornilloPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryAllTornilloPurchaseById(int tornilloPurchaseId)
{
    return Persistance::QueryAllTornilloPurchaseById(tornilloPurchaseId);
}
//METODOS FAJA - COMPRA
int MecaTrafiSystemService::Service::AddFajaPurchase(SupplyProduct^ fajaPurchase)
{
     Persistance::AddFajaPurchase(fajaPurchase);
     return fajaPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllFajaPurchase()
{
    return Persistance::QueryAllFajaPurchase();
}
int MecaTrafiSystemService::Service::UpdateFajaPurchase(SupplyProduct^ fajaPurchase)
{
    return Persistance::UpdateFajaPurchase(fajaPurchase);
}
int MecaTrafiSystemService::Service::DeleteFajaPurchase(int fajaPurchaseId)
{
    return Persistance::DeleteFajaPurchase(fajaPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryAllFajaPurchaseById(int fajaPurchaseId)
{
    return Persistance::QueryAllFajaPurchaseById(fajaPurchaseId);
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryFajaPruchaseByName(String^ name)
{
    List<SupplyProduct^>^ PurchaseFajaList = Persistance::QueryAllFajaPurchase();
    List<SupplyProduct^>^ listToReturn = gcnew List<SupplyProduct^>();
    for (int i = 0; i < PurchaseFajaList->Count; i++) {
        if (PurchaseFajaList[i]->Name->Contains(name))
            listToReturn->Add(PurchaseFajaList[i]);
    }
    return listToReturn;
}
//METODOS POLEA - COMPRA
int MecaTrafiSystemService::Service::AddPoleaPurchase(SupplyProduct^ poleaPurchase)
{
     Persistance::AddPoleaPurchase(poleaPurchase);
     return poleaPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllPoleaPurchase()
{
    return Persistance::QueryAllPoleaPurchase();
}
int MecaTrafiSystemService::Service::UpdatePoleaPurchase(SupplyProduct^ poleaPurchase)
{
    return Persistance::UpdatePoleaPurchase(poleaPurchase);
}
int MecaTrafiSystemService::Service::DeletePoleaPurchase(int poleaPurchaseId)
{
    return Persistance::DeletePoleaPurchase(poleaPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryAllPoleaByIdPurchase(int poleaPurchaseId)
{
    return Persistance::QueryAllPoleaByIdPurchase(poleaPurchaseId);
}
//METODOS RODAMIENTO - COMPRA
int MecaTrafiSystemService::Service::AddRodamientoPurchase(SupplyProduct^ rodamientoPurchase)
{
    Persistance::AddRodamientoPurchase(rodamientoPurchase);
    return rodamientoPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllRodamientoPurchase()
{
    return Persistance::QueryAllRodamientoPurchase();
}
int MecaTrafiSystemService::Service::UpdateRodamientoPurchase(SupplyProduct^ rodamientoPurchase)
{
    return Persistance::UpdateRodamientoPurchase(rodamientoPurchase);
}
int MecaTrafiSystemService::Service::DeleteRodamientoPurchase(int rodamientoPurchaseId)
{
    return Persistance::DeleteRodamientoPurchase(rodamientoPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryAllRodamientoPurchaseById(int rodamientoPurchaseId)
{
    return Persistance::QueryAllRodamientoPurchaseById(rodamientoPurchaseId);
}
//METODOS MOTORAC - COMPRA
int MecaTrafiSystemService::Service::AddMotorACPurchase(SupplyProduct^ motorACPurchase)
{
     Persistance::AddMotorACPurchase(motorACPurchase);
     return motorACPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllMotorACPurchase()
{
    return Persistance::QueryAllMotorACPurchase();
}
int MecaTrafiSystemService::Service::UpdateMotorACPurchase(SupplyProduct^ motorACPurchase)
{
    return Persistance::UpdateMotorACPurchase(motorACPurchase);
}
int MecaTrafiSystemService::Service::DeleteMotorACPurchase(int motorACPurchaseId)
{
    return Persistance::DeleteMotorACPurchase(motorACPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryAllMotorACPurchaseById(int motorACPurchaseId)
{
    return Persistance::QueryAllMotorACPurchaseById(motorACPurchaseId);
}
//METODOS MOTORDC - COMPRA
int MecaTrafiSystemService::Service::AddMotorDCPurchase(SupplyProduct^ motorDCPurchase)
{
     Persistance::AddMotorDCPurchase(motorDCPurchase);
     return motorDCPurchase->Id;
}
List<SupplyProduct^>^ MecaTrafiSystemService::Service::QueryAllMotorDCPurchase()
{
    return Persistance::QueryAllMotorDCPurchase();
}
int MecaTrafiSystemService::Service::UpdateMotorDCPurchase(SupplyProduct^ motorDCPurchase)
{
    return Persistance::UpdateMotorDCPurchase(motorDCPurchase);
}
int MecaTrafiSystemService::Service::DeleteMotorDCPurchase(int motorDCPurchaseId)
{
    return Persistance::DeleteMotorDCPurchase(motorDCPurchaseId);
}
SupplyProduct^ MecaTrafiSystemService::Service::QueryallMotorDCPurchaseById(int motorDCPurchaseId)
{
    return Persistance::QueryAllMotorDCPurchaseById(motorDCPurchaseId);
}
Store^ MecaTrafiSystemService::Service::GetGenericStore()
{
    return GenericStore;
}
int MecaTrafiSystemService::Service::RegisterPurchase(PurchaseOrder^ ordenCompra)
{
    return Persistance::RegisterPurchase(ordenCompra);
}
List<PurchaseOrder^>^ MecaTrafiSystemService::Service::QueryAllPurchaseOrders()
{
    return Persistance::QueryAllPurchaseOrders();
}
//CRUD MOTOR AC - STOCK
int MecaTrafiSystemService::Service::AddMotorACStock(MechanicComponent^ motorAC)
{
    Persistance::AddMotorACStock(motorAC);
    return motorAC->Id;
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::QueryallMotorACStock()
{
    return Persistance::QueryallMotorACStock();
}

int MecaTrafiSystemService::Service::UpdateMotorACStock(MechanicComponent^ motorAC)
{
    return Persistance::UpdateMotorACStock(motorAC);
}

int MecaTrafiSystemService::Service::DeleteMotorACStock(int motorACId)
{
    return Persistance::DeleteMotorACStock(motorACId);
}

MechanicComponent^ MecaTrafiSystemService::Service::QueryallMotorACStockById(int motorACId)
{
    return Persistance::QueryallMotorACStockById(motorACId);
}

int MecaTrafiSystemService::Service::AddMotorDCStock(MechanicComponent^ motorDC)
{
    Persistance::AddMotorDCStock(motorDC);
    return motorDC->Id;
}

List<MechanicComponent^>^ MecaTrafiSystemService::Service::QueryallMotorDCStock()
{
    return Persistance::QueryallMotorDCStock();
}

int MecaTrafiSystemService::Service::UpdateMotorDCStock(MechanicComponent^ motorDC)
{
    return Persistance::UpdateMotorDCStock(motorDC);
}

int MecaTrafiSystemService::Service::DeleteMotorDCStock(int motorDCId)
{
    return Persistance::DeleteMotorDCStock(motorDCId);
}

MechanicComponent^ MecaTrafiSystemService::Service::QueryallMotorDCStockById(int motorDCId)
{
    return Persistance::QueryallMotorDCStockById(motorDCId);
}

