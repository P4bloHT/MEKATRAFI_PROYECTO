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
        cmd->Parameters->Add("@I_CONTRATO", System::Data::SqlDbType::Date);
        cmd->Parameters->Add("@F_CONTRATO", System::Data::SqlDbType::Date);

        // Parámetro de salida para el ID del empleado
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);

        // Paso 4: Preparar la sentencia
        cmd->Prepare();

        // Paso 5: Asignar valores a los parámetros
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
    List<Employee^>^ employees = gcnew List<Employee^>();
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
            employee->Status = (reader["STATUS"]->ToString() == "Y"); // Convertir "Y" a true, "N" a false
            employee->PhoneNumber = Convert::ToInt32(reader["TELEFONO"]->ToString());
            // Verificar si la columna PHOTO es NULL antes de asignarla
            if (!DBNull::Value->Equals(reader["PHOTO"]))
            employee->Photo = (array<Byte>^)reader["PHOTO"];
            employee->Quota = Convert::ToDouble(reader["QUOTA"]->ToString());
            employee->Sales = Convert::ToInt32(reader["SALES"]->ToString());
            employee->WorkHours = Convert::ToDouble(reader["WORKHOURS"]->ToString());
            employee->Salary = Convert::ToDouble(reader["SALARY"]->ToString());
            employee->Warnings = reader["WARNINGS"]->ToString();
            employee->Turn = reader["TURNO"]->ToString();
            employee->InicioContratoDate = Convert::ToDateTime(reader["I_CONTRATO"]->ToString());
            employee->FinContratoDate = Convert::ToDateTime(reader["F_CONTRATO"]->ToString());

            employees->Add(employee);
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
    return employees;
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
        cmd->Parameters["@ISCORP"]->Value = cliente->IsCorp ? "Y" : "N";
        cmd->Parameters["@ISFREQUENT"]->Value = cliente->IsFrequent ? "Y" : "N";
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
        //String^ sqlStr = "SELECT * FROM FAJA_STOCK";

        //CONSULTA X PROCEDURE
        String^ sqlStr = "dbo.usp_QueryAllFajas";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;


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
        //String^ sqlStr = "SELECT * FROM FAJA_STOCK WHERE ID= " + fajaId;
        String^ sqlStr = "dbo.usp_QueryFajasId";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = fajaId;

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
User^ MecaTrafiSystemPersistance::Persistance::QueryUserByName(String^ name)
{
    UserList = (List<User^>^)LoadUser();
    for (int i = 0; i < UserList->Count; i++) {
        if (UserList[i]->Name == name)
            return UserList[i];
    }
    return nullptr;
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
