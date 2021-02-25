#include "FrmWorkInfGrid.h"
#include "FrmAddInf.h"
#include "FrmChoose.h"
#include <Windows.h>
#include <fstream>
#include <iostream>
#include "Functions_Convert.h"
#include <vector>
#include <ctime>
#define FILE_OF_USERS "users\\users.txt"
using namespace std;

System::Void UchetKurs::FrmWorkInfGrid::FrmWorkInfGrid_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	if (this->Text == "Список аккаунтов") {
		writeToFile("users\\users.txt");
	}
	else if (this->Text == "Список командировок") {
		writeToFile("trips\\trips.txt");
	}
	Application::Exit();
}


System::Void UchetKurs::FrmWorkInfGrid::btnAccountsAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	FrmAddInf^ form = gcnew FrmAddInf(this);
	if (this->Text == "Список аккаунтов") {
		form->LblAddInf->Text = "Добавление аккаунта";
		form->lblAddName1->Text = "Фамилия";
		form->lblAddName2->Text = "Логин";
		form->lblAddName3->Text = "Пароль";
		form->lblAddName4->Text = "Должность";
		form->lblAddName5->Text = "Уровень доступа";
		form->panelAdd->Visible = true;
		form->panel1->Visible = false;
		form->Height = 350;
		
		form->btnAccountsAdd->Location = Drawing::Point(145, 280);
		form->btnAddCancel->Location = Drawing::Point(20, 280);

		form->Show();
	}
	else if (this->Text == "Список сотрудников") {
		form->LblAddInf->Text = "Добавление сотрудника";
		form->lblAddName1->Text = "Фамилия";
		form->lblAddName2->Text = "Должность";
		form->lblAddName3->Text = "Дата рождения";
		form->lblAddName4->Text = "ЗП";
		form->lblAddName5->Text = "Адрес";
		
		form->panelAdd->Visible = false;
		form->Show();
	}
	else if (this->Text == "Список командировок") {
		form->panelAdd->Visible = false;
		form->panel1->Visible = false;
		form->lblAddName5->Visible = false;
		form->LblAddInf->Text = "Добавление командировки";
		form->lblAddName2->Text = "Пункт назнач.";
		form->lblAddName3->Text = "Дата отправ.";
		form->lblAddName4->Text = "Дата прибытия";
		form->labelForTrips1->Text = "Время в пути";

		form->labelForTrips1->Location = Drawing::Point(10, 190);
		form->labelForTrips2->Location = Drawing::Point(10, 225);
		form->labelForTrips3->Location = Drawing::Point(10, 260);
		form->labelForTrips4->Location = Drawing::Point(10, 295);
		form->textBoxForTrips1->Location = Drawing::Point(133, 190);
		form->textBoxForTrips2->Location = Drawing::Point(133, 225);
		form->textBoxForTrips3->Location = Drawing::Point(133, 260);
		form->textBoxForTrips4->Location = Drawing::Point(133, 295);
		form->btnAddCancel->Location = Drawing::Point(20, 328);
		form->btnAccountsAdd->Location = Drawing::Point(145, 328);
		

		form->labelForTrips2->Text = "Цель";
		form->labelForTrips3->Text = "Стоимость поездки";
		form->labelForTrips4->Text = "Примечание";
		form->lblAddName1->Text = "Сотрудник";

		form->Height = 450 ;
		form->Show();

	}
	
	
}

void UchetKurs::FrmWorkInfGrid::SetRows(int n, int id, String^ text1, String^ text2, String^ text3, String^ text4, String^ text5)
{
	GrdInf->Rows[n]->Cells[0]->Value = id;
	GrdInf->Rows[n]->Cells[1]->Value = text1;
	GrdInf->Rows[n]->Cells[2]->Value = text2;
	GrdInf->Rows[n]->Cells[3]->Value = text3;
	GrdInf->Rows[n]->Cells[4]->Value = text4;
	GrdInf->Rows[n]->Cells[5]->Value = text5;
	
}

int UchetKurs::FrmWorkInfGrid::GetRowIndex()
{
	int n = GrdInf->CurrentRow->Index;
	return n;

}

