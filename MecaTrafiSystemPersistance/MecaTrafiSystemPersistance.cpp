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

SqlConnection^ MecaTrafiSystemPersistance::Persistance::GetConnection()
{
    
      SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "vichoxd";
    conn->ConnectionString = "Server=raul202024945.cbfa8qfn6wo3.us-east-1.rds.amazonaws.com;" +
        "Database =  Mecatrafi2;" +
        "User ID = Mecatrafi2a; " +
        "Password = " + password + ";";
    conn->Open();
    return conn;
}

int MecaTrafiSystemPersistance::Persistance::AddEmployee(Employee^ employee)
{
  //  employeeListDB->Add(employee);
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
 //   clientlistdatos->Add(cliente);
    //PersistTextFile(TXT_CLIENT_FILE_NAME, clientlistdatos);
    //PersistTextFile(XML_CLIENT_FILE_NAME, clientlistdatos);
   // PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);

    //return 1;
    int clienteId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddClientes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType:: StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = cliente-> Name;
        cmd->Parameters->Add("@CARRERA", System::Data::SqlDbType::VarChar, 200)->Value = cliente-> Carrera;
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::VarChar, 200)->Value = cliente-> Contact;
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::VarChar, 200)->Value = cliente-> Id;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = cliente->Name;
        if (cliente->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = cliente->Photo;
        cmd-> Prepare();
        cmd-> ExecuteNonQuery();

        clienteId  = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return clienteId;
}

List<Client^>^ MecaTrafiSystemPersistance::Persistance::Queryallcliente()
{
   
    clientlistdatos = gcnew List<Client^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllClientes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            Client^ cliente = gcnew Client();
            cliente->Id = Convert::ToInt32(reader["CODIGO"]->ToString());
            cliente->Name = reader["NAME"]->ToString();
            cliente->Carrera = reader["CARRERA"]->ToString();
            cliente->Contact = Convert::ToInt32(reader["TELEFONO"]->ToString());
            if (!DBNull:: Value->Equals(reader["PHOTO"]))
                cliente ->Photo = (array<Byte>^)reader["PHOTO"];
           
            clientlistdatos->Add(cliente);
        }

    }catch(Exception^ex){
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn-> Close();

    }
    return clientlistdatos;
  
    
}

int MecaTrafiSystemPersistance::Persistance::UpdateClient(Client^ cliente)
{
    /*for (int i = 0; i < clientlistdatos->Count; i++) { //Buscar 
        if (clientlistdatos[i]->Id == cliente->Id) {
            clientlistdatos[i] = cliente; //Modifica el dato
            //PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, clientlistdatos);// Metodo para Binario
            PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);
            return cliente->Id;
        }
    }
    return 0;
    */
    int clienteId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateClientes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = cliente->Name;
        cmd->Parameters->Add("@CARRERA", System::Data::SqlDbType::VarChar, 200)->Value = cliente->Carrera;
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::VarChar, 200)->Value = cliente->Contact;
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::VarChar, 200)->Value = cliente->Id;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = cliente->Name;
        cmd->Prepare(); 
        cmd->Parameters["@NAME"]->Value = cliente->Name;
        cmd->Parameters["@CARRERA"]->Value = cliente->Carrera;
        cmd->Parameters["@TELEFONO"]->Value = cliente->Contact;
        cmd->Parameters["@CODIGO"]->Value = cliente->Id;
        cmd->Parameters["@PHOTO"]->Value = cliente->Name;
        if (cliente->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = cliente->Photo;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;

}

int MecaTrafiSystemPersistance::Persistance::DeleteClient(int clienteId)
{
 /*   for (int i = 0; i < clientlistdatos->Count; i++) {
        if (clientlistdatos[i]->Id == clienteId) {
            clientlistdatos->RemoveAt(i);
            //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
           // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
            PersistBinaryFile(BIN_CLIENT_FILE_NAME, clientlistdatos);
            return clienteId;
        }
    }
    return 0;*/

    SqlConnection^ conn; 
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection(); 

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteClientes";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn); 
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int); 
        cmd->Prepare(); 
        cmd->Parameters["@ID"]->Value = clienteId; 

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        //robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}



