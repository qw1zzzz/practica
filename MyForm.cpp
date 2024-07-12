#include "MyForm.h"
#include "Windows.h"
#include "wingdi.h"
#include "WinUser.h"

using namespace app;
using namespace System::Drawing;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // запустить вновь созданную основнуб форму приложения
	return 0;
}