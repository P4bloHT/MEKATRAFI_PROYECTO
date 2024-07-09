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
  
   PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, employeeListDB); //Metodo para Binario
   return 1;
    
}

List<Employee^>^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployees()
{
   
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
            PersistBinaryFile(BIN_EMPLOYEE_FILE_NAME, employeeListDB);// Metodo para Binario
            return employeeId;
        }
    }
    return 0;
}

Employee^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployeesById(int employeeId)
{
  
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
        throw ex ; 
    }
    finally {
        //CERRAR LOS OBJETOS A LA BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();

    }
    return cliente;

}

int MecaTrafiSystemPersistance::Persistance::Addtornillo(TornilloCliente ^ tornillo)
{
    int tornilloId ;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddTornillo_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Definir parámetros del procedimiento almacenado
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = tornillo->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = tornillo->Brand;
        cmd->Parameters->Add("@UNITARYPRICE", System::Data::SqlDbType::Decimal)->Value = tornillo->UnitaryPrice;
        cmd->Parameters->Add("@LONGITUD", System::Data::SqlDbType::Decimal)->Value = tornillo->Longitud;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Material;
        cmd->Parameters->Add("@ROSCA", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Rosca;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Tipo;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Description;
        if (tornillo->Photo == nullptr)
            cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = DBNull::Value;
        else
            cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = tornillo->Photo;

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        // Ejecutar el comando
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        // Obtener el ID generado para el tornillo insertado
        tornilloId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return tornilloId;
}

int MecaTrafiSystemPersistance::Persistance::Addfaja(FajasCliente^ faja)
{
    int fajaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddFaja_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = faja->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = faja->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = faja->Brand;
        cmd->Parameters->Add("@ALTO_GOMA", System::Data::SqlDbType::VarChar, 200)->Value = faja->AltoDeGoma;
        cmd->Parameters->Add("@DIAMETRO_INTERNO", System::Data::SqlDbType::VarChar, 200)->Value = faja->DiametroInter;
        cmd->Parameters->Add("@DIAMETRO_EXTERNO", System::Data::SqlDbType::VarChar, 200)->Value = faja->DiametroExter;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = faja->UnitaryPrice;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = faja->Tipo;
        cmd->Parameters->Add("@DESCRIPTION ", System::Data::SqlDbType::VarChar, 400)->Value = faja->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = faja->Name;
        if (faja->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = faja->Photo;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        fajaId = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return fajaId;
}


List<FajasCliente^>^ MecaTrafiSystemPersistance::Persistance::Queryallfaja()
{
    
    fajasDB = gcnew List<FajasCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllFajas";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            FajasCliente^ faja = gcnew FajasCliente();
            faja->Id = Convert::ToInt32(reader["ID_FAJA"]->ToString());
            faja->Name = reader["NOMBRE_FAJA"]->ToString();
            faja->Proveedor = reader["PROVEEDOR_FAJA"]->ToString();
            faja->Stock = Convert::ToInt32(reader["CANTIDAD_FAJA"]->ToString());
            faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_FAJA"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                faja->Photo = (array<Byte>^)reader["PHOTO"];
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
    /* */
}

int MecaTrafiSystemPersistance::Persistance::Updatefaja(FajasCliente^ faja)
{
    int fajaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateFaja_stock "; 
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);  
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 

        // Agregar los parámetros
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = faja->Name;  
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = faja->Stock; 
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = faja->Brand; 
        cmd->Parameters->Add("@ALTO_GOMA", System::Data::SqlDbType::VarChar, 200)->Value = faja->AltoDeGoma; 
        cmd->Parameters->Add("@DIAMETRO_INTERNO", System::Data::SqlDbType::VarChar, 200)->Value = faja->DiametroInter; 
        cmd->Parameters->Add("@DIAMETRO_EXTERNO", System::Data::SqlDbType::VarChar, 200)->Value = faja->DiametroExter; 
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = faja->UnitaryPrice; 
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = faja->Tipo;  
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = faja->Description; 
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = faja->Name;
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = faja->Name;
        cmd->Parameters["@STOCK"]->Value = faja->Stock;
        cmd->Parameters["@MARCA"]->Value = faja->Brand;
        cmd->Parameters["@ALTO_GOMA"]->Value = faja->AltoDeGoma;
        cmd->Parameters["@DIAMETRO_INTERNO"]->Value = faja->DiametroInter;
        cmd->Parameters["@DIAMETRO_EXTERNO"]->Value = faja->DiametroExter;
        cmd->Parameters["@PRECIO_UNITARIO"]->Value = faja->UnitaryPrice;
        cmd->Parameters["@TIPO"]->Value = faja->Tipo;
        cmd->Parameters["@DESCRIPTION"]->Value = faja->Description;
   
        // PHOTO
        if (faja->Photo == nullptr) 
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value; 
        else
            cmd->Parameters["@PHOTO"]->Value = faja->Photo;  

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        fajaId = 1; // Éxito en la actualización (podrías asignar el ID de la faja actualizada si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return fajaId; // Devolver el resultado de la operación
}

int MecaTrafiSystemPersistance::Persistance::Deletefaja(int fajaId)
{
    for (int i = 0; i < fajasDB->Count; i++) {
        if (fajasDB[i]->Id == fajaId) {
            fajasDB->RemoveAt(i);
           
            PersistBinaryFile(BIN_FAJAS_FILE_NAME, fajasDB);
            return fajaId;
        }
    }
    return 0;
}

FajasCliente^ MecaTrafiSystemPersistance::Persistance::Queryallfajaid(int fajaId)
{
   
    FajasCliente^ faja;
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

            FajasCliente^ faja = gcnew FajasCliente();
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

int MecaTrafiSystemPersistance::Persistance::Addpolea(PoleaCliente^ polea)
{
   // poleaDB->Add(polea);

    //PersistBinaryFile(BIN_POLEAS_FILE_NAME, poleaDB);

  //  return 1;
    int poleaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddPolea_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = polea->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = polea->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = polea->Brand;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = polea->UnitaryPrice;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = polea->Tipo; 
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = polea->DiametroExter;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = polea->Material; 
        cmd->Parameters->Add("@DIAMETROEJE", System::Data::SqlDbType::Decimal)->Value = polea->DiametroEje;
        cmd->Parameters->Add("@DESCRIPTION ", System::Data::SqlDbType::VarChar, 400)->Value = polea->Description;
       //  cmd->Parameters->Add("@DIAMETRO_INTERNO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipod erosca;
        //cmd->Parameters->Add("@DIAMETRO_EXTERNO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = polea->Name;
        if (polea->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = polea->Photo;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        poleaId = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return poleaId;

}

List<PoleaCliente^>^ MecaTrafiSystemPersistance::Persistance::Queryallpolea()
{
  
    poleaDB = gcnew List<PoleaCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllPoleas";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            PoleaCliente^ polea = gcnew PoleaCliente();
            polea->Id = Convert::ToInt32(reader["ID"]->ToString());
            polea->Name = reader["NAME"]->ToString();
            polea->Proveedor = reader["PROVEEDOR"]->ToString();
            polea->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
           // faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNIT_FAJA"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                polea->Photo = (array<Byte>^)reader["PHOTO"];
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

int MecaTrafiSystemPersistance::Persistance::Updatepolea(PoleaCliente^ polea)
{
    int poleaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdatePolea_stock "; 
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn); 
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 

        // Agregar los parámetros
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = polea->Name; 
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = polea->Stock; 
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = polea->Brand; 
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = polea->UnitaryPrice; 
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = polea->Tipo; 
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = polea->DiametroExter; 
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = polea->Material; 
        cmd->Parameters->Add("@DIAMETROEJE", System::Data::SqlDbType::Decimal)->Value = polea->DiametroEje; 
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = polea->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = polea->Name;
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = polea->Name;
        cmd->Parameters["@STOCK"]->Value = polea->Stock;
        cmd->Parameters["@MARCA"]->Value = polea->Brand;
        cmd->Parameters["@PRECIO_UNITARIO"]->Value = polea->UnitaryPrice;
        cmd->Parameters["@TIPO"]->Value = polea->Tipo;
        cmd->Parameters["@DIAMETROEXTER"]->Value = polea->DiametroExter;
        cmd->Parameters["@MATERIAL"]->Value = polea->Material;
        cmd->Parameters["@DIAMETROEJE"]->Value = polea->DiametroEje;
        cmd->Parameters["@DESCRIPTION"]->Value = polea->Description;
      
        if (polea->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = polea->Photo;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        poleaId = 1; // Éxito en la actualización (podrías asignar el ID de la polea actualizada si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return poleaId; // Devolver el resultado de la operación
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

PoleaCliente^ MecaTrafiSystemPersistance::Persistance::Queryallpoleaid(int poleaId)
{
  
    PoleaCliente^ polea;
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
            PoleaCliente^ polea = gcnew PoleaCliente();
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
int MecaTrafiSystemPersistance::Persistance::Addrodamiento(RodamientosCliente^ rodamiento)
{
  //  rodamientoDB->Add(rodamiento);

  //  PersistBinaryFile(BIN_RODAMIENTO_FILE_NAME, rodamientoDB);

  //  return 1;
    int rodamientoId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddRodamiento_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = rodamiento->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = rodamiento->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = rodamiento->Brand;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = rodamiento->Tipo;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = rodamiento->UnitaryPrice; 
        cmd->Parameters->Add("@DESCRIPTION ", System::Data::SqlDbType::VarChar, 400)->Value = rodamiento->Description; 
        cmd->Parameters->Add("@DIAMETROINTER", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroExter;
        cmd->Parameters->Add("@ANCHO", System::Data::SqlDbType::Decimal)->Value = rodamiento->Ancho;
        //  cmd->Parameters->Add("@DIAMETRO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@PRECIO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
        
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = rodamiento->Name;
        if (rodamiento->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = rodamiento->Photo;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        rodamientoId = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return rodamientoId;

}

List<RodamientosCliente^>^ MecaTrafiSystemPersistance::Persistance::Queryallrodamiento()
{
    
    rodamientoDB = gcnew List<RodamientosCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllFajas";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            RodamientosCliente^ rodamiento = gcnew RodamientosCliente();
            rodamiento->Id = Convert::ToInt32(reader["ID"]->ToString());
            rodamiento->Name = reader["NAME"]->ToString();
            rodamiento->Proveedor = reader["PROVEEDOR"]->ToString();
            rodamiento->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
           // rodamiento->UnitaryPrice = Convert::ToDouble(reader["PRECIO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                rodamiento->Photo = (array<Byte>^)reader["PHOTO"];
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

int MecaTrafiSystemPersistance::Persistance::Updaterodamiento(RodamientosCliente^ rodamiento)
{
    int rodamientoId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateRodamiento_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = rodamiento->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = rodamiento->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = rodamiento->Brand;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = rodamiento->Tipo;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = rodamiento->UnitaryPrice;
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = rodamiento->Description;
        cmd->Parameters->Add("@DIAMETROINTER", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroExter;
        cmd->Parameters->Add("@ANCHO", System::Data::SqlDbType::Decimal)->Value = rodamiento->Ancho;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = rodamiento->Name;
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = rodamiento->Name;
        cmd->Parameters["@STOCK"]->Value = rodamiento->Stock;
        cmd->Parameters["@MARCA"]->Value = rodamiento->Brand;
        cmd->Parameters["@TIPO"]->Value = rodamiento->Tipo;
        cmd->Parameters["@PRECIO_UNITARIO"]->Value = rodamiento->UnitaryPrice;
        cmd->Parameters["@DESCRIPTION"]->Value = rodamiento->Description;
        cmd->Parameters["@DIAMETROINTER"]->Value = rodamiento->DiametroInter;
        cmd->Parameters["@ANCHO"]->Value = rodamiento->Id;
   
        if (rodamiento->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = rodamiento->Photo;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        rodamientoId = 1; // Éxito en la actualización (podrías asignar el ID del rodamiento actualizado si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return rodamientoId; // Devolver el resultado de la operación
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

RodamientosCliente^ MecaTrafiSystemPersistance::Persistance::Queryallrodamientoid(int rodamientoId)
{
  
    RodamientosCliente^ rodamiento;
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

            RodamientosCliente^ rodamiento = gcnew RodamientosCliente();
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

List<TornilloCliente^>^ MecaTrafiSystemPersistance::Persistance::Queryalltornillo()
{
   
    tornillosDB = gcnew List<TornilloCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllTornillo_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            TornilloCliente^ tornillo = gcnew TornilloCliente();
            tornillo = gcnew TornilloCliente();  // Crear una instancia de la clase Tornillo

           // tornillo->Id = Convert::ToInt32(reader["ID"]->ToString()); 
            tornillo->Brand = reader["MARCA"]->ToString();
            tornillo->Description = reader["DESCRIPCION"]->ToString();
            tornillo->Name = reader["NAME"]->ToString();
            tornillo->Tipo = reader["TIPO"]->ToString();
            tornillo->Material = reader["MATERIAL"]->ToString();
            tornillo->Rosca = reader["ROSCA"]->ToString();
            tornillo->Longitud = Convert::ToDouble(reader["LONGITUD"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["UNITARYPRICE"]->ToString());
            tornillo->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                tornillo->Photo = (array<Byte>^)reader["PHOTO"];
            tornillo->Id = Convert::ToInt32(reader["ID"]->ToString());
            tornillo->Name = reader["NAME"]->ToString();
           // tornillo->Proveedor = reader["PROVEEDOR"]->ToString();
            tornillo->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
           // tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                tornillo->Photo = (array<Byte>^)reader["PHOTO"];
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

int MecaTrafiSystemPersistance::Persistance::Updatetornillo(TornilloCliente^ tornillo)
{
    int tornilloId = 0;
    SqlConnection^ conn = nullptr; 
    try {
        // Obtener la conexión a la BD
        conn = GetConnection(); 

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateTornillo_stock "; 
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn); 
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Name; 
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = tornillo->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = tornillo->Brand;
        cmd->Parameters->Add("@UNITARYPRICE", System::Data::SqlDbType::Decimal)->Value = tornillo->UnitaryPrice;
        cmd->Parameters->Add("@LONGITUD", System::Data::SqlDbType::Decimal)->Value = tornillo->Longitud;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Material;
        cmd->Parameters->Add("@ROSCA", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Rosca;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Tipo;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = tornillo->Name;
        cmd->Prepare(); 
        cmd->Parameters["@NAME"]->Value = tornillo->Name;
        cmd->Parameters["@STOCK"]->Value = tornillo->Stock;
        cmd->Parameters["@MARCA"]->Value = tornillo->Brand;
        cmd->Parameters["@UNITARYPRICE"]->Value = tornillo->UnitaryPrice;
        cmd->Parameters["@LONGITUD"]->Value = tornillo->Longitud;
        cmd->Parameters["@MATERIAL"]->Value = tornillo->Material;
        cmd->Parameters["@ROSCA"]->Value = tornillo->Rosca;
        cmd->Parameters["@TIPO"]->Value = tornillo->Tipo;
        cmd->Parameters["@DESCRIPCION"]->Value = tornillo->Description;
        cmd->Parameters["@PHOTO"]->Value = tornillo->Name;
     
        if (tornillo->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = tornillo->Photo;

        cmd->Prepare();
        cmd->ExecuteNonQuery();

        tornilloId = 1; // Éxito en la actualización (podrías asignar el ID del tornillo actualizado si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return tornilloId = 1;
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

TornilloCliente^ MecaTrafiSystemPersistance::Persistance::Queryalltornilloid(int tornilloId)
{
  

    TornilloCliente^ tornillo;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryTornilloById_stock ";  // Nombre del procedimiento almacenado a utilizar
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int); 
        cmd->Prepare(); 
        cmd->Parameters["@ID"]->Value = tornilloId;
         
        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            tornillo = gcnew TornilloCliente();  // Crear una instancia de la clase Tornillo
           
            //tornillo->Id = Convert::ToInt32(reader["ID"]->ToString());
            tornillo->Brand = reader["MARCA"]->ToString();
            tornillo->Description = reader["DESCRIPCION"]->ToString();
            tornillo->Name = reader["NAME"]->ToString(); 
            tornillo->Tipo = reader["TIPO"]->ToString(); 
            tornillo->Material = reader["MATERIAL"]->ToString();
            tornillo->Rosca = reader["ROSCA"]->ToString();
            tornillo->Longitud = Convert::ToDouble(reader["LONGITUD"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["UNITARYPRICE"]->ToString());
            tornillo->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                tornillo->Photo = (array<Byte>^)reader["PHOTO"];
            // Asegúrate de ajustar los nombres de las columnas según la estructura de tu tabla y el procedimiento almacenado
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Cerrar los objetos de conexión y lectura
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return tornillo;

}
//METODOS PARA MOTOR AC - STOCK
int MecaTrafiSystemPersistance::Persistance::AddMotorACStock(MotoresACCliente^ motorAC)
{
  //  motorACDB->Add(motorAC);

  //  PersistBinaryFile(BIN_MOTORAC_FILE_NAME, motorACDB);

  //  return 1;
    int motorACId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddMotorAC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = motorAC->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = motorAC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Brand;
        cmd->Parameters->Add("@FRAME", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Frame;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::Decimal)->Value = motorAC->Potencia;
        cmd->Parameters->Add("@CLASEPROTECCION", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->ClaseProteccion;
        cmd->Parameters->Add("@FASES", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Fases;
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = motorAC->Description;
        //  cmd->Parameters->Add("@FRAME", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@FASES", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
       
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = motorAC->Name;
        if (motorAC->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = motorAC->Photo;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorACId = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return motorACId;
}

List<MotoresACCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACStock()
{
  
    motorACDB = gcnew List<MotoresACCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllMotoresAC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MotoresACCliente^ motorAc = gcnew MotoresACCliente();
            motorAc->Id = Convert::ToInt32(reader["ID"]->ToString());
            motorAc->Name = reader["NAME"]->ToString();
            motorAc->Proveedor = reader["PROVEEDOR"]->ToString();
            motorAc->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            // tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                motorAc->Photo = (array<Byte>^)reader["PHOTO"];
            motorACDB->Add(motorAc);
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

int MecaTrafiSystemPersistance::Persistance::UpdateMotorACStock(MotoresACCliente^ motorAC)
{
    int motorACId = 0; 
    SqlConnection^ conn = nullptr; 
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateMotorAC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = motorAC->Name; 
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = motorAC->Stock; 
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Brand; 
        cmd->Parameters->Add("@FRAME", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Frame; 
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::Decimal)->Value = motorAC->Potencia; 
        cmd->Parameters->Add("@CLASEPROTECCION", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->ClaseProteccion; 
        cmd->Parameters->Add("@FASES", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Fases;
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = motorAC->Description;  
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = motorAC->Name; 
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = motorAC->Name;
        cmd->Parameters["@STOCK"]->Value = motorAC->Stock;
        cmd->Parameters["@MARCA"]->Value = motorAC->Brand;
        cmd->Parameters["@FRAME"]->Value = motorAC->Frame;
        cmd->Parameters["@POTENCIA"]->Value = motorAC->Potencia;
        cmd->Parameters["@CLASEPROTECCION"]->Value = motorAC->ClaseProteccion;
        cmd->Parameters["@FASES"]->Value = motorAC->Fases;
        cmd->Parameters["@DESCRIPTION"]->Value = motorAC->Description;
        if (motorAC->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = motorAC->Photo;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorACId = 1; // Éxito en la actualización (podrías asignar el ID del motor AC actualizado si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return motorACId; // Devolver el resultado de la operación
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

MotoresACCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACStockById(int motorACId)
{
  

    MotoresACCliente^ motorac;
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

            MotoresACCliente^ motorac = gcnew MotoresACCliente();
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
int MecaTrafiSystemPersistance::Persistance::AddMotorDCStock(MotoresDCCliente^ motorDC)
{
   // motorDCDB->Add(motorDC);

   // PersistBinaryFile(BIN_MOTORDC_FILE_NAME, motorDCDB);

   // return 1;
    int motorDCId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddMotorDC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = motorDC->Name;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = motorDC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = motorDC->Brand;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::Decimal)->Value = motorDC->Potencia;
        cmd->Parameters->Add("@VELOCIDAD", System::Data::SqlDbType::Int)->Value = motorDC->Velocidad;
        cmd->Parameters->Add("@VOLTAJE", System::Data::SqlDbType::Int)->Value = motorDC->Voltaje;
        cmd->Parameters->Add("@MONTAJE", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Montaje;
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = motorDC->Description;

        //  cmd->Parameters->Add("@VOLTAJE", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@VELOCIDAD", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
       
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = motorDC->Name;
        if (motorDC->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = motorDC->Photo;
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorDCId = 1; // Asigna el ID del cliente insertado si es necesario
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return motorDCId;
}

List<MotoresDCCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCStock()
{
  
    motorDCDB = gcnew List<MotoresDCCliente^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllMotoresDC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            MotoresDCCliente^ motorDc = gcnew MotoresDCCliente();
            motorDc->Id = Convert::ToInt32(reader["ID"]->ToString());
            motorDc->Name = reader["NAME"]->ToString();
            motorDc->Proveedor = reader["PROVEEDOR"]->ToString();
            motorDc->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            // tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                motorDc->Photo = (array<Byte>^)reader["PHOTO"];
            motorDCDB->Add(motorDc);
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

int MecaTrafiSystemPersistance::Persistance::UpdateMotorDCStock(MotoresDCCliente^ motorDC)
{
    int motorDCId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection(); 

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateMotorDC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn); 
        cmd->CommandType = System::Data::CommandType::StoredProcedure; 

        // Agregar los parámetros
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = motorDC->Id;  
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = motorDC->Name; 
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = motorDC->Stock; 
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = motorDC->Brand; 
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::Decimal)->Value = motorDC->Potencia; 
        cmd->Parameters->Add("@VELOCIDAD", System::Data::SqlDbType::Int)->Value = motorDC->Velocidad; 
        cmd->Parameters->Add("@VOLTAJE", System::Data::SqlDbType::Int)->Value = motorDC->Voltaje; 
        cmd->Parameters->Add("@MONTAJE", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Montaje; 
        cmd->Parameters->Add("@DESCRIPTION", System::Data::SqlDbType::VarChar, 400)->Value = motorDC->Description; 
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = motorDC->Name; 
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = motorDC->Name;
        cmd->Parameters["@STOCK"]->Value = motorDC->Stock;
        cmd->Parameters["@MARCA"]->Value = motorDC->Brand;
        cmd->Parameters["@VELOCIDAD"]->Value = motorDC->Velocidad;
        cmd->Parameters["@POTENCIA"]->Value = motorDC->Potencia;
        cmd->Parameters["@VOLTAJE"]->Value = motorDC->Voltaje;
        cmd->Parameters["@MONTAJE"]->Value = motorDC->Montaje;
        cmd->Parameters["@DESCRIPTION"]->Value = motorDC->Description;
        if (motorDC->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value; 
        else
            cmd->Parameters["@PHOTO"]->Value = motorDC->Photo;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorDCId = 1; // Éxito en la actualización
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return motorDCId; // Devolver el resultado de la operación
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

MotoresDCCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCStockById(int motorDCId)
{
  

    MotoresDCCliente^ motordc;
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

            MotoresDCCliente^ motordc = gcnew MotoresDCCliente();
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

int MecaTrafiSystemPersistance::Persistance::AddTornilloPurchase(TornilloCliente^ tornilloPurchase)
{
    return 0;
}

List<TornilloCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateTornilloPurchase(TornilloCliente^ tornilloPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteTornilloPurchase(int tornilloPurchaseId)
{
    return 0;
}

TornilloCliente^ MecaTrafiSystemPersistance::Persistance::QueryAllTornilloPurchaseById(int tornilloPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddFajaPurchase(FajasCliente^ fajaPurchase)
{
    return 0;
}

List<FajasCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateFajaPurchase(FajasCliente^ fajaPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteFajaPurchase(int fajaPurchaseId)
{
    return 0;
}

FajasCliente^ MecaTrafiSystemPersistance::Persistance::QueryAllFajaPurchaseById(int fajaPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddPoleaPurchase(PoleaCliente^ poleaPurchase)
{
    return 0;
}

List<PoleaCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdatePoleaPurchase(PoleaCliente^ poleaPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeletePoleaPurchase(int poleaPurchaseId)
{
    return 0;
}

PoleaCliente^ MecaTrafiSystemPersistance::Persistance::QueryAllPoleaIdPurchase(int poleaPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddRodamientoPurchase(RodamientosCliente^ rodamientoPurchase)
{
    return 0;
}

List<RodamientosCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateRodamientoPurchase(RodamientosCliente^ rodamientoPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteRodamientoPurchase(int rodamientoPurchaseId)
{
    return 0;
}

RodamientosCliente^ MecaTrafiSystemPersistance::Persistance::QueryAllRodamientoPurchaseById(int rodamientoPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddMotorACPurchase(MotoresACCliente^ motorACPurchase)
{
    return 0;
}

List<MotoresACCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorACPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorACPurchase(MotoresACCliente^ motorACPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorACPurchase(int motorACPurchaseId)
{
    return 0;
}

MotoresACCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACPurchaseById(int motorACPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::AddMotorDCPurchase(MotoresDCCliente^ motorDCPurchase)
{
    return 0;
}

List<MotoresDCCliente^>^ MecaTrafiSystemPersistance::Persistance::QueryAllMotorDCPurchase()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

int MecaTrafiSystemPersistance::Persistance::UpdateMotorDCPurchase(MotoresDCCliente^ motorDCPurchase)
{
    return 0;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorDCPurchase(int motorDCPurchaseId)
{
    return 0;
}

MotoresDCCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCPurchaseById(int motorDCPurchaseId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}
