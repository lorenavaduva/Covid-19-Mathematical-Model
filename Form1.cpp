#include "Form1.h"
#include "Dashboard.h"
#include "CazuriForm.h"
#include "SituatieGlobala.h"
#include "DeceseForm.h"
#include "VindecariForm.h"
#include "TesteForm.h"
#include "HelpForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	tEST23::Form1 form;
	Application::Run(% form);
	
	tEST23::Dashboard form2;
	Application::Run(% form2);

	
}