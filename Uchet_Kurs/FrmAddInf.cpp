#include "FrmAddInf.h"
#include "Functions_Convert.h"
#include <ctime>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


System::Void UchetKurs::FrmAddInf::FrmAddInf_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}

System::Void UchetKurs::FrmAddInf::btnAccountsAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (LblAddInf->Text == "Добавление аккаунта")
	{
		srand(time(NULL));
		int id = rand() % 1000 + 100;
		if (rbAdmin->Checked) {
			parentForm->GrdInf->Rows->Add();
			parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbAdmin->Text);
			parentForm->GrdInf->ClearSelection();
			this->Hide();
		}
		if (rbFull->Checked) {
			parentForm->GrdInf->Rows->Add();
			parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbFull->Text);
			parentForm->GrdInf->ClearSelection();
			this->Hide();
		}
		if (rbPartly->Checked) {
			parentForm->GrdInf->Rows->Add();
			parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbPartly->Text);
			parentForm->GrdInf->ClearSelection();
			this->Hide();
		}
		if (rbMinimum->Checked) {
			parentForm->GrdInf->Rows->Add();
			parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbMinimum->Text);
			parentForm->GrdInf->ClearSelection();
			this->Hide();
		}
		parentForm->addToFile();
		
	}
	else if (LblAddInf->Text == "Добавление сотрудника")
	{
		/*parentForm->GrdInf->Rows->Add();
		parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, "None");
		parentForm->GrdInf->ClearSelection();
		this->Hide();*/
		
	}
	else if (LblAddInf->Text == "Добавление командировки") {
		parentForm->GrdInf->Rows->Add();
			parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, parentForm->GrdInf->Rows->Count, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, textBoxForTrips1->Text);
			parentForm->GrdInf->Rows[parentForm->GrdInf->Rows->Count - 1]->Cells[6]->Value = textBoxForTrips2->Text;
			parentForm->GrdInf->Rows[parentForm->GrdInf->Rows->Count - 1]->Cells[7]->Value = textBoxForTrips3->Text;
			parentForm->GrdInf->Rows[parentForm->GrdInf->Rows->Count - 1]->Cells[8]->Value = textBoxForTrips4->Text;
			parentForm->GrdInf->ClearSelection();
			parentForm->writeToFile("trips\\trips.txt");
			this->Hide();
	}

	if (LblAddInf->Text == "Изменение данных") {
		
		

		if (parentForm->Text == "Список аккаунтов") {

			int id = stoi(Convert_String_to_string(parentForm->GrdInf->CurrentRow->Cells[0]->Value->ToString()));

			ifstream users;
			users.open("users\\users.txt", ios_base::in);
			string tmp, usrname, filename;
			vector<string> str;
			bool check = false;
			while (users >> tmp) {
				int i = -1, count = 0;
				while (tmp[++i]) {
					while (tmp[i] != '$') {
						if (count == 1) {
							usrname += tmp[i];
						}
						if (check && count == 2) {
							filename += tmp[i];
						}
						i++;
					}
					count++;
					if (usrname == Convert_String_to_string(parentForm->GrdInf->CurrentRow->Cells[1]->Value->ToString())) {
						check = true;
					}
					usrname.clear();

				}
				if (check) {
					break;
				}
			}
			tmp.clear();

			ifstream user;
			user.open("users\\" + filename + ".txt", ios_base::in);
			user >> tmp;
			int k = -1;
			while (tmp[++k]) {
				while (tmp[k] != '$') {
					usrname += tmp[k];
					k++;
				}
				str.push_back(usrname);
				usrname.clear();
			}
			user.close();

			string path = "users\\" + filename + ".txt";
			remove(path.c_str());

			if (rbAdmin->Checked) {
				parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbAdmin->Text);
			}
			if (rbFull->Checked) {
				parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbFull->Text);
			}
			if (rbPartly->Checked) {
				parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbPartly->Text);
			}
			if (rbMinimum->Checked) {
				parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbMinimum->Text);
			}
			ofstream file;
			file.open("users\\" + Convert_String_to_string(txtAddName2->Text) + ".txt", ios_base::out);
			file << Convert_String_to_string(txtAddName1->Text) << '$' << Convert_String_to_string(txtAddName4->Text) << '$' << str[2] << '$' << str[3] << '$' << str[4] << '$' << endl;
			file.close();
			parentForm->GrdInf->ClearSelection();
			this->Hide();

			parentForm->writeToFile("users\\users.txt");
		}
		else if (parentForm->Text == "Список сотрудников")
		{
			int id = stoi(Convert_String_to_string(parentForm->GrdInf->CurrentRow->Cells[0]->Value->ToString()));
			ifstream users;
			users.open("users\\users.txt", ios_base::in);
			string tmp, usrname, filename;
			bool check = false;
			while (users >> tmp) {
				int i = -1, count = 0;
				while (tmp[++i]) {
					while (tmp[i] != '$') {
						if (count == 1) {
							usrname += tmp[i];
						}
						if (check && count == 2) {
							filename += tmp[i];
						}
						i++;
					}
					count++;
					if (usrname == Convert_String_to_string(parentForm->GrdInf->CurrentRow->Cells[1]->Value->ToString())) {
						check = true;
					}
					usrname.clear();

				}
				if (check) break;
			}

			parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, "Минск");

			ofstream file;
			file.open("users\\" + filename + ".txt", ios_base::out);
			file << Convert_String_to_string(txtAddName1->Text) << '$' << Convert_String_to_string(txtAddName2->Text) << '$' << Convert_String_to_string(txtAddName3->Text) <<
				'$' << Convert_String_to_string(txtAddName4->Text) << '$' << "Минск" << '$' << endl;
			file.close();
			parentForm->GrdInf->ClearSelection();
			this->Hide();

		}
		else if (parentForm->Text == "Список командировок") {
		int id = stoi(Convert_String_to_string(parentForm->GrdInf->CurrentRow->Cells[0]->Value->ToString()));
		parentForm->SetRows(parentForm->GrdInf->CurrentRow->Index, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, textBoxForTrips1->Text);
		parentForm->GrdInf->Rows[parentForm->GrdInf->CurrentRow->Index]->Cells[6]->Value = textBoxForTrips2->Text;
		parentForm->GrdInf->Rows[parentForm->GrdInf->CurrentRow->Index]->Cells[7]->Value = textBoxForTrips3->Text;
		parentForm->GrdInf->Rows[parentForm->GrdInf->CurrentRow->Index]->Cells[8]->Value = textBoxForTrips4->Text;
		parentForm->GrdInf->ClearSelection(); 
		parentForm->writeToFile("trips\\trips.txt");
		this->Hide();
		}
	}
	else {
	
		//////////////////////////////////////
		if (LblAddInf->Text == "Регистрация")
		{
			srand(time(NULL));
			int id = rand() % 1000 + 100;
			FrmWorkInfGrid^ parentForm = gcnew FrmWorkInfGrid();
			if (rbAdmin->Checked) {
				parentForm->GrdInf->Rows->Add();
				parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbAdmin->Text);
				parentForm->GrdInf->ClearSelection();
				this->Hide();
			}
			if (rbFull->Checked) {
				parentForm->GrdInf->Rows->Add();
				parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbFull->Text);
				parentForm->GrdInf->ClearSelection();
				this->Hide();
			}
			if (rbPartly->Checked) {
				parentForm->GrdInf->Rows->Add();
				parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbPartly->Text);
				parentForm->GrdInf->ClearSelection();
				this->Hide();
			}
			if (rbMinimum->Checked) {
				parentForm->GrdInf->Rows->Add();
				parentForm->SetRows(parentForm->GrdInf->Rows->Count - 1, id, txtAddName1->Text, txtAddName2->Text, txtAddName3->Text, txtAddName4->Text, rbMinimum->Text);
				parentForm->GrdInf->ClearSelection();
				this->Hide();
			}
			parentForm->addToFile();
			delete parentForm;
		}

	}
}


