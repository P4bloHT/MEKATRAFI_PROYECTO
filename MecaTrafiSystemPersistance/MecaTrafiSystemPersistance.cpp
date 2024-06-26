#include "pch.h"

#include "MecaTrafiSystemPersistance.h"
using namespace System::IO; //Donde esta declarado FileStream
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
void MecaTrafiSystemPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    //Garantizar la persistencia de la base de datos
     /*FileStream^ file;
     StreamWriter^ writer;
     file = gcnew FileStream(fileName, FileMode::Create,FileAccess::Write);
     writer = gcnew StreamWriter(file);
     if (persistObject -> GetType() == List<Employee^>::typeid) {
         List<Employee^>^ employees = (List<Employee^>^)persistObject; //Casting
         for (int i = 0; i < employees->Count; i++) { //Se ejecuta la cantidad de empleados que hay Count es para eso
             Employee^ employee = employees[i];
             writer->WriteLine(employee->Id + ","+ employee->Name + "," + employee->Lastname + "," + employee-> Salary + "," +
                 employee -> WorkHours);
         }
     }
     if (writer != nullptr) writer->Close();//Cerrar tipo writer
     if (file != nullptr) file->Close(); //Cerrar tipo File
     */
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<MechanicComponent^>::typeid) {
        List<MechanicComponent^>^ tornillos = (List<MechanicComponent^>^)persistObject; //Casting 
        for (int i = 0; i < tornillos->Count; i++) { //Se ejecuta la cantidad de empleados que hay Count es para eso
            MechanicComponent^ tornillo = tornillos[i];
            writer->WriteLine(tornillo->Id + "," + tornillo->Name + "," + tornillo->Stock + "," + tornillo->Proveedor + "," +
                tornillo->UnitaryPrice);
        }
    }
    if (writer != nullptr) writer->Close();//Cerrar tipo writer
    if (file != nullptr) file->Close(); //Cerrar tipo File


}

Object^ MecaTrafiSystemPersistance::Persistance::LoadTextFile(String^ fileName)
{
    //Garantizar la persistencia de la base de datos
    /*FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(TXT_EMPLOYEE_FILE_NAME)) {
            result = gcnew List<Employee^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                Employee^ employee = gcnew Employee();
                employee->Id = Convert::ToInt32(record[0]);
                employee->Name = record[1];
                employee->Lastname = record[2];
                employee->Salary = Convert::ToDouble(record[3]);
                employee->WorkHours = Convert::ToDouble(record[4]);
                ((List<Employee^>^)result)->Add(employee);//Casteo
            }
        }
        if (reader != nullptr) reader->Close(); //Cerar tipo Reader
        if (file != nullptr) file->Close(); //Cerar tipo File
    }
    return result;*/
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(TXT_TORNILLO_FILE_NAME)) {
            result = gcnew List<MechanicComponent^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                MechanicComponent^ tornillo = gcnew MechanicComponent();
                tornillo->Id = Convert::ToInt32(record[0]);
                tornillo->Name = record[1];
                tornillo->Stock = Convert::ToInt32(record[2]);
                tornillo->Proveedor = record[3];
                tornillo->UnitaryPrice = Convert::ToDouble(record[4]);
                ((List<MechanicComponent^>^)result)->Add(tornillo);//Casteo
            }
        }
        if (reader != nullptr) reader->Close(); //Cerar tipo Reader
        if (file != nullptr) file->Close(); //Cerar tipo File
    }
    return result;

}

void MecaTrafiSystemPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Employee^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Employee^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();

    }
}

Object^ MecaTrafiSystemPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(XML_EMPLOYEE_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Employee^>::typeid);
                result = xmlSerializer->Deserialize(reader);//Serializar: Pasar un objeto a una trama de bits para guardar
                //Deserializar para pasar una serie a un objeto
            }
            //Reader->Close()//AQUI NO DEBE ESTAR
        }
    }
    catch (Exception^ ex) { //Cualquier cosa hablla una falla se va a tirar una falla
        throw ex;

    }
    finally { //Lo que si o si va a pasar
        if (reader != nullptr) reader->Close(); //Reader maneja la apertura del archivo y se verifica que este realmente exista

    }
    return result;
}

void MecaTrafiSystemPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();

    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();

    }
}

