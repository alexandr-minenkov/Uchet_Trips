#include "FrmChoose.h"
#include "FrmEnter.h"
#include "FrmWorkInfGrid.h"

System::Void UchetKurs::FrmChoose::buttonAccounts_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmWorkInfGrid^ form = gcnew FrmWorkInfGrid();
	this->Hide();
	form->GrdInf->Rows->Clear();
	form->Width = 780;
	form->GrdInf->Width = 780;
	form->readFileUsersToGrid();
	form->Show();
}

System::Void UchetKurs::FrmChoose::buttonTrips_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmWorkInfGrid^ form = gcnew FrmWorkInfGrid();
	this->Hide();
	form->Text = "Список командировок";
	form->GrdInf->Rows->Clear();
	form->GrdInf->Columns[2]->HeaderText = "Пункт назначения";
	form->GrdInf->Columns[3]->HeaderText = "Дата отправления";
	form->GrdInf->Columns[4]->HeaderText = "Дата прибытия";
	form->GrdInf->Columns[5]->HeaderText = "Время в пути";
	form->GrdInf->Columns->Add("", "Цель");
	form->GrdInf->Columns->Add("", "Стоимость поездки");
	form->GrdInf->Columns->Add("", "Примечание");
	form->Width = 780;
	form->GrdInf->Width = 780;
	form->readFileTripsToGrid();
	form->Show();
}

System::Void UchetKurs::FrmChoose::FrmChoose_FormClosed_1(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
}


System::Void UchetKurs::FrmChoose::buttonMembers_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmWorkInfGrid^ form = gcnew FrmWorkInfGrid();
	this->Hide();
	form->Text = "Список сотрудников";
	form->GrdInf->Columns[2]->HeaderText = "Должность";
	form->GrdInf->Columns[3]->HeaderText = "Дата рождения";
	form->GrdInf->Columns[4]->HeaderText = "ЗП";
	form->GrdInf->Columns[5]->HeaderText = "Город";
	form->GrdInf->Rows->Clear();
	form->Width = 780;
	form->GrdInf->Width = 780;
	form->buttonAddAccount->Visible = false;
	form->readFileMembersToGrid();
	form->Show();
}

System::Void UchetKurs::FrmChoose::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmEnter^ form = gcnew FrmEnter();
	this->Hide();
	form->Show();
}

System::Void UchetKurs::FrmChoose::FrmChoose_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}