System::Void UchetKurs::FrmWorkInfGrid::btnChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (GrdInf->SelectedRows->Count < 1)
	{
		MessageBox::Show("Выберите строку!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		FrmAddInf^ form = gcnew FrmAddInf(this);

		if (this->Text == "Список аккаунтов") {
			form->LblAddInf->Text = "Изменение данных";
			form->lblAddName1->Text = "Фамилия";
			form->lblAddName2->Text = "Логин";
			form->lblAddName3->Text = "Пароль";
			form->lblAddName4->Text = "Должность";
			form->lblAddName5->Text = "Уровень доступа";

			form->txtAddName1->Text = GrdInf->CurrentRow->Cells[1]->Value->ToString();
			form->txtAddName2->Text = GrdInf->CurrentRow->Cells[2]->Value->ToString();
			form->txtAddName3->Text = GrdInf->CurrentRow->Cells[3]->Value->ToString();
			form->txtAddName4->Text = GrdInf->CurrentRow->Cells[4]->Value->ToString();
			
			if (GrdInf->CurrentRow->Cells[5]->Value == "Администратор") { form->rbAdmin->Checked = true; }
			if (GrdInf->CurrentRow->Cells[5]->Value == "Полный") { form->rbFull->Checked = true; }
			if (GrdInf->CurrentRow->Cells[5]->Value == "Частичный") { form->rbPartly->Checked = true; }
			if (GrdInf->CurrentRow->Cells[5]->Value == "Минимальный") { form->rbMinimum->Checked = true; }

			form->Height = 350;
			form->panelAdd->Visible = true;
			form->panel1->Visible = false;
			form->btnAccountsAdd->Location = Drawing::Point(145, 280);
			form->btnAddCancel->Location = Drawing::Point(20, 280);

			form->btnAccountsAdd->Text = "Изменить";
			form->Show();
		}
		else if (this->Text == "Список сотрудников") {
			form->LblAddInf->Text = "Изменение данных";
			form->lblAddName1->Text = "Фамилия";
			form->lblAddName2->Text = "Должность";
			form->lblAddName3->Text = "Дата рождения";
			form->lblAddName4->Text = "ЗП";
			form->lblAddName5->Visible = false;
			form->panelAdd->Visible = false;
			form->txtAddName1->Text = GrdInf->CurrentRow->Cells[1]->Value->ToString();
			form->txtAddName2->Text = GrdInf->CurrentRow->Cells[2]->Value->ToString();
			form->txtAddName3->Text = GrdInf->CurrentRow->Cells[3]->Value->ToString();
			form->txtAddName4->Text = GrdInf->CurrentRow->Cells[4]->Value->ToString();
			

			

			form->btnAccountsAdd->Text = "Изменить";
			form->Show();
		}

		else {
			if (this->Text == "Список командировок") {
				form->LblAddInf->Text = "Изменение данных";
				form->panelAdd->Visible = false;
				form->panel1->Visible = false;
				form->lblAddName5->Visible = false;
				form->lblAddName2->Text = "Пункт назнач.";
				form->lblAddName3->Text = "Дата отправ.";
				form->lblAddName4->Text = "Дата прибытия";
				form->labelForTrips1->Text = "Время в пути";

				form->labelForTrips1->Location = Drawing::Point(10, 190);
				form->labelForTrips2->Location = Drawing::Point(10, 225);
				form->labelForTrips3->Location = Drawing::Point(10, 260);
				form->labelForTrips4->Location = Drawing::Point(10, 295);
				form->textBoxForTrips1->Location = Drawing::Point(133, 190);
				form->textBoxForTrips2->Location = Drawing::Point(133, 225);
				form->textBoxForTrips3->Location = Drawing::Point(133, 260);
				form->textBoxForTrips4->Location = Drawing::Point(133, 295);
				form->btnAddCancel->Location = Drawing::Point(20, 328);
				form->btnAccountsAdd->Location = Drawing::Point(145, 328);


				form->labelForTrips2->Text = "Цель";
				form->labelForTrips3->Text = "Стоимость поездки";
				form->labelForTrips4->Text = "Примечание";
				form->lblAddName1->Text = "Фамилия";

				form->Height = 450;

				form->txtAddName1->Text = GrdInf->CurrentRow->Cells[1]->Value->ToString();
				form->txtAddName2->Text = GrdInf->CurrentRow->Cells[2]->Value->ToString();
				form->txtAddName3->Text = GrdInf->CurrentRow->Cells[3]->Value->ToString();
				form->txtAddName4->Text = GrdInf->CurrentRow->Cells[4]->Value->ToString();
				form->textBoxForTrips1->Text = GrdInf->CurrentRow->Cells[5]->Value->ToString();
				form->textBoxForTrips2->Text = GrdInf->CurrentRow->Cells[6]->Value->ToString();
				form->textBoxForTrips3->Text = GrdInf->CurrentRow->Cells[7]->Value->ToString();
				form->textBoxForTrips4->Text = GrdInf->CurrentRow->Cells[8]->Value->ToString();
				form->btnAccountsAdd->Text = "Изменить";

				form->Show();
			}
		}
		
		
	}

}

System::Void UchetKurs::FrmWorkInfGrid::buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
	FrmChoose^ form = gcnew FrmChoose();
	if (this->Text == "Список аккаунтов") {
		writeToFile("users\\users.txt");
	}
	else if (this->Text == "Список командировок") {
		writeToFile("trips\\trips.txt");
	}
	form->Show();
	this->Hide();
}

