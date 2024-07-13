#include "EmployeeForm.h"

using namespace System;
using namespace MecaTrafiSystemGUIApp;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MecaTrafiSystemGUIApp::EmployeeForm form;
	Application::Run(% form);


	return 0;
}
