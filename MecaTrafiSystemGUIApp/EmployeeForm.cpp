#include "EmployeeForm.h"
#include "Login.h"
using namespace MecaTrafiSystemGUIApp;

System::Void MecaTrafiSystemGUIApp::EmployeeForm::EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide();
    Login^ loginform = gcnew Login(user);

    loginform->ControlBox = false;
    loginform->ShowDialog();

    user = loginform->GetUser();

    if (user == nullptr) {
        MessageBox::Show("Error: No se pudo obtener el usuario.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        MessageBox::Show("Usuario obtenido correctamente.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}

System::Void MecaTrafiSystemGUIApp::EmployeeForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide();
    employeeForm = gcnew EmployeeForm();
    employeeForm->Show();
}