void UchetKurs::FrmWorkInfGrid::writeToFile(string fileName) {
	ofstream file;
	file.open(fileName, ios_base::out);
	for (int i = 0; i < GrdInf->Rows->Count; i++) {
		for (int j = 0; j < GrdInf->Rows[i]->Cells->Count; j++) {
			file << Convert_String_to_string(GrdInf->Rows[i]->Cells[j]->Value->ToString()) << '$';
		}
		file << endl;
	}
	file.close();
}

//void UchetKurs::FrmWorkInfGrid::writeMemberInfoToFile() {
//	ofstream file;
//	file.open(FILE_OF_USERS, ios_base::out);
//	for (int i = 0; i < GrdInf->Rows->Count; i++) {
//		for (int j = 0; j < GrdInf->Rows[i]->Cells->Count; j++) {
//			file << Convert_String_to_string(GrdInf->Rows[i]->Cells[j]->Value->ToString()) << '$';
//		}
//		file << endl;
//	}
//	file.close();
//}

void UchetKurs::FrmWorkInfGrid::addToFile() {
	ofstream file;
	file.open(FILE_OF_USERS, ios_base::app);
	for (int j = 0; j < GrdInf->Rows[GrdInf->Rows->Count - 1]->Cells->Count; j++) {
		file << Convert_String_to_string(GrdInf->Rows[GrdInf->Rows->Count-1]->Cells[j]->Value->ToString()) << '$';
	}
	file << endl;
	file.close();
	file.open("users\\" + Convert_String_to_string(GrdInf->Rows[GrdInf->Rows->Count - 1]->Cells[2]->Value->ToString()) + ".txt", ios_base::out);
	
	file << Convert_String_to_string(GrdInf->Rows[GrdInf->Rows->Count - 1]->Cells[1]->Value->ToString()) << '$';
	file << Convert_String_to_string(GrdInf->Rows[GrdInf->Rows->Count - 1]->Cells[4]->Value->ToString()) << '$';
	file << "none" << '$';
	file << "none" << '$';
	file << "Минск" << '$' << endl;
	file.close();
}


void UchetKurs::FrmWorkInfGrid::readFileUsersToGrid() {
	ifstream file;
	string tempString;
	string word;
	file.open(FILE_OF_USERS, ios_base::in);
	int n = 0;
	while (file >> tempString) {
		GrdInf->Rows->Add();
		int i = 0, j = 0;
		while (tempString[i]) {
			while (tempString[i] != '$') {
				word += tempString[i];
				i++;
			}
			i++;
			GrdInf->Rows[n]->Cells[j]->Value = Convert_string_to_String(word);
			j++;
			word.clear();
		}
		n++;
	}
	file.close();
}

void UchetKurs::FrmWorkInfGrid::readFileTripsToGrid() {
	ifstream file;
	string tempString;
	string word;
	file.open("trips\\trips.txt", ios_base::in);
	int n = 0;
	while (file >> tempString) {
		GrdInf->Rows->Add();
		int i = 0, j = 0;
		while (tempString[i]) {
			while (tempString[i] != '$') {
				word += tempString[i];
				i++;
			}
			i++;
			GrdInf->Rows[n]->Cells[j]->Value = Convert_string_to_String(word);
			j++;
			word.clear();
		}
		n++;
	}
	file.close();
}

void UchetKurs::FrmWorkInfGrid::readFileMembersToGrid() {
	ifstream file;
	string tempString, fio;
	string word;
	vector<vector<string>> users;

	file.open("users\\users.txt", ios_base::in);
	int n = 0;
	while (file >> tempString) {
		users.push_back(vector<string>());
		int i = 0, j = 0;
		while (tempString[i]) {
			while (tempString[i] != '$') {
				word += tempString[i];
				i++;
			}
			i++;
			users[n].push_back(word);
			j++;
			word.clear();
		}
		n++;
	}
	file.close();
	n = 0;
	tempString.clear();
	for (int i = 0; i < users.size(); i++) {
		file.open("users\\" + users[i][2] + ".txt", ios_base::in);
		file >> tempString;
		int k = 0, j = 0;
		GrdInf->Rows->Add();
		GrdInf->Rows[n]->Cells[j]->Value = GrdInf->Rows->Count;
		j++;
		int c = 0;
		while (k < tempString.size()) {
			//if (c != 3) {
				//while (c < 3) {
				/*	while (tempString[k] != '$') {
						word += tempString[k];
						k++;
					}*/
					//fio += word;
					//fio += ' ';
			/*		c++;
					k++;
					word.clear();*/
				//}
			/*	GrdInf->Rows[n]->Cells[j]->Value = Convert_string_to_String(word);
				j++;*/

			//}
			//else {
				while (k < tempString.size() && tempString[k] != '$') {
					word += tempString[k];
					k++;
				}
				k++;
				GrdInf->Rows[n]->Cells[j]->Value = Convert_string_to_String(word);
				j++;
				word.clear();
			//}

		}
		n++;

		file.close();

	}
}