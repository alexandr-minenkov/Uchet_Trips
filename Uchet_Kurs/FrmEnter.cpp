#include "FrmEnter.h"
#include "FrmWelcome.h"
#include "FrmChoose.h"
#include <iostream>
#include "Functions_Convert.h"
#include "FrmAddInf.h"

#include <iostream>
#include <fstream>
#include <cstdlib> // ��� ������������� ������� exit()


System::Void UchetKurs::FrmEnter::FrmEnter_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
}

System::Void UchetKurs::FrmEnter::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmWelcome^ form = gcnew FrmWelcome();
	form->Show();
	this->Hide();
	//delete this;
}

System::Void UchetKurs::FrmEnter::buttonEnter_Click(System::Object^ sender, System::EventArgs^ e)
{
	using namespace std;

/*	std::string check;
	Convert_String_to_string(TxtPassword->GetHashCode().ToString(), check);
	System::String^ check;
	check = TxtPassword->Text->GetHashCode().ToString();
	if (check == "1234")
	{
		FrmChoose^ form = gcnew FrmChoose();
		form->Show();
	}
	MessageBox::Show (check); */

	/*ofstream inf("Accounts.txt", ios::in);

	if (!inf)
	{
		// �� ������� ��������� �� ������ � ��������� ������� exit()
		cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
		exit(1);
	} 

	while (inf)
	{
		string strInput;
		inf >> strInput;
	}*/

	FrmWorkInfGrid^ grid = gcnew FrmWorkInfGrid();
	grid->readFileUsersToGrid();
	bool enter = false;
	for (int i = 0; i < grid->GrdInf->Rows->Count; i++) {
		if (Convert_String_to_string(grid->GrdInf->Rows[i]->Cells[2]->Value->ToString()) == Convert_String_to_string(textBoxLogin->Text->ToString())) {
			if (Convert_String_to_string(grid->GrdInf->Rows[i]->Cells[3]->Value->ToString()) == Convert_String_to_string(textBoxPassword->Text->ToString())) {
				enter = true;
				FrmChoose^ form = gcnew FrmChoose();
				form->Show();
				this->Hide();
				/*string access = Convert_String_to_string(grid->GrdInf->Rows[i]->Cells[5]->Value->ToString());
				if (grid->GrdInf->Rows[i]->Cells[5]->Value == "A������������")
				{
					
					delete grid;
					FrmChoose^ form = gcnew FrmChoose();
					form->Show();
					this->Hide();
				}
				if (access == "������") 
				{
					delete grid;
					FrmChoose^ form = gcnew FrmChoose();
					form->buttonAccounts->Enabled = false;
					form->buttonAccounts->Text = "����������";
					form->Show();
					this->Hide();
				}
				if (access == "���������" || access == "������������")
				{
					
					delete grid;
					FrmChoose^ form = gcnew FrmChoose();
					form->buttonAccounts->Enabled = false;
					form->buttonMembers->Enabled = false;
					form->buttonAccounts->Text = "����������";
					form->buttonMembers->Text = "����������";
					form->Show();
					this->Hide();
				}*/
			}
		}
	}
	if (!enter) {
		MessageBox::Show("�������� ����� ��� ������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	
}
