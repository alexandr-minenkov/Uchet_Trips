#include <Windows.h>
#include "FrmEnter.h"

using namespace UchetKurs; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FrmWelcome);
	return 0;
}