Object^ MecaTrafiSystemPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
        //Reader->Close()//AQUI NO DEBE ESTAR

    }
    catch (Exception^ ex) { //Cualquier cosa hablla una falla se va a tirar una falla
        throw ex;

    }
    finally { //Lo que si o si va a pasar
        if (file != nullptr) file->Close();

    }
    return result;
}

int MecaTrafiSystemPersistance::Persistance::AddEmployee(Employee^ employee)
{
    employeeListDB->Add(employee);
    //  PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB); //Metodo para .txt
    //  PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB); //Metodo para XML
    PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, employeeListDB); //Metodo para Binario
    return 1;
}

List<Employee^>^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployees()
{
    //employeeListDB = (List<Employee^>^)LoadTextFile(TXT_EMPLOYEE_FILE_NAME); //Casting Metodo para .txt
   // employeeListDB = (List<Employee^>^)LoadXMLFile(XML_EMPLOYEE_FILE_NAME); //Casting Metodo para XML
    employeeListDB = (List<Employee^>^)LoadBinaryFile(BIN_EMPLOYEE_FILE_NAME);// Metodo para Binario
    if (employeeListDB == nullptr) {
        employeeListDB = gcnew List<Employee^>(); // Este es el caso que si es un nullptr
    }
    return employeeListDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateEmployee(Employee^ employee)
{
    for (int i = 0; i < employeeListDB->Count; i++) { //Buscar 
        if (employeeListDB[i]->Id == employee->Id) {
            employeeListDB[i] = employee; //Modifica el dato
            // PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
            // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, employeeListDB);// Metodo para Binario
            return employee->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteEmployee(int employeeId)
{
    for (int i = 0; i < employeeListDB->Count; i++) {
        if (employeeListDB[i]->Id == employeeId) {
            employeeListDB->RemoveAt(i);
            //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
           // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, employeeListDB);// Metodo para Binario
            return employeeId;
        }
    }
    return 0;
}

Employee^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployeesById(int employeeId)
{
    // employeeListDB = (List<Employee^>^)LoadTextFile(TXT_EMPLOYEE_FILE_NAME); //Carga Archivo
     //employeeListDB = (List<Employee^>^)LoadXMLFile(XML_EMPLOYEE_FILE_NAME); 
    employeeListDB = (List<Employee^>^)LoadBinaryFile(BIN_EMPLOYEE_FILE_NAME);

    for (int i = 0; i < employeeListDB->Count; i++) { //Cuenta
        if (employeeListDB[i]->Id == employeeId) { //Si lo encuentra lo retorna
            return employeeListDB[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemPersistance::Persistance::Addclient(Client^ cliente)
{
    clientlistdatos->Add(cliente);
    //PersistTextFile(TXT_CLIENT_FILE_NAME, clientlistdatos);
    //PersistTextFile(XML_CLIENT_FILE_NAME, clientlistdatos);
    PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);

    return 1;
}

List<Client^>^ MecaTrafiSystemPersistance::Persistance::Queryallcliente()
{
    //clientlistdatos = (List<Client^>^)LoadXMLFile(XML_CLIENT_FILE_NAME);
    clientlistdatos = (List<Client^>^)LoadBinaryFile(BIN_CLIENT_FILE_NAME);
    if (clientlistdatos == nullptr)
        clientlistdatos = gcnew List<Client^>();
    return clientlistdatos;
}

int MecaTrafiSystemPersistance::Persistance::UpdateClient(Client^ cliente)
{
    for (int i = 0; i < clientlistdatos->Count; i++) { //Buscar 
        if (clientlistdatos[i]->Id == cliente->Id) {
            clientlistdatos[i] = cliente; //Modifica el dato
            //PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, clientlistdatos);// Metodo para Binario
            PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);
            return cliente->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteClient(int clienteId)
{
    for (int i = 0; i < clientlistdatos->Count; i++) {
        if (clientlistdatos[i]->Id == clienteId) {
            clientlistdatos->RemoveAt(i);
            //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
           // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);
            return clienteId;
        }
    }
    return 0;
}



Client^ MecaTrafiSystemPersistance::Persistance::Queryallclienteid(int clienteId)
{
    clientlistdatos = (List<Client^>^)LoadBinaryFile(BIN_CLIENT_FILE_NAME);
    for (int i = 0; i < clientlistdatos->Count; i++) { //Cuenta
        if (clientlistdatos[i]->Id == clienteId) { //Si lo encuentra lo retorna
            return clientlistdatos[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemPersistance::Persistance::Addtornillo(MechanicComponent^ tornillo)
{
    tornillosDB->Add(tornillo);

    PersistBinaryFile(BIN_TORNILLO_FILE_NAME, tornillosDB);

    return 1;
}

int MecaTrafiSystemPersistance::Persistance::Addfaja(MechanicComponent^ faja)
{
    fajasDB->Add(faja);
    //PersistTextFile(TXT_CLIENT_FILE_NAME, clientlistdatos);
    //PersistTextFile(XML_CLIENT_FILE_NAME, clientlistdatos);
    PersistBinaryFile(BIN_FAJAS_FILE_NAME, fajasDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryallfaja()
{
    fajasDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_FAJAS_FILE_NAME);
    if (fajasDB == nullptr)
        fajasDB = gcnew List<MechanicComponent^>();
    return fajasDB;
}

int MecaTrafiSystemPersistance::Persistance::Updatefaja(MechanicComponent^ faja)
{
    for (int i = 0; i < fajasDB->Count; i++) { //Buscar 
        if (fajasDB[i]->Id == faja->Id) {
            fajasDB[i] = faja; //Modifica el dato
            //PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, clientlistdatos);// Metodo para Binario
            PersistBinaryFile(BIN_FAJAS_FILE_NAME, fajasDB);
            return faja->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::Deletefaja(int fajaId)
{
    for (int i = 0; i < fajasDB->Count; i++) {
        if (fajasDB[i]->Id == fajaId) {
            fajasDB->RemoveAt(i);
            //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
           // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_FAJAS_FILE_NAME, fajasDB);
            return fajaId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::Queryallfajaid(int fajaId)
{
    fajasDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_FAJAS_FILE_NAME);
    for (int i = 0; i < fajasDB->Count; i++) { //Cuenta
        if (fajasDB[i]->Id == fajaId) { //Si lo encuentra lo retorna
            return fajasDB[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemPersistance::Persistance::Addpolea(MechanicComponent^ polea)
{
    poleaDB->Add(polea);

    PersistBinaryFile(BIN_POLEAS_FILE_NAME, poleaDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryallpolea()
{
    poleaDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_POLEAS_FILE_NAME);
    if (poleaDB == nullptr)
        poleaDB = gcnew List<MechanicComponent^>();
    return poleaDB;
}

int MecaTrafiSystemPersistance::Persistance::Updatepolea(MechanicComponent^ polea)
{
    for (int i = 0; i < poleaDB->Count; i++) { //Buscar 
        if (poleaDB[i]->Id == polea->Id) {
            poleaDB[i] = polea; //Modifica el dato
            //PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, clientlistdatos);// Metodo para Binario
            PersistBinaryFile(BIN_POLEAS_FILE_NAME, poleaDB);
            return polea->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::Deletepolea(int poleaId)
{
    for (int i = 0; i < poleaDB->Count; i++) {
        if (poleaDB[i]->Id == poleaId) {
            poleaDB->RemoveAt(i);

            PersistBinaryFile(BIN_POLEAS_FILE_NAME, poleaDB);
            return poleaId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::Queryallpoleaid(int poleaId)
{
    poleaDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_POLEAS_FILE_NAME);
    for (int i = 0; i < poleaDB->Count; i++) { //Cuenta
        if (poleaDB[i]->Id == poleaId) { //Si lo encuentra lo retorna
            return poleaDB[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemPersistance::Persistance::RegisterOrder(SaleOrder^ order)
{
    orderListDB->Add(order);
    PersistBinaryFile(BIN_ORDERS_FILE_NAME, orderListDB);
    return 1;
}

List<SaleOrder^>^ MecaTrafiSystemPersistance::Persistance::QueryAllOrders()
{
    orderListDB = (List<SaleOrder^>^)LoadBinaryFile(BIN_ORDERS_FILE_NAME);
    if (orderListDB == nullptr) {
        orderListDB = gcnew List<SaleOrder^>();
    }
    return orderListDB;
}
int MecaTrafiSystemPersistance::Persistance::Addrodamiento(MechanicComponent^ rodamiento)
{
    rodamientoDB->Add(rodamiento);

    PersistBinaryFile(BIN_RODAMIENTO_FILE_NAME, rodamientoDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryallrodamiento()
{
    rodamientoDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_RODAMIENTO_FILE_NAME);
    if (rodamientoDB == nullptr)
        rodamientoDB = gcnew List<MechanicComponent^>();
    return rodamientoDB;
}

int MecaTrafiSystemPersistance::Persistance::Updaterodamiento(MechanicComponent^ rodamiento)
{
    for (int i = 0; i < rodamientoDB->Count; i++) { //Buscar 
        if (rodamientoDB[i]->Id == rodamiento->Id) {
            rodamientoDB[i] = rodamiento; //Modifica el dato

            PersistBinaryFile(BIN_RODAMIENTO_FILE_NAME, rodamientoDB);
            return rodamiento->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::Deleterodamiento(int rodamientoId)
{
    for (int i = 0; i < rodamientoDB->Count; i++) {
        if (rodamientoDB[i]->Id == rodamientoId) {
            rodamientoDB->RemoveAt(i);

            PersistBinaryFile(BIN_RODAMIENTO_FILE_NAME, rodamientoDB);
            return rodamientoId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::Queryallrodamientoid(int rodamientoId)
{
    rodamientoDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_RODAMIENTO_FILE_NAME);
    for (int i = 0; i < rodamientoDB->Count; i++) { //Cuenta
        if (rodamientoDB[i]->Id == rodamientoId) { //Si lo encuentra lo retorna
            return rodamientoDB[i];
        }
    }
    return nullptr;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryalltornillo()
{
    tornillosDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_TORNILLO_FILE_NAME);
    if (tornillosDB == nullptr)
        tornillosDB = gcnew List<MechanicComponent^>();
    return tornillosDB;
}

int MecaTrafiSystemPersistance::Persistance::Updatetornillo(MechanicComponent^ tornillo)
{
    for (int i = 0; i < tornillosDB->Count; i++) { //Buscar 
        if (tornillosDB[i]->Id == tornillo->Id) {
            tornillosDB[i] = tornillo; //Modifica el dato
            //PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, clientlistdatos);// Metodo para Binario
            PersistBinaryFile(BIN_TORNILLO_FILE_NAME, tornillosDB);
            return tornillo->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::Deletetornillo(int tornilloId)
{
    for (int i = 0; i < tornillosDB->Count; i++) {
        if (tornillosDB[i]->Id == tornilloId) {
            tornillosDB->RemoveAt(i);
            //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
           // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_TORNILLO_FILE_NAME, tornillosDB);
            return tornilloId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::Queryalltornilloid(int tornilloId)
{
    tornillosDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_TORNILLO_FILE_NAME);
    for (int i = 0; i < tornillosDB->Count; i++) { //Cuenta
        if (tornillosDB[i]->Id == tornilloId) { //Si lo encuentra lo retorna
            return tornillosDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA MOTOR AC - STOCK
int MecaTrafiSystemPersistance::Persistance::AddMotorACStock(MechanicComponent^ motorAC)
{
    motorACDB->Add(motorAC);

    PersistBinaryFile(BIN_MOTORAC_FILE_NAME, motorACDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACStock()
{
    motorACDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORAC_FILE_NAME);
    if (motorACDB == nullptr)
        motorACDB = gcnew List<MechanicComponent^>();
    return motorACDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorACStock(MechanicComponent^ motorAC)
{
    for (int i = 0; i < motorACDB->Count; i++) {
        if (motorACDB[i]->Id == motorAC->Id) {
            motorACDB[i] = motorAC;
            PersistBinaryFile(BIN_MOTORAC_FILE_NAME, motorACDB);
            return motorAC->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorACStock(int motorACId)
{
    for (int i = 0; i < motorACDB->Count; i++) {
        if (motorACDB[i]->Id == motorACId) {
            motorACDB->RemoveAt(i);
            PersistBinaryFile(BIN_MOTORAC_FILE_NAME, motorACDB);
            return motorACId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACStockById(int motorACId)
{
    motorACDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORAC_FILE_NAME);
    for (int i = 0; i < motorACDB->Count; i++) { //Cuenta
        if (motorACDB[i]->Id == motorACId) { //Si lo encuentra lo retorna
            return motorACDB[i];
        }
    }
    return nullptr;
}

//METODOS PARA MOTOR DC - STOCK
int MecaTrafiSystemPersistance::Persistance::AddMotorDCStock(MechanicComponent^ motorDC)
{
    motorDCDB->Add(motorDC);

    PersistBinaryFile(BIN_MOTORDC_FILE_NAME, motorDCDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCStock()
{
    motorDCDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORDC_FILE_NAME);
    if (motorDCDB == nullptr)
        motorDCDB = gcnew List<MechanicComponent^>();
    return motorDCDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorDCStock(MechanicComponent^ motorDC)
{
    for (int i = 0; i < motorDCDB->Count; i++) {
        if (motorDCDB[i]->Id == motorDC->Id) {
            motorDCDB[i] = motorDC;
            PersistBinaryFile(BIN_MOTORDC_FILE_NAME, motorDCDB);
            return motorDC->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorDCStock(int motorDCId)
{
    for (int i = 0; i < motorDCDB->Count; i++) {
        if (motorDCDB[i]->Id == motorDCId) {
            motorDCDB->RemoveAt(i);
            PersistBinaryFile(BIN_MOTORDC_FILE_NAME, motorDCDB);
            return motorDCId;
        }
    }
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCStockById(int motorDCId)
{
    motorDCDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORDC_FILE_NAME);
    for (int i = 0; i < motorDCDB->Count; i++) { //Cuenta
        if (motorDCDB[i]->Id == motorDCId) { //Si lo encuentra lo retorna
            return motorDCDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA TORNILLO - COMPRA
int MecaTrafiSystemPersistance::Persistance::AddTornilloPurchase(SupplyProduct^ tornilloPurchase)
{
    tornillosPurchaseDB->Add(tornilloPurchase);

    PersistBinaryFile(BIN_PURCHASETORNILLO_FILE_NAME, tornillosPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchase()
{
    tornillosPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASETORNILLO_FILE_NAME);
    if (tornillosPurchaseDB == nullptr)
        tornillosPurchaseDB = gcnew List<SupplyProduct^>();
    return tornillosPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateTornilloPurchase(SupplyProduct^ tornilloPurchase)
{
    for (int i = 0; i < tornillosPurchaseDB->Count; i++) {
        if (tornillosPurchaseDB[i]->Id == tornilloPurchase->Id) {
            tornillosPurchaseDB[i] = tornilloPurchase;
            PersistBinaryFile(BIN_PURCHASETORNILLO_FILE_NAME, tornillosPurchaseDB);
            return tornilloPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteTornilloPurchase(int tornilloPurchaseId)
{
    for (int i = 0; i < tornillosPurchaseDB->Count; i++) {
        if (tornillosPurchaseDB[i]->Id == tornilloPurchaseId) {
            tornillosPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASETORNILLO_FILE_NAME, tornillosPurchaseDB);
            return tornilloPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchaseById(int tornilloPurchaseId)
{
    tornillosPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASETORNILLO_FILE_NAME);
    for (int i = 0; i < tornillosPurchaseDB->Count; i++) { //Cuenta
        if (tornillosPurchaseDB[i]->Id == tornilloPurchaseId) { //Si lo encuentra lo retorna
            return tornillosPurchaseDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA FAJA - COMPRA
int MecaTrafiSystemPersistance::Persistance::AddFajaPurchase(SupplyProduct^ fajaPurchase)
{
    fajasPurchaseDB->Add(fajaPurchase);

    PersistBinaryFile(BIN_PURCHASEFAJAS_FILE_NAME, fajasPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchase()
{
    fajasPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEFAJAS_FILE_NAME);
    if (fajasPurchaseDB == nullptr)
        fajasPurchaseDB = gcnew List<SupplyProduct^>();
    return fajasPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateFajaPurchase(SupplyProduct^ fajaPurchase)
{
    for (int i = 0; i < fajasPurchaseDB->Count; i++) {
        if (fajasPurchaseDB[i]->Id == fajaPurchase->Id) {
            fajasPurchaseDB[i] = fajaPurchase;
            PersistBinaryFile(BIN_PURCHASEFAJAS_FILE_NAME, fajasPurchaseDB);
            return fajaPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteFajaPurchase(int fajaPurchaseId)
{
    for (int i = 0; i < fajasPurchaseDB->Count; i++) {
        if (fajasPurchaseDB[i]->Id == fajaPurchaseId) {
            fajasPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASEFAJAS_FILE_NAME, fajasPurchaseDB);
            return fajaPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchaseById(int fajaPurchaseId)
{
    fajasPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEFAJAS_FILE_NAME);
    for (int i = 0; i < fajasPurchaseDB->Count; i++) { //Cuenta
        if (fajasPurchaseDB[i]->Id == fajaPurchaseId) { //Si lo encuentra lo retorna
            return fajasPurchaseDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA POLEA - COMPRA
int MecaTrafiSystemPersistance::Persistance::AddPoleaPurchase(SupplyProduct^ poleaPurchase)
{
    poleaPurchaseDB->Add(poleaPurchase);

    PersistBinaryFile(BIN_PURCHASEPOLEAS_FILE_NAME, poleaPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaPurchase()
{
    poleaPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEPOLEAS_FILE_NAME);
    if (poleaPurchaseDB == nullptr)
        poleaPurchaseDB = gcnew List<SupplyProduct^>();
    return poleaPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdatePoleaPurchase(SupplyProduct^ poleaPurchase)
{
    for (int i = 0; i < poleaPurchaseDB->Count; i++) {
        if (poleaPurchaseDB[i]->Id == poleaPurchase->Id) {
            poleaPurchaseDB[i] = poleaPurchase;
            PersistBinaryFile(BIN_PURCHASEPOLEAS_FILE_NAME, poleaPurchaseDB);
            return poleaPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeletePoleaPurchase(int poleaPurchaseId)
{
    for (int i = 0; i < poleaPurchaseDB->Count; i++) {
        if (poleaPurchaseDB[i]->Id == poleaPurchaseId) {
            poleaPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASEPOLEAS_FILE_NAME, poleaPurchaseDB);
            return poleaPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaByIdPurchase(int poleaPurchaseId)
{
    poleaPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEPOLEAS_FILE_NAME);
    for (int i = 0; i < poleaPurchaseDB->Count; i++) { //Cuenta
        if (poleaPurchaseDB[i]->Id == poleaPurchaseId) { //Si lo encuentra lo retorna
            return poleaPurchaseDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA RODAMIENTO - COMPRA
int MecaTrafiSystemPersistance::Persistance::AddRodamientoPurchase(SupplyProduct^ rodamientoPurchase)
{
    rodamientoPurchaseDB->Add(rodamientoPurchase);

    PersistBinaryFile(BIN_PURCHASERODAMIENTO_FILE_NAME, rodamientoPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchase()
{
    rodamientoPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASERODAMIENTO_FILE_NAME);
    if (rodamientoPurchaseDB == nullptr)
        rodamientoPurchaseDB = gcnew List<SupplyProduct^>();
    return rodamientoPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateRodamientoPurchase(SupplyProduct^ rodamientoPurchase)
{
    for (int i = 0; i < rodamientoPurchaseDB->Count; i++) {
        if (rodamientoPurchaseDB[i]->Id == rodamientoPurchase->Id) {
            rodamientoPurchaseDB[i] = rodamientoPurchase;
            PersistBinaryFile(BIN_PURCHASERODAMIENTO_FILE_NAME, rodamientoPurchaseDB);
            return rodamientoPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteRodamientoPurchase(int rodamientoPurchaseId)
{
    for (int i = 0; i < rodamientoPurchaseDB->Count; i++) {
        if (rodamientoPurchaseDB[i]->Id == rodamientoPurchaseId) {
            rodamientoPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASERODAMIENTO_FILE_NAME, rodamientoPurchaseDB);
            return rodamientoPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchaseById(int rodamientoPurchaseId)
{
    rodamientoPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASERODAMIENTO_FILE_NAME);
    for (int i = 0; i < rodamientoPurchaseDB->Count; i++) { //Cuenta
        if (rodamientoPurchaseDB[i]->Id == rodamientoPurchaseId) { //Si lo encuentra lo retorna
            return rodamientoPurchaseDB[i];
        }
    }
    return nullptr;
}

//METODOS PARA MOTOR AC - COMPRA
int MecaTrafiSystemPersistance::Persistance::AddMotorACPurchase(SupplyProduct^ motorACPurchase)
{
    motorACPurchaseDB->Add(motorACPurchase);

    PersistBinaryFile(BIN_PURCHASEMOTORAC_FILE_NAME, motorACPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorACPurchase()
{
    motorACPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEMOTORAC_FILE_NAME);
    if (motorACPurchaseDB == nullptr)
        motorACPurchaseDB = gcnew List<SupplyProduct^>();
    return motorACPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorACPurchase(SupplyProduct^ motorACPurchase)
{
    for (int i = 0; i < motorACPurchaseDB->Count; i++) {
        if (motorACPurchaseDB[i]->Id == motorACPurchase->Id) {
            motorACPurchaseDB[i] = motorACPurchase;
            PersistBinaryFile(BIN_PURCHASEMOTORAC_FILE_NAME, motorACPurchaseDB);
            return motorACPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorACPurchase(int motorACPurchaseId)
{
    for (int i = 0; i < motorACPurchaseDB->Count; i++) {
        if (motorACPurchaseDB[i]->Id == motorACPurchaseId) {
            motorACPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASEMOTORAC_FILE_NAME, motorACPurchaseDB);
            return motorACPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorACPurchaseById(int motorACPurchaseId)
{
    motorACPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEMOTORAC_FILE_NAME);
    for (int i = 0; i < motorACPurchaseDB->Count; i++) { //Cuenta
        if (motorACPurchaseDB[i]->Id == motorACPurchaseId) { //Si lo encuentra lo retorna
            return motorACPurchaseDB[i];
        }
    }
    return nullptr;
}
//METODOS PARA MOTOR DC - COMPRA 
int MecaTrafiSystemPersistance::Persistance::AddMotorDCPurchase(SupplyProduct^ motorDCPurchase)
{
    motorDCPurchaseDB->Add(motorDCPurchase);

    PersistBinaryFile(BIN_PURCHASEMOTORDC_FILE_NAME, motorDCPurchaseDB);

    return 1;
}

List<SupplyProduct^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorDCPurchase()
{
    motorDCPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEMOTORDC_FILE_NAME);
    if (motorDCPurchaseDB == nullptr)
        motorDCPurchaseDB = gcnew List<SupplyProduct^>();
    return motorDCPurchaseDB;
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorDCPurchase(SupplyProduct^ motorDCPurchase)
{
    for (int i = 0; i < motorDCPurchaseDB->Count; i++) {
        if (motorDCPurchaseDB[i]->Id == motorDCPurchase->Id) {
            motorDCPurchaseDB[i] = motorDCPurchase;
            PersistBinaryFile(BIN_PURCHASEMOTORDC_FILE_NAME, motorDCPurchaseDB);
            return motorDCPurchase->Id;
        }
    }
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorDCPurchase(int motorDCPurchaseId)
{
    for (int i = 0; i < motorDCPurchaseDB->Count; i++) {
        if (motorDCPurchaseDB[i]->Id == motorDCPurchaseId) {
            motorDCPurchaseDB->RemoveAt(i);
            PersistBinaryFile(BIN_PURCHASEMOTORDC_FILE_NAME, motorDCPurchaseDB);
            return motorDCPurchaseId;
        }
    }
    return 0;
}

SupplyProduct^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorDCPurchaseById(int motorDCPurchaseId)
{
    motorDCPurchaseDB = (List<SupplyProduct^>^)LoadBinaryFile(BIN_PURCHASEMOTORDC_FILE_NAME);
    for (int i = 0; i < motorDCPurchaseDB->Count; i++) { //Cuenta
        if (motorDCPurchaseDB[i]->Id == motorDCPurchaseId) { //Si lo encuentra lo retorna
            return motorDCPurchaseDB[i];
        }
    }
    return nullptr;
}

int MecaTrafiSystemPersistance::Persistance::RegisterPurchase(PurchaseOrder^ compraOrden)
{
    compraOrdenListDB->Add(compraOrden);
    PersistBinaryFile(BIN_COMPRAORDERS_FILE_NAME, compraOrdenListDB);
    return 1;
}

List<PurchaseOrder^>^ MecaTrafiSystemPersistance::Persistance::QueryAllPurchaseOrders()
{
    compraOrdenListDB = (List<PurchaseOrder^>^)LoadBinaryFile(BIN_COMPRAORDERS_FILE_NAME);
    if (compraOrdenListDB == nullptr)
        compraOrdenListDB = gcnew List<PurchaseOrder^>();
    return compraOrdenListDB;
}