Client^ MecaTrafiSystemPersistance::Persistance::Queryallclienteid(int clienteId)
{
   // clientlistdatos = (List<Client^>^)LoadBinaryFile(BIN_CLIENT_FILE_NAME);
    //for (int i = 0; i < clientlistdatos->Count; i++) { //Cuenta
    //    if (clientlistdatos[i]->Id == clienteId) { //Si lo encuentra lo retorna
     //       return clientlistdatos[i];
     //   }
  //  }
   // return nullptr;
    Client^ cliente;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryClientesId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int); 
      
       
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = clienteId; 
      
        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {
            cliente = gcnew Client(); 
           // Client^ cliente = gcnew Client();
            cliente->Id = Convert::ToInt64(reader["CODIGO"]->ToString());
            cliente->Name = reader["NAME"]->ToString();
            cliente->Carrera = reader["CARRERA"]->ToString();
            cliente->Contact = Convert::ToInt64(reader["TELEFONO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"])) 
                cliente->Photo = (array<Byte>^)reader["PHOTO"]; 
        }
    }
    catch (Exception^ ex) {
        throw ex ; V
    }
    finally {
        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return cliente;

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
    //fajasDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_FAJAS_FILE_NAME);
   // if (fajasDB == nullptr)
    //    fajasDB = gcnew List<MechanicComponent^>();
   // return fajasDB;
    fajasDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM FAJA_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ faja = gcnew MechanicComponent();
            faja->Id = Convert::ToInt32(reader["ID_FAJA"]->ToString());
            faja->Name = reader["NOMBRE_FAJA"]->ToString();
            faja->Proveedor = reader["PROVEEDOR_FAJA"]->ToString();
            faja->Stock = Convert::ToInt32(reader["CANTIDAD_FAJA"]->ToString());
            faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_FAJA"]->ToString());

            fajasDB->Add(faja);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
   // fajasDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_FAJAS_FILE_NAME);
   // for (int i = 0; i < fajasDB->Count; i++) { //Cuenta
    //    if (fajasDB[i]->Id == fajaId) { //Si lo encuentra lo retorna
    //        return fajasDB[i];
    //    }
  //  }
   // return nullptr;
    MechanicComponent^ faja;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM FAJA_STOCK WHERE ID= " + fajaId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            MechanicComponent^ faja = gcnew MechanicComponent();
            faja->Id = Convert::ToInt32(reader["ID_FAJA"]->ToString());
            faja->Name = reader["NOMBRE_FAJA"]->ToString();
            faja->Proveedor = reader["PROVEEDOR_FAJA"]->ToString();
            faja->Stock = Convert::ToInt32(reader["CANTIDAD_FAJA"]->ToString());
            faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_FAJA"]->ToString());
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {

        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return faja;
}

int MecaTrafiSystemPersistance::Persistance::Addpolea(MechanicComponent^ polea)
{
    poleaDB->Add(polea);

    PersistBinaryFile(BIN_POLEAS_FILE_NAME, poleaDB);

    return 1;
}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryallpolea()
{
   // poleaDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_POLEAS_FILE_NAME);
    //if (poleaDB == nullptr)
     //   poleaDB = gcnew List<MechanicComponent^>();
  //  return poleaDB;
    poleaDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM POLEA_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ polea = gcnew MechanicComponent();
            polea->Id = Convert::ToInt32(reader["ID_POLEA"]->ToString());
            polea->Name = reader["NOMBRE_POLEA"]->ToString();
            polea->Proveedor = reader["PROVEEDOR_POLEA"]->ToString();
            polea->Stock = Convert::ToInt32(reader["CANTIDAD_POLEA"]->ToString());
            polea->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_POLEA"]->ToString());

            poleaDB->Add(polea);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
  //  poleaDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_POLEAS_FILE_NAME);
   // for (int i = 0; i < poleaDB->Count; i++) { //Cuenta
   //     if (poleaDB[i]->Id == poleaId) { //Si lo encuentra lo retorna
      //      return poleaDB[i];
    //    }
  //  }
   // return nullptr;
    MechanicComponent^ polea;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM POLEA_STOCK WHERE ID= " + poleaId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {
            MechanicComponent^ polea = gcnew MechanicComponent();
            polea->Id = Convert::ToInt32(reader["ID_POLEA"]->ToString());
            polea->Name = reader["NOMBRE_POLEA"]->ToString();
            polea->Proveedor = reader["PROVEEDOR_POLEA"]->ToString();
            polea->Stock = Convert::ToInt32(reader["CANTIDAD_POLEA"]->ToString());
            polea->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_POLEA"]->ToString());
        }





    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();


    }
    return polea;

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
    //rodamientoDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_RODAMIENTO_FILE_NAME);
   // if (rodamientoDB == nullptr)
    //    rodamientoDB = gcnew List<MechanicComponent^>();
   // return rodamientoDB;
    rodamientoDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM RODAMIENTO_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ rodamiento = gcnew MechanicComponent();
            rodamiento->Id = Convert::ToInt32(reader["ID_RODAMIENTO"]->ToString());
            rodamiento->Name = reader["NOMBRE_RODAMIENTO"]->ToString();
            rodamiento->Proveedor = reader["PROVEEDOR_RODAMIENTO"]->ToString();
            rodamiento->Stock = Convert::ToInt32(reader["CANTIDAD_RODAMIENTO"]->ToString());
            rodamiento->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_RODAMIENTO"]->ToString());

            rodamientoDB->Add(rodamiento);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
   // rodamientoDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_RODAMIENTO_FILE_NAME);
   // for (int i = 0; i < rodamientoDB->Count; i++) { //Cuenta
   //     if (rodamientoDB[i]->Id == rodamientoId) { //Si lo encuentra lo retorna
    //        return rodamientoDB[i];
    //    }
   // }
   // return nullptr;
    MechanicComponent^ rodamiento;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM RODAMIENTO_STOCK WHERE ID= " + rodamientoId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            MechanicComponent^ rodamiento = gcnew MechanicComponent();
            rodamiento->Id = Convert::ToInt32(reader["ID_RODAMIENTO"]->ToString());
            rodamiento->Name = reader["NOMBRE_RODAMIENTO"]->ToString();
            rodamiento->Proveedor = reader["PROVEEDOR_RODAMIENTO"]->ToString();
            rodamiento->Stock = Convert::ToInt32(reader["CANTIDAD_RODAMIENTO"]->ToString());
            rodamiento->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_RODAMIENTO"]->ToString());
        }





    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return rodamiento;

}

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::Queryalltornillo()
{
    //tornillosDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_TORNILLO_FILE_NAME);
  //  if (tornillosDB == nullptr)
     //   tornillosDB = gcnew List<MechanicComponent^>();
   // return tornillosDB;
    tornillosDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM TORNILLO_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ tornillo = gcnew MechanicComponent();
            tornillo->Id = Convert::ToInt32(reader["ID_TORNILLO"]->ToString());
            tornillo->Name = reader["NOMBRE_TORNILLO"]->ToString();
            tornillo->Proveedor = reader["PROVEEDOR_TORNILLO"]->ToString();
            tornillo->Stock = Convert::ToInt32(reader["CANTIDAD_TORNILLO"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_TORNILLO"]->ToString());

            tornillosDB->Add(tornillo);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
   // tornillosDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_TORNILLO_FILE_NAME);
   // for (int i = 0; i < tornillosDB->Count; i++) { //Cuenta
    //    if (tornillosDB[i]->Id == tornilloId) { //Si lo encuentra lo retorna
    //        return tornillosDB[i];
     //   }
  //  }
  //  return nullptr;

    MechanicComponent^ tornillo;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM TORNILLO_STOCK WHERE ID= " + tornilloId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            MechanicComponent^ tornillo = gcnew MechanicComponent();
            tornillo->Id = Convert::ToInt32(reader["ID_TORNILLO"]->ToString());
            tornillo->Name = reader["NOMBRE_TORNILLO"]->ToString();
            tornillo->Proveedor = reader["PROVEEDOR_TORNILLO"]->ToString();
            tornillo->Stock = Convert::ToInt32(reader["CANTIDAD_TORNILLO"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_TORNILLO"]->ToString());
        }





    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return tornillo;

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
   // motorACDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORAC_FILE_NAME);
  //  if (motorACDB == nullptr)
    //    motorACDB = gcnew List<MechanicComponent^>();
  //  return motorACDB;
    motorACDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM MOTORESAC_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ motorac = gcnew MechanicComponent();
            motorac->Id = Convert::ToInt32(reader["ID_MOTORESAC"]->ToString());
            motorac->Name = reader["NOMBRE_MOTORESAC"]->ToString();
            motorac->Proveedor = reader["PROVEEDOR_MOTORESAC"]->ToString();
            motorac->Stock = Convert::ToInt32(reader["CANTIDAD_MOTORESAC"]->ToString());
            motorac->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_MOTORESAC"]->ToString());

            motorACDB->Add(motorac);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
   // motorACDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORAC_FILE_NAME);
   // for (int i = 0; i < motorACDB->Count; i++) { //Cuenta
    //    if (motorACDB[i]->Id == motorACId) { //Si lo encuentra lo retorna
    //        return motorACDB[i];
     //   }
  //  }
   // return nullptr;

    MechanicComponent^ motorac;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM MOTORESAC_STOCK WHERE ID= " + motorACId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            MechanicComponent^ motorac = gcnew MechanicComponent();
            motorac->Id = Convert::ToInt32(reader["ID_MOTORESAC"]->ToString());
            motorac->Name = reader["NOMBRE_MOTORESAC"]->ToString();
            motorac->Proveedor = reader["PROVEEDOR_MOTORESAC"]->ToString();
            motorac->Stock = Convert::ToInt32(reader["CANTIDAD_MOTORESAC"]->ToString());
            motorac->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_MOTORESAC"]->ToString());
        }


    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return motorac;
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
   // motorDCDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORDC_FILE_NAME);
   // if (motorDCDB == nullptr)
      //  motorDCDB = gcnew List<MechanicComponent^>();
   // return motorDCDB;
    motorDCDB = gcnew List<MechanicComponent^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM MOTORESDC_STOCK";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MechanicComponent^ motordc = gcnew MechanicComponent();
            motordc->Id = Convert::ToInt32(reader["ID_MOTORESDC"]->ToString());
            motordc->Name = reader["NOMBRE_MOTORESDC"]->ToString();
            motordc->Proveedor = reader["PROVEEDOR_MOTORESDC"]->ToString();
            motordc->Stock = Convert::ToInt32(reader["CANTIDAD_MOTORESDC"]->ToString());
            motordc->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_MOTORESDC"]->ToString());

            motorDCDB->Add(motordc);
        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
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
   // motorDCDB = (List<MechanicComponent^>^)LoadBinaryFile(BIN_MOTORDC_FILE_NAME);
    //for (int i = 0; i < motorDCDB->Count; i++) { //Cuenta
    //    if (motorDCDB[i]->Id == motorDCId) { //Si lo encuentra lo retorna
      //      return motorDCDB[i];
      //  }
  //  }
   // return nullptr;

    MechanicComponent^ motordc;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "SELECT * FROM MOTORESDC_STOCK WHERE ID= " + motorDCId;
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            MechanicComponent^ motordc = gcnew MechanicComponent();
            motordc->Id = Convert::ToInt32(reader["ID_MOTORESDC"]->ToString());
            motordc->Name = reader["NOMBRE_MOTORESDC"]->ToString();
            motordc->Proveedor = reader["PROVEEDOR_MOTORESDC"]->ToString();
            motordc->Stock = Convert::ToInt32(reader["CANTIDAD_MOTORESDC"]->ToString());
            motordc->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_MOTORESDC"]->ToString());
        }


    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {



        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return motordc;
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
    // TODO: Insertar una instrucción "return" aquí
}
