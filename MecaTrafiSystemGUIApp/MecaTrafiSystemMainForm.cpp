#include "Login.h"
#include "EmployeeForm.h"
using namespace System;
using namespace MecaTrafiSystemGUIApp;
[ STAThreadAttribute]
int Main(array<String^>^ args) {
	MecaTrafiSystemGUIApp::Login^ mainForm = gcnew Login();

	Application::Run(mainForm);


	return 0;
}