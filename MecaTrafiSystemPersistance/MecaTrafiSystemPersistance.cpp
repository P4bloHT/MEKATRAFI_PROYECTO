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

int MecaTrafiSystemPersistance::Persistance::AddTornilloPurchase(MechanicComponent^ tornilloPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateTornilloPurchase(MechanicComponent^ tornilloPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteTornilloPurchase(int tornilloPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchaseById(int tornilloPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddFajaPurchase(MechanicComponent^ fajaPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateFajaPurchase(MechanicComponent^ fajaPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteFajaPurchase(int fajaPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchaseById(int fajaPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddPoleaPurchase(MechanicComponent^ poleaPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdatePoleaPurchase(MechanicComponent^ poleaPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeletePoleaPurchase(int poleaPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaIdPurchase(int poleaPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddRodamientoPurchase(MechanicComponent^ rodamientoPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateRodamientoPurchase(MechanicComponent^ rodamientoPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteRodamientoPurchase(int rodamientoPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchaseById(int rodamientoPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddMotorACPurchase(MechanicComponent^ motorACPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorACPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorACPurchase(MechanicComponent^ motorACPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorACPurchase(int motorACPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACPurchaseById(int motorACPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddMotorDCPurchase(MechanicComponent^ motorDCPurchase)
{
    return 0;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorDCPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorDCPurchase(MechanicComponent^ motorDCPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorDCPurchase(int motorDCPurchaseId)
{
    return 0;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCPurchaseById(int motorDCPurchaseId)
{
    throw gcnew System::NotImplementedException();
}
