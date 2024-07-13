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
    String^ password = "Manchas76";
    conn->ConnectionString = "Server=db-meca.cdevogwd46a9.us-east-1.rds.amazonaws.com;" +
        "Database =  MecaDB;" +
        "User ID = Externo; " +
        "Password = " + password + ";";
    conn->Open();
    return conn;
}

List<User^>^ MecaTrafiSystemPersistance::Persistance::LoadUser()
{
    List<User^>^ userlist = gcnew List<User^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //OBTENER CONEXION
        SqlConnection^ conn = GetConnection();

        //PREPARA SQL
        SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM EMPLEADO", conn);
        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {
            User^ user = gcnew User();
            // Client^ cliente = gcnew Client();
            user->Id = Convert::ToInt32(reader["CODIGO"]->ToString());
            user->Name = reader["USERNAME"]->ToString();
            user->Password = reader["PASSWORD"]->ToString();

            /*if (!DBNull::Value->Equals(reader["PHOTO"]))
                cliente->Photo = (array<Byte>^)reader["PHOTO"];
                */
            userlist->Add(user);
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

    return userlist;

}

int MecaTrafiSystemPersistance::Persistance::AddEmployee(Employee^ employee)
{
    int employeeId = 0;
    SqlConnection^ conn = nullptr;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddEmpleado"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


        // Paso 3: Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@QUOTA", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@QUOTA"]->Precision = 10;
        cmd->Parameters["@QUOTA"]->Scale = 2;
        cmd->Parameters->Add("@SALES", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALES"]->Precision = 10;
        cmd->Parameters["@SALES"]->Scale = 2;
        cmd->Parameters->Add("@WORKHOURS", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@WORKHOURS"]->Precision = 10;
        cmd->Parameters["@WORKHOURS"]->Scale = 2;
        cmd->Parameters->Add("@SALARY", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALARY"]->Precision = 10;
        cmd->Parameters["@SALARY"]->Scale = 2;
        cmd->Parameters->Add("@WARNINGS", System::Data::SqlDbType::VarChar, 300);
        cmd->Parameters->Add("@TURNO", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@I_CONTRATO", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@F_CONTRATO", System::Data::SqlDbType::DateTime);

        // Parámetro de salida para el ID del empleado
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        // Paso 4: Preparar la sentencia
        cmd->Prepare();
        employee->Status = "A";
        employee->Quota = 1000;
        employee->Warnings = "Ninguna";
        // Paso 5: Asignar valores a los parámetros
        cmd->Parameters["@CODIGO"]->Value = employee->Codigo;
        cmd->Parameters["@DNI"]->Value = employee->Dni;
        cmd->Parameters["@USERNAME"]->Value = employee->Username;
        cmd->Parameters["@PASSWORD"]->Value = employee->Password;
        cmd->Parameters["@NAME"]->Value = employee->Name;
        cmd->Parameters["@LASTNAME"]->Value = employee->Lastname;
        cmd->Parameters["@STATUS"]->Value = employee->Status;
        cmd->Parameters["@TELEFONO"]->Value = employee->PhoneNumber;
        cmd->Parameters["@QUOTA"]->Value = employee->Quota;
        cmd->Parameters["@SALES"]->Value = employee->Sales;
        cmd->Parameters["@WORKHOURS"]->Value = employee->WorkHours;
        cmd->Parameters["@SALARY"]->Value = employee->Salary;
        cmd->Parameters["@WARNINGS"]->Value = employee->Warnings;
        cmd->Parameters["@TURNO"]->Value = employee->Turn;
        cmd->Parameters["@I_CONTRATO"]->Value = employee->InicioContratoDate;
        cmd->Parameters["@F_CONTRATO"]->Value = employee->FinContratoDate;
        if (employee->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = employee->Photo;

        // Paso 6: Ejecutar la consulta
        cmd->ExecuteNonQuery();

        // Paso 7: Obtener el ID del empleado insertado
        employeeId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 8: Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }

    return employeeId;
}

List<Employee^>^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployees()
{
    employeeListDB = gcnew List<Employee^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryAllEmpleados"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        while (reader->Read()) {
            Employee^ employee = gcnew Employee();
            employee->Id = Convert::ToInt32(reader["ID"]->ToString());
            employee->Codigo = Convert::ToInt32(reader["CODIGO"]->ToString());
            employee->Dni = Convert::ToInt32(reader["DNI"]->ToString());
            employee->Username = reader["USERNAME"]->ToString();
            employee->Password = reader["PASSWORD"]->ToString();
            employee->Name = reader["NAME"]->ToString();
            employee->Lastname = reader["LASTNAME"]->ToString();
            employee->Status = reader["STATUS"]->ToString()->Equals("Y") ? true : false;
            employee->PhoneNumber = Convert::ToInt32(reader["TELEFONO"]->ToString());

            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                employee->Photo = (array<Byte>^)reader["PHOTO"];

            employee->Quota = reader["QUOTA"] != DBNull::Value ? Convert::ToDouble(reader["QUOTA"]->ToString()) : 0.0;
            employee->Sales = reader["SALES"] != DBNull::Value ? Convert::ToDouble(reader["SALES"]->ToString()) : 0.0;
            employee->WorkHours = reader["WORKHOURS"] != DBNull::Value ? Convert::ToDouble(reader["WORKHOURS"]->ToString()) : 0.0;
            employee->Salary = reader["SALARY"] != DBNull::Value ? Convert::ToDouble(reader["SALARY"]->ToString()) : 0.0;
            employee->Warnings = reader["WARNINGS"]->ToString();
            employee->Turn = reader["TURNO"]->ToString();
            employee->InicioContratoDate = reader["I_CONTRATO"] != DBNull::Value ? Convert::ToDateTime(reader["I_CONTRATO"]->ToString()) : DateTime();
            employee->FinContratoDate = reader["F_CONTRATO"] != DBNull::Value ? Convert::ToDateTime(reader["F_CONTRATO"]->ToString()) : DateTime();

            employeeListDB->Add(employee);
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return employeeListDB;
 }

int MecaTrafiSystemPersistance::Persistance::UpdateEmployee(Employee^ employee)
{
    SqlConnection^ conn = nullptr;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateEmpleado"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Definir los parámetros del procedimiento almacenado

        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@QUOTA", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@QUOTA"]->Precision = 10;
        cmd->Parameters["@QUOTA"]->Scale = 2;
        cmd->Parameters->Add("@SALES", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALES"]->Precision = 10;
        cmd->Parameters["@SALES"]->Scale = 2;
        cmd->Parameters->Add("@WORKHOURS", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@WORKHOURS"]->Precision = 10;
        cmd->Parameters["@WORKHOURS"]->Scale = 2;
        cmd->Parameters->Add("@SALARY", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@SALARY"]->Precision = 10;
        cmd->Parameters["@SALARY"]->Scale = 2;
        cmd->Parameters->Add("@WARNINGS", System::Data::SqlDbType::VarChar, 300);
        cmd->Parameters->Add("@TURNO", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@I_CONTRATO", System::Data::SqlDbType::Date);
        cmd->Parameters->Add("@F_CONTRATO", System::Data::SqlDbType::Date);

        // Paso 4: Preparar la sentencia
        cmd->Prepare();
        employee->Status = "A";
        employee->Quota = 1000;
        employee->Warnings = "Ninguna";
        // Paso 5: Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = employee->Id;
        cmd->Parameters["@CODIGO"]->Value = employee->Codigo;
        cmd->Parameters["@DNI"]->Value = employee->Dni;
        cmd->Parameters["@USERNAME"]->Value = employee->Username;
        cmd->Parameters["@PASSWORD"]->Value = employee->Password;
        cmd->Parameters["@NAME"]->Value = employee->Name;
        cmd->Parameters["@LASTNAME"]->Value = employee->Lastname;
        cmd->Parameters["@STATUS"]->Value = employee->Status ? "Y" : "N";
        cmd->Parameters["@TELEFONO"]->Value = employee->PhoneNumber;
        cmd->Parameters["@QUOTA"]->Value = employee->Quota;
        cmd->Parameters["@SALES"]->Value = employee->Sales;
        cmd->Parameters["@WORKHOURS"]->Value = employee->WorkHours;
        cmd->Parameters["@SALARY"]->Value = employee->Salary;
        cmd->Parameters["@WARNINGS"]->Value = employee->Warnings;
        cmd->Parameters["@TURNO"]->Value = employee->Turn;
        cmd->Parameters["@I_CONTRATO"]->Value = employee->InicioContratoDate;
        cmd->Parameters["@F_CONTRATO"]->Value = employee->FinContratoDate;
        if (employee->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = employee->Photo;

        // Paso 6: Ejecutar la consulta
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Paso 7: Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }

    return 1; // Indicar éxito en la operación (puedes ajustar según lo necesario)
}

int MecaTrafiSystemPersistance::Persistance::DeleteEmployee(int employeeId)
{
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_DeleteEmpleado"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Asignar parámetro
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = employeeId;

        // Ejecutar la consulta
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }
    return 1; // Indicar éxito en la operación (puedes ajustar según lo necesario)
}

Employee^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployeesById(int employeeId)
{
    Employee^ employee = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryEmpleadoById"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar parámetro
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = employeeId;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        if (reader->Read()) {
            employee = gcnew Employee();
            employee->Id = Convert::ToInt32(reader["ID"]);
            employee->Codigo = Convert::ToInt32(reader["CODIGO"]);
            employee->Dni = Convert::ToInt32(reader["DNI"]);
            employee->Username = reader["USERNAME"]->ToString();
            employee->Password = reader["PASSWORD"]->ToString();
            employee->Name = reader["NAME"]->ToString();
            employee->Lastname = reader["LASTNAME"]->ToString();
            employee->Status = (reader["STATUS"]->ToString() == "Y"); // Convertir "Y" a true, "N" a false
            employee->PhoneNumber = Convert::ToInt32(reader["TELEFONO"]);
            employee->Quota = Convert::ToDouble(reader["QUOTA"]);
            employee->Sales = Convert::ToDouble(reader["SALES"]);
            employee->WorkHours = Convert::ToDouble(reader["WORKHOURS"]);
            employee->Salary = Convert::ToDouble(reader["SALARY"]);
            employee->Warnings = reader["WARNINGS"]->ToString();
            employee->Turn = reader["TURNO"]->ToString();
            employee->InicioContratoDate = Convert::ToDateTime(reader["I_CONTRATO"]);
            employee->FinContratoDate = Convert::ToDateTime(reader["F_CONTRATO"]);

            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (reader["PHOTO"] != DBNull::Value) {
                employee->Photo = safe_cast<array<Byte>^>(reader["PHOTO"]);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return employee;
}

Employee^ MecaTrafiSystemPersistance::Persistance::QueryAllEmployeesByName(String^ name)
{
    Employee^ employee = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryEmpleadoByName"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Asignar parámetro
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = name;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        if (reader->Read()) {
            employee = gcnew Employee();
            employee->Id = Convert::ToInt32(reader["ID"]);
            employee->Codigo = Convert::ToInt32(reader["CODIGO"]);
            employee->Dni = Convert::ToInt32(reader["DNI"]);
            employee->Username = reader["USERNAME"]->ToString();
            employee->Password = reader["PASSWORD"]->ToString();
            employee->Name = reader["NAME"]->ToString();
            employee->Lastname = reader["LASTNAME"]->ToString();
            employee->Status = (reader["STATUS"]->ToString() == "Y"); // Convertir "Y" a true, "N" a false
            employee->PhoneNumber = Convert::ToInt32(reader["TELEFONO"]);
            employee->Quota = Convert::ToDouble(reader["QUOTA"]);
            employee->Sales = Convert::ToDouble(reader["SALES"]);
            employee->WorkHours = Convert::ToDouble(reader["WORKHOURS"]);
            employee->Salary = Convert::ToDouble(reader["SALARY"]);
            employee->Warnings = reader["WARNINGS"]->ToString();
            employee->Turn = reader["TURNO"]->ToString();
            employee->InicioContratoDate = Convert::ToDateTime(reader["I_CONTRATO"]);
            employee->FinContratoDate = Convert::ToDateTime(reader["F_CONTRATO"]);

            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (reader["PHOTO"] != DBNull::Value) {
                employee->Photo = safe_cast<array<Byte>^>(reader["PHOTO"]);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return employee;
}

int MecaTrafiSystemPersistance::Persistance::AddClient(Client^ cliente)
{
    int clienteId = 0;
    SqlConnection^ conn = nullptr;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddCliente"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cliente->Status = "A";
        cliente->IsCorp = "Y";
        cliente->IsFrequent = "Y";
        // Paso 3: Definir los parámetros del procedimiento almacenado
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@ISCORP", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@ISFREQUENT", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@CARRERA", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CURSO", System::Data::SqlDbType::VarChar, 50);

        // Parámetro de salida para el ID del cliente
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        // Paso 4: Preparar la sentencia
        cmd->Prepare();

        // Paso 5: Asignar valores a los parámetros
        cmd->Parameters["@CODIGO"]->Value = cliente->Codigo;
        cmd->Parameters["@DNI"]->Value = cliente->Dni;
        cmd->Parameters["@USERNAME"]->Value = cliente->Username;
        cmd->Parameters["@PASSWORD"]->Value = cliente->Password;
        cmd->Parameters["@NAME"]->Value = cliente->Name;
        cmd->Parameters["@LASTNAME"]->Value = cliente->Lastname;
        cmd->Parameters["@STATUS"]->Value = cliente->Status;
        cmd->Parameters["@TELEFONO"]->Value = cliente->Contact;
        cmd->Parameters["@ISCORP"]->Value = cliente->IsCorp;
        cmd->Parameters["@ISFREQUENT"]->Value = cliente->IsFrequent;
        cmd->Parameters["@CARRERA"]->Value = cliente->Carrera;
        cmd->Parameters["@CURSO"]->Value = cliente->Curso;
        if (cliente->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = cliente->Photo;
        // Paso 6: Ejecutar la consulta
        cmd->ExecuteNonQuery();

        // Paso 7: Obtener el ID del cliente insertado
        clienteId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 8: Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }

    return clienteId;
}

List<Client^>^ MecaTrafiSystemPersistance::Persistance::QueryAllCliente()
{
    List<Client^>^ clientList = gcnew List<Client^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryAllClientes"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Ejecutar la consulta SQL
        reader = cmd->ExecuteReader();

        // Procesar los datos
        while (reader->Read()) {
            Client^ cliente = gcnew Client();
            cliente->Id = Convert::ToInt32(reader["ID"]->ToString());
            cliente->Codigo = Convert::ToInt32(reader["CODIGO"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Dni = Convert::ToInt32(reader["DNI"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Username = reader["USERNAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Password = reader["PASSWORD"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Name = reader["NAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Lastname = reader["LASTNAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Status = reader["STATUS"]->ToString(); // Ajustar según la columna de la tabla (char a string)
            cliente->Contact = Convert::ToInt32(reader["TELEFONO"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Curso = reader["CURSO"]->ToString();
            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                cliente->Photo = (array<Byte>^)reader["PHOTO"];

            // Ajustar según la columna de la tabla
           // Asignar IsCorp y IsFrequent basado en los valores de la columna ISCORP e ISFREQUENT
            String^ isCorpValue = reader["ISCORP"]->ToString();
            if (isCorpValue == "Y")
                cliente->IsCorp = true;
            else//N
                cliente->IsCorp = false;

            String^ isFrequentValue = reader["ISFREQUENT"]->ToString();
            if (isFrequentValue == "Y")
                cliente->IsFrequent = true;
            else //N
                cliente->IsFrequent = false;

            cliente->Carrera = reader["CARRERA"] != DBNull::Value ? reader["CARRERA"]->ToString() : nullptr;

            clientList->Add(cliente);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar objetos de base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return clientList;
}
int MecaTrafiSystemPersistance::Persistance::UpdateClient(Client^ cliente) {
    SqlConnection^ conn;

    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();
        cliente->Status = "A";
        cliente->IsCorp = "Y";
        cliente->IsFrequent = "Y";
        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateCliente";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Paso 3: Agregar parámetros
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int); 
        cmd->Parameters->Add("@CODIGO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@USERNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@TELEFONO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@ISCORP", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@ISFREQUENT", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@CARRERA", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CURSO", System::Data::SqlDbType::VarChar, 50);

        // Paso 4: Preparar la sentencia
        cmd->Prepare();

        // Paso 5: Asignar valores a los parámetros
        cmd->Parameters["@ID"]->Value = cliente->Id;
        cmd->Parameters["@CODIGO"]->Value = cliente->Codigo;
        cmd->Parameters["@DNI"]->Value = cliente->Dni;
        cmd->Parameters["@USERNAME"]->Value = cliente->Username;
        cmd->Parameters["@PASSWORD"]->Value = cliente->Password;
        cmd->Parameters["@NAME"]->Value = cliente->Name;
        cmd->Parameters["@LASTNAME"]->Value = cliente->Lastname;
        cmd->Parameters["@STATUS"]->Value = cliente->Status;
        cmd->Parameters["@TELEFONO"]->Value = cliente->Contact;
        cmd->Parameters["@ISCORP"]->Value = cliente->IsCorp ? "Y" : "N";
        cmd->Parameters["@ISFREQUENT"]->Value = cliente->IsFrequent ? "Y" : "N";
        cmd->Parameters["@CURSO"]->Value = cliente->Curso;
        cmd->Parameters["@CARRERA"]->Value = cliente->Carrera;

        if (cliente->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = cliente->Photo;

        // Paso 6: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 7: Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }

    return 1; // Indicar éxito en la operación
}

int MecaTrafiSystemPersistance::Persistance::DeleteClient(int clienteId)
{
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_DeleteCliente"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Asignar parámetro
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = clienteId;

        // Ejecutar la consulta
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar la conexión
        if (conn != nullptr) conn->Close();
    }
    return 1; // Indicar éxito en la operación (puedes ajustar según lo necesario)
}



Client^ MecaTrafiSystemPersistance::Persistance::QueryAllClienteId(int clienteId)
{
    Client^ cliente = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryClienteById"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar parámetro
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = clienteId;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        if (reader->Read()) {
            cliente = gcnew Client();
            cliente->Codigo = Convert::ToInt32(reader["CODIGO"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Dni = Convert::ToInt32(reader["DNI"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Username = reader["USERNAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Password = reader["PASSWORD"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Name = reader["NAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Lastname = reader["LASTNAME"]->ToString(); // Ajustar según la columna de la tabla
            cliente->Status = reader["STATUS"]->ToString(); // Ajustar según la columna de la tabla (char a string)
            cliente->Contact = Convert::ToInt32(reader["TELEFONO"]->ToString()); // Ajustar según la columna de la tabla
            cliente->Curso = reader["CURSO"]->ToString();
            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (reader["PHOTO"] != DBNull::Value) {
                cliente->Photo = safe_cast<array<Byte>^>(reader["PHOTO"]); // Ajustar según la columna de la tabla
            }
            cliente->IsCorp = reader["ISCORP"]->ToString() == "Y"; // Convertir CHAR(1) a bool
            cliente->IsFrequent = reader["ISFREQUENT"]->ToString() == "Y"; // Convertir CHAR(1) a bool
            cliente->Carrera = reader["CARRERA"] != DBNull::Value ? reader["CARRERA"]->ToString() : nullptr; // Ajustar según la columna de la tabla
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de base de datos
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return cliente;
}


User^ MecaTrafiSystemPersistance::Persistance::QueryUserByName(String^ name)
{
    UserList = (List<User^>^)LoadUser();
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Name == name)
            return UserList[i];
    }
    return nullptr;
}


int MecaTrafiSystemPersistance::Persistance::Addtornillo(TornilloCliente^ tornillo)
{
    int tornilloId;
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
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = tornillo->UnitaryPrice;
        cmd->Parameters->Add("@LONGITUD", System::Data::SqlDbType::Decimal)->Value = tornillo->Longitud;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Material;
        cmd->Parameters->Add("@ROSCA", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Rosca;
        tornillo->Component_code = "T";
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = tornillo->Component_code;
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
    int fajaId;
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
        cmd->Parameters->Add("@ALTODEGOMA", System::Data::SqlDbType::Decimal)->Value = faja->AltoDeGoma;
        cmd->Parameters->Add("@DIAMETROINTER", System::Data::SqlDbType::Decimal)->Value = faja->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = faja->DiametroExter;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = faja->UnitaryPrice;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = faja->Tipo;
        //", System::Data::SqlDbType::VarChar, 50)->Value = faja->Tipo;
        faja->Component_code = "F";
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = faja->Component_code;
        cmd->Parameters->Add("@DESCRIPCION ", System::Data::SqlDbType::VarChar, 400)->Value = faja->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = faja->Name;
        if (faja->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = faja->Photo;

        // Parámetro de salida para el ID
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        // Obtener el ID generado para el tornillo insertado
        fajaId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
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
        conn = GetConnection();

        //PREPARA SQL
        String^ sqlStr = "dbo.usp_QueryAllFaja_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            FajasCliente^ faja = gcnew FajasCliente();
            faja->Id = Convert::ToInt32(reader["ID"]->ToString());
            faja->Name = reader["NAME"]->ToString();
            faja->Tipo = reader["TIPO"]->ToString();
            faja->DiametroInter = Convert::ToDouble(reader["DIAMETROINTER"]->ToString());
            faja->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTER"]->ToString());
            faja->AltoDeGoma = Convert::ToDouble(reader["ALTODEGOMA"]->ToString());
            faja->Description = reader["DESCRIPCION"]->ToString();
            faja->Component_code = reader["COMPONENT_CODE"]->ToString();
            faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            faja->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            faja->Brand = reader["MARCA"]->ToString();

            // Leer la imagen (PHOTO) si no es DBNull 
            if (reader["PHOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["PHOTO"]);
                faja->Photo = photoData;
            }

            // Agregar el objeto faja a la lista
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

int MecaTrafiSystemPersistance::Persistance::Updatefaja(FajasCliente^ faja)
{
    int fajaId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_UpdateFaja_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = faja->Id;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = faja->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = faja->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = faja->Brand;
        cmd->Parameters->Add("@ALTODEGOMA", System::Data::SqlDbType::Decimal)->Value = faja->AltoDeGoma;
        cmd->Parameters->Add("@DIAMETROINTER", System::Data::SqlDbType::Decimal)->Value = faja->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = faja->DiametroExter;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = faja->UnitaryPrice;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = faja->Tipo;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = faja->Component_code;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 200)->Value = faja->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = faja->Photo;

        cmd->Prepare();

        // PHOTO
        if (faja->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = faja->Photo;

        // Ejecutar la sentencia
        cmd->ExecuteNonQuery();

        fajaId = 1; // Éxito en la actualización (podrías asignar el ID de la faja actualizada si lo necesitas)
    }
    catch (Exception^ ex) {
        throw ex; // Lanzar excepción en caso de error
    }
    finally {
        if (conn != nullptr) conn->Close(); // Cerrar la conexión, si está abierta
    }
    return fajaId;

}

int MecaTrafiSystemPersistance::Persistance::Deletefaja(int fajaId)
{

    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_DeleteFaja_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = fajaId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;


}

FajasCliente^ MecaTrafiSystemPersistance::Persistance::Queryallfajaid(int fajaId)
{

    FajasCliente^ faja;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        // Paso 1: Obtener la conexión a la base de datos
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryFajaById_stock";  // Nombre del procedimiento almacenado a utilizar
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = fajaId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            faja = gcnew FajasCliente();  // Crear una instancia de la clase Faja
            faja->Id = Convert::ToInt32(reader["ID"]->ToString());
            faja->Name = reader["NAME"]->ToString();
            faja->Brand = reader["MARCA"]->ToString();
            faja->Description = reader["DESCRIPCION"]->ToString();
            faja->Tipo = reader["TIPO"]->ToString();
            faja->Component_code = reader["COMPONENT_CODE"]->ToString();
            // faja->AltoDeGoma = reader["ALTO_GOMA_FAJA"]->ToString();
            // faja->DiametroInter = reader["DIAMETRO_INTERN"]->ToString();
            faja->AltoDeGoma = Convert::ToDouble(reader["ALTODEGOMA"]->ToString());
            faja->DiametroInter = Convert::ToDouble(reader["DIAMETROINTER"]->ToString());
            faja->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTER"]->ToString());
            //  faja->DiametroExter = reader["DIAMETRO_EXTERN"]->ToString();
             // faja->Proveedor = reader["PROVEEDOR_FAJA"]->ToString();
            faja->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            faja->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                faja->Photo = (array<Byte>^)reader["PHOTO"];
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
        cmd->Parameters->Add("@DIAMETRO_EJE", System::Data::SqlDbType::Decimal)->Value = polea->DiametroEje;
        cmd->Parameters->Add("@DESCRIPCION ", System::Data::SqlDbType::VarChar, 400)->Value = polea->Description;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = polea->Component_code;
        //  cmd->Parameters->Add("@DIAMETRO_INTERNO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipod erosca;
         //cmd->Parameters->Add("@DIAMETRO_EXTERNO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = polea->Name;
        if (polea->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = polea->Photo;

        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

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
        String^ sqlStr = "dbo.usp_QueryAllPolea_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        //EJECUTA SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        while (reader->Read()) {

            PoleaCliente^ polea = gcnew PoleaCliente();
            polea->Id = Convert::ToInt32(reader["ID"]->ToString());
            polea->Name = reader["NAME"]->ToString();
            polea->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            polea->Brand = reader["MARCA"]->ToString();
            polea->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            polea->Tipo = reader["TIPO"]->ToString();
            polea->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTER"]->ToString());
            polea->Material = reader["MATERIAL"]->ToString();
            polea->DiametroEje = Convert::ToDouble(reader["DIAMETRO_EJE"]->ToString());
            polea->Description = reader["DESCRIPCION"]->ToString();
            polea->Component_code = reader["COMPONENT_CODE"]->ToString();

            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["PHOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["PHOTO"]);
                polea->Photo = photoData;
            }

            // Agregar el objeto polea a la lista
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
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = polea->Id;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = polea->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = polea->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = polea->Brand;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = polea->UnitaryPrice;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = polea->Tipo;
        cmd->Parameters->Add("@DIAMETROEXTER", System::Data::SqlDbType::Decimal)->Value = polea->DiametroExter;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = polea->Component_code;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = polea->Material;
        cmd->Parameters->Add("@DIAMETRO_EJE", System::Data::SqlDbType::Decimal)->Value = polea->DiametroEje;
        cmd->Parameters->Add("@DESCRIPTCION", System::Data::SqlDbType::VarChar, 400)->Value = polea->Description;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = polea->Name;
        cmd->Prepare();


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
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_DeletePolea_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = poleaId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

PoleaCliente^ MecaTrafiSystemPersistance::Persistance::Queryallpoleaid(int poleaId)
{

    PoleaCliente^ polea = nullptr;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //OBTENER CONEXION
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryPoleaById_stock";  // Nombre del procedimiento almacenado a utilizar 
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = poleaId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {
            polea = gcnew PoleaCliente();
            polea->Id = Convert::ToInt32(reader["ID"]->ToString());
            polea->Name = reader["NAME"]->ToString();
            polea->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
            polea->Brand = reader["MARCA"]->ToString();
            polea->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            polea->Tipo = reader["TIPO"]->ToString();
            polea->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTER"]->ToString());
            polea->Material = reader["MATERIAL"]->ToString();
            polea->DiametroEje = Convert::ToDouble(reader["DIAMETRO_EJE"]->ToString());
            polea->Description = reader["DESCRIPCION"]->ToString();
            polea->Component_code = reader["COMPONENT_CODE"]->ToString();

            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["PHOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["PHOTO"]);
                polea->Photo = photoData;
            }
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
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = rodamiento->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = rodamiento->Brand;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = rodamiento->Tipo;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = rodamiento->UnitaryPrice;
        cmd->Parameters->Add("@DESCRIPCION ", System::Data::SqlDbType::VarChar, 400)->Value = rodamiento->Description;
        cmd->Parameters->Add("@DIAMETROINTERNO", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTERNO", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroExter;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = rodamiento->Component_code;
        cmd->Parameters->Add("@ANCHO", System::Data::SqlDbType::Decimal)->Value = rodamiento->Ancho;
        //  cmd->Parameters->Add("@DIAMETRO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;
         //cmd->Parameters->Add("@PRECIO", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Tipoderosca;

        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = rodamiento->Name;
        if (rodamiento->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = rodamiento->Photo;
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
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

    List<RodamientosCliente^>^ rodamientoDB = gcnew List<RodamientosCliente^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;

    try {
        // Obtener conexión
        conn = GetConnection();

        // Preparar SQL
        String^ sqlStr = "dbo.usp_QueryAllRodamiento_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        // Ejecutar SQL
        reader = cmd->ExecuteReader();

        // Procesar datos
        while (reader->Read()) {
            RodamientosCliente^ rodamiento = gcnew RodamientosCliente();
            rodamiento->Id = Convert::ToInt32(reader["ID"]->ToString());
            rodamiento->Name = reader["NAME"]->ToString();
            rodamiento->Description = reader["DESCRIPCION"]->ToString();
            rodamiento->Brand = reader["MARCA"]->ToString();
            rodamiento->DiametroInter = Convert::ToDouble(reader["DIAMETROINTERNO"]->ToString());
            rodamiento->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTERNO"]->ToString());
            rodamiento->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            rodamiento->Ancho = Convert::ToDouble(reader["ANCHO"]->ToString());
            rodamiento->Tipo = reader["TIPO"]->ToString();
            rodamiento->Component_code = reader["COMPONENT_CODE"]->ToString();
            rodamiento->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());


            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["PHOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["PHOTO"]);
                rodamiento->Photo = photoData;
            }

            // Agregar el objeto rodamiento a la lista
            rodamientoDB->Add(rodamiento);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar objetos de la BD
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
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = rodamiento->Id;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = rodamiento->Name;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = rodamiento->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = rodamiento->Brand;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = rodamiento->Tipo;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = rodamiento->UnitaryPrice;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 400)->Value = rodamiento->Description;
        cmd->Parameters->Add("@DIAMETROINTERNO", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroInter;
        cmd->Parameters->Add("@DIAMETROEXTERNO", System::Data::SqlDbType::Decimal)->Value = rodamiento->DiametroExter;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = rodamiento->Component_code;
        cmd->Parameters->Add("@ANCHO", System::Data::SqlDbType::Decimal)->Value = rodamiento->Ancho;
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = rodamiento->Name;
        cmd->Prepare();

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
    //for (int i = 0; i < rodamientoDB->Count; i++) {
     //   if (rodamientoDB[i]->Id == rodamientoId) {
      //      rodamientoDB->RemoveAt(i);

      //      PersistBinaryFile(BIN_RODAMIENTO_FILE_NAME, rodamientoDB);
       //     return rodamientoId;
      //  }
  //  }
  //  return 0;
    SqlConnection^ conn;
    try {
        // Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia
        String^ sqlStr = "dbo.usp_DeleteRodamiento_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = rodamientoId;

        // Paso 3: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;

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
        String^ sqlStr = "dbo.usp_QueryRodamientoById_stock";  // Nombre del procedimiento almacenado a utilizar 
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = rodamientoId;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //PROCESA DATO
        if (reader->Read()) {

            rodamiento = gcnew RodamientosCliente();
            rodamiento->Id = Convert::ToInt32(reader["ID"]);
            rodamiento->Name = reader["NAME"]->ToString();
            //rodamiento->Proveedor = reader["PROVEEDOR_RODAMIENTO"]->ToString();
            rodamiento->Stock = Convert::ToInt32(reader["CANTIDAD"]);
            rodamiento->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]);
            rodamiento->Description = reader["DESCRIPCION"]->ToString();
            rodamiento->Brand = reader["MARCA"]->ToString();
            rodamiento->DiametroInter = Convert::ToDouble(reader["DIAMETROINTERNO"]);
            rodamiento->DiametroExter = Convert::ToDouble(reader["DIAMETROEXTERNO"]);
            rodamiento->Component_code = reader["COMPONENT_CODE"]->ToString();
            rodamiento->Ancho = Convert::ToDouble(reader["ANCHO"]);
            rodamiento->Tipo = reader["TIPO"]->ToString();

            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["PHOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["PHOTO"]);
                rodamiento->Photo = photoData;
            }
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

List<MechanicComponent^>^ MecaTrafiSystemPersistance::Persistance::QueryAllComponentByName(String^ name)
{

    List<MechanicComponent^>^ componentList = gcnew List<MechanicComponent^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryByName_ComponentStock"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Asignar parámetro
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Prepare();
        cmd->Parameters["@NAME"]->Value = name;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        while (reader->Read()) {
            MechanicComponent^ component = gcnew MechanicComponent();
            component->Name = reader["NAME"]->ToString();
            component->Description = reader["DESCRIPCION"]->ToString();
            component->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]);
            component->Stock = Convert::ToInt32(reader["STOCK"]);
            component->Component_code = reader["COMPONENT_CODE"]->ToString();
            component->Brand = reader["MARCA"]->ToString();

            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (reader["PHOTO"] != DBNull::Value) {
                component->Photo = safe_cast<array<Byte>^>(reader["PHOTO"]);
            }
            componentList->Add(component);
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return componentList;
}

MechanicComponent^ MecaTrafiSystemPersistance::Persistance::QueryallcomponentByCode(String^ code)
{


    MechanicComponent^ component = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la consulta SQL
        String^ sqlStr = "dbo.usp_QueryByComponentCode_ComponentStock"; // Nombre del procedimiento almacenado
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Asignar parámetro
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 200);
        cmd->Prepare();
        cmd->Parameters["@COMPONENT_CODE"]->Value = code;

        // Ejecutar la consulta
        reader = cmd->ExecuteReader();

        // Procesar los datos
        if (reader->Read()) {
            component = gcnew MechanicComponent();
            component->Name = reader["NAME"]->ToString();
            component->Description = reader["DESCRIPCION"]->ToString();
            component->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]);
            component->Stock = Convert::ToInt32(reader["STOCK"]);
            component->Component_code = reader["COMPONENT_CODE"]->ToString();
            component->Brand = reader["MARCA"]->ToString();

            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (reader["PHOTO"] != DBNull::Value) {
                component->Photo = safe_cast<array<Byte>^>(reader["PHOTO"]);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex; // Relanzar la excepción para manejo externo
    }
    finally {
        // Cerrar objetos de BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return component;


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
            tornillo->Component_code = reader["COMPONENT_CODE"]->ToString();
            tornillo->Longitud = Convert::ToDouble(reader["LONGITUD"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
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
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = tornillo->Id;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200)->Value = tornillo->Name;
        cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = tornillo->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = tornillo->Brand;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = tornillo->UnitaryPrice;
        cmd->Parameters->Add("@LONGITUD", System::Data::SqlDbType::Decimal)->Value = tornillo->Longitud;
        cmd->Parameters->Add("@MATERIAL", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Material;
        cmd->Parameters->Add("@ROSCA", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Rosca;
        cmd->Parameters->Add("@TIPO", System::Data::SqlDbType::VarChar, 50)->Value = tornillo->Tipo;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = tornillo->Component_code;
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
        cmd->Parameters["@COMPONENT_CODE"]->Value = tornillo->Component_code;
        cmd->Parameters["@DESCRIPTION"]->Value = tornillo->Description;
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
    // for (int i = 0; i < tornillosDB->Count; i++) {
     //    if (tornillosDB[i]->Id == tornilloId) {
      //       tornillosDB->RemoveAt(i);
             //PresistTextFile(TXT_EMPLOYEE_FILE_NAME, employeeListDB);
            // PresistXMLFile(XML_EMPLOYEE_FILE_NAME, employeeListDB);
        //     PersistBinaryFile(BIN_TORNILLO_FILE_NAME, tornillosDB);
        //     return tornilloId;
     //    }
   //  }
   //  return 0;

    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteTornillo_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = tornilloId;

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
            tornillo->Component_code = reader["COMPONENT_CODE"]->ToString();
            tornillo->Longitud = Convert::ToDouble(reader["LONGITUD"]->ToString());
            tornillo->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
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
    int motorACId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddMotorAC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 200)->Value = motorAC->Name;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = motorAC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Brand;
        cmd->Parameters->Add("@FRAME", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Frame;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::Decimal)->Value = motorAC->Potencia;
        cmd->Parameters->Add("@CLASES_PROTECCION", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->ClaseProteccion;
        cmd->Parameters->Add("@FASES", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Fases;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 400)->Value = motorAC->Description;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = motorAC->UnitaryPrice;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = motorAC->Component_code;

        cmd->Parameters->Add("@FOTO", System::Data::SqlDbType::Image)->Value = motorAC->Name;
        if (motorAC->Photo == nullptr)
            cmd->Parameters["@FOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@FOTO"]->Value = motorAC->Photo;
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
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

    List<MotoresACCliente^>^ motorACDB = gcnew List<MotoresACCliente^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;

    try {
        // Obtener conexión
        conn = GetConnection();

        // Preparar SQL
        String^ sqlStr = "dbo.usp_QueryAllMotorAC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        // Ejecutar SQL
        reader = cmd->ExecuteReader();

        // Procesar datos
        while (reader->Read()) {
            MotoresACCliente^ motorAC = gcnew MotoresACCliente();
            motorAC->Id = Convert::ToInt32(reader["ID"]->ToString());
            motorAC->Name = reader["NOMBRE"]->ToString();
            motorAC->Description = reader["DESCRIPCION"]->ToString();
            motorAC->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            motorAC->Brand = reader["MARCA"]->ToString();
            motorAC->Frame = reader["FRAME"]->ToString();
            motorAC->Potencia = reader["POTENCIA"]->ToString();
            motorAC->Component_code = reader["COMPONENT_CODE"]->ToString();
            motorAC->Fases = reader["FASES"]->ToString();
            motorAC->ClaseProteccion = reader["CLASES_PROTECCION"]->ToString();
            motorAC->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());

            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["FOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["FOTO"]);
                motorAC->Photo = photoData;
            }

            // Agregar objeto motorAC a la lista
            motorACDB->Add(motorAC);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar objetos de base de datos
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
        String^ sqlStr = "dbo.usp_UpdateMotorAC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = motorAC->Id;
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 200)->Value = motorAC->Name;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 255)->Value = motorAC->Description;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::VarChar, 100)->Value = motorAC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = motorAC->Brand;
        cmd->Parameters->Add("@FRAME", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Frame;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Potencia;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = motorAC->Component_code;
        cmd->Parameters->Add("@FASES", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->Fases;
        cmd->Parameters->Add("@CLASES_PROTECCION", System::Data::SqlDbType::VarChar, 50)->Value = motorAC->ClaseProteccion;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = motorAC->UnitaryPrice;
        cmd->Parameters->Add("@FOTO", System::Data::SqlDbType::Image)->Value = motorAC->Photo;
        cmd->Prepare();
        if (motorAC->Photo == nullptr)
            cmd->Parameters["@FOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@FOTO"]->Value = motorAC->Photo;
        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorACId = 1; // Éxito en la actualización (podrías asignar el ID del motor AC actualizado si lo necesitas) 
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return motorACId;
}

int MecaTrafiSystemPersistance::Persistance::DeleteMotorACStock(int motorACId)
{

    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteMotorAC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = motorACId;

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

MotoresACCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorACStockById(int motorACId)
{
    MotoresACCliente^ motorac = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryMotorACById_stock";  // Nombre del procedimiento almacenado a utilizar
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = motorACId;

        // Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Procesar los resultados
        if (reader->Read()) {
            motorac = gcnew MotoresACCliente();
            motorac->Id = Convert::ToInt32(reader["ID"]->ToString());
            motorac->Name = reader["NOMBRE"]->ToString();
            motorac->Description = reader["DESCRIPCION"]->ToString();
            motorac->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            motorac->Brand = reader["MARCA"]->ToString();
            motorac->Frame = reader["FRAME"]->ToString();
            motorac->Potencia = reader["POTENCIA"]->ToString();
            motorac->Component_code = reader["COMPONENT_CODE"]->ToString();
            motorac->Fases = reader["FASES"]->ToString();
            motorac->ClaseProteccion = reader["CLASES_PROTECCION"]->ToString();
            motorac->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            if (!DBNull::Value->Equals(reader["FOTO"]))
                motorac->Photo = (array<Byte>^)reader["FOTO"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar los objetos de conexión y lectura
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return motorac;
}

//METODOS PARA MOTOR DC - STOCK
int MecaTrafiSystemPersistance::Persistance::AddMotorDCStock(MotoresDCCliente^ motorDC)
{
    int motorDCId = 0;
    SqlConnection^ conn = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia
        String^ sqlStr = "dbo.usp_AddMotorDC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 200)->Value = motorDC->Name;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 255)->Value = motorDC->Description;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = motorDC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = motorDC->Brand;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Potencia;
        cmd->Parameters->Add("@VELOCIDAD", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Velocidad;
        cmd->Parameters->Add("@VOLTAJE", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Voltaje;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = motorDC->Component_code;
        cmd->Parameters->Add("@MONTAJE", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Montaje;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = motorDC->UnitaryPrice;
        cmd->Parameters->Add("@FOTO", System::Data::SqlDbType::Image)->Value = motorDC->Photo;
        if (motorDC->Photo == nullptr)
            cmd->Parameters["@FOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@FOTO"]->Value = motorDC->Photo;

        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

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

    List<MotoresDCCliente^>^ motorDCDB = gcnew List<MotoresDCCliente^>();
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;

    try {
        // Obtener conexión
        conn = GetConnection();

        // Preparar SQL
        String^ sqlStr = "dbo.usp_QueryAllMotorDC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Prepare();

        // Ejecutar SQL
        reader = cmd->ExecuteReader();

        // Procesar datos
        while (reader->Read()) {
            MotoresDCCliente^ motorDC = gcnew MotoresDCCliente();
            motorDC->Id = Convert::ToInt32(reader["ID"]->ToString());
            motorDC->Name = reader["NOMBRE"]->ToString();
            motorDC->Description = reader["DESCRIPCION"]->ToString();
            motorDC->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            motorDC->Brand = reader["MARCA"]->ToString();
            motorDC->Potencia = reader["POTENCIA"]->ToString();
            motorDC->Velocidad = Convert::ToDouble(reader["CANTIDAD"]->ToString());
            motorDC->Voltaje = reader["VOLTAJE"]->ToString();
            motorDC->Montaje = reader["MONTAJE"]->ToString();
            motorDC->Component_code = reader["COMPONENT_CODE"]->ToString();
            motorDC->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());

            // Leer la imagen (PHOTO) si no es DBNull
            if (reader["FOTO"] != DBNull::Value) {
                array<Byte>^ photoData = safe_cast<array<Byte>^>(reader["FOTO"]);
                motorDC->Photo = photoData;
            }

            // Agregar objeto motorDC a la lista
            motorDCDB->Add(motorDC);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar objetos de base de datos
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
        String^ sqlStr = "dbo.usp_UpdateMotorDC_stock";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        // Agregar los parámetros
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = motorDC->Id;
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 200)->Value = motorDC->Name;
        cmd->Parameters->Add("@DESCRIPCION", System::Data::SqlDbType::VarChar, 255)->Value = motorDC->Description;
        cmd->Parameters->Add("@CANTIDAD", System::Data::SqlDbType::Int)->Value = motorDC->Stock;
        cmd->Parameters->Add("@MARCA", System::Data::SqlDbType::VarChar, 100)->Value = motorDC->Brand;
        cmd->Parameters->Add("@POTENCIA", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Potencia;
        cmd->Parameters->Add("@VELOCIDAD", System::Data::SqlDbType::Decimal)->Value = motorDC->Velocidad;
        cmd->Parameters->Add("@COMPONENT_CODE", System::Data::SqlDbType::VarChar, 10)->Value = motorDC->Component_code;
        cmd->Parameters->Add("@VOLTAJE", System::Data::SqlDbType::Decimal)->Value = motorDC->Voltaje;
        cmd->Parameters->Add("@MONTAJE", System::Data::SqlDbType::VarChar, 50)->Value = motorDC->Montaje;
        cmd->Parameters->Add("@PRECIO_UNITARIO", System::Data::SqlDbType::Decimal)->Value = motorDC->UnitaryPrice;
        cmd->Parameters->Add("@FOTO", System::Data::SqlDbType::Image)->Value = motorDC->Photo;

        // Verificar si la foto es nula
        if (motorDC->Photo == nullptr)
            cmd->Parameters["@FOTO"]->Value = DBNull::Value;

        // Preparar y ejecutar la sentencia
        cmd->Prepare();
        cmd->ExecuteNonQuery();

        motorDCId = 1; // Éxito en la actualización (puedes ajustar esto según tus necesidades)
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
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        SqlConnection^ conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteMotorDC_stock ";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = motorDCId;

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

MotoresDCCliente^ MecaTrafiSystemPersistance::Persistance::QueryallMotorDCStockById(int motorDCId)
{

    MotoresDCCliente^ motordc = nullptr;
    SqlConnection^ conn = nullptr;
    SqlDataReader^ reader = nullptr;
    try {
        // Obtener la conexión a la BD
        conn = GetConnection();

        // Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryMotorDCById_stock"; // Nombre del procedimiento almacenado a utilizar
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = motorDCId;
        cmd->Prepare();

        // Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Procesar los resultados
        if (reader->Read()) {
            motordc = gcnew MotoresDCCliente();
            motordc->Id = Convert::ToInt32(reader["ID"]->ToString());
            motordc->Name = reader["NOMBRE"]->ToString();
            motordc->Description = reader["DESCRIPCION"]->ToString();
            motordc->Stock = Convert::ToInt32(reader["CANTIDAD"]->ToString());
            motordc->Brand = reader["MARCA"]->ToString();
            motordc->Potencia = reader["POTENCIA"]->ToString();
            motordc->Velocidad = Convert::ToDouble(reader["VELOCIDAD"]->ToString());
            motordc->Voltaje = reader["VOLTAJE"]->ToString();
            motordc->Montaje = reader["MONTAJE"]->ToString();
            motordc->Component_code = reader["COMPONENT_CODE"]->ToString();
            motordc->UnitaryPrice = Convert::ToDouble(reader["PRECIO_UNITARIO"]->ToString());
            if (!DBNull::Value->Equals(reader["FOTO"]))
                motordc->Photo = (array<Byte>^)reader["FOTO"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Cerrar los objetos de conexión y lectura
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return motordc;
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