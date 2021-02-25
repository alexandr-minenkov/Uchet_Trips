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
	form->Text = "������ ������������";
	form->GrdInf->Rows->Clear();
	form->GrdInf->Columns[2]->HeaderText = "����� ����������";
	form->GrdInf->Columns[3]->HeaderText = "���� �����������";
	form->GrdInf->Columns[4]->HeaderText = "���� ��������";
	form->GrdInf->Columns[5]->HeaderText = "����� � ����";
	form->GrdInf->Columns->Add("", "����");
	form->GrdInf->Columns->Add("", "��������� �������");
	form->GrdInf->Columns->Add("", "����������");
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
	form->Text = "������ �����������";
	form->GrdInf->Columns[2]->HeaderText = "���������";
	form->GrdInf->Columns[3]->HeaderText = "���� ��������";
	form->GrdInf->Columns[4]->HeaderText = "��";
	form->GrdInf->Columns[5]->HeaderText = "�����";
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

