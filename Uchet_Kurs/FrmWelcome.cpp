#include "FrmWelcome.h"
#include "FrmEnter.h"
#include "FrmAddInf.h"


System::Void UchetKurs::FrmWelcome::buttonEnter_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmEnter^ form = gcnew FrmEnter();
	form->Show();
	form->Owner = this;
	this->Hide();
}

System::Void UchetKurs::FrmWelcome::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void UchetKurs::FrmWelcome::buttonRegistration_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmAddInf^ form = gcnew FrmAddInf();
	form->LblAddInf->Text = "Регистрация";
	form->Show();

}

