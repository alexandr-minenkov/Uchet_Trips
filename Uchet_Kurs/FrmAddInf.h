#include "FrmWorkInfGrid.h"
#pragma once

namespace UchetKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FrmAddInf
	/// </summary>
	public ref class FrmAddInf : public System::Windows::Forms::Form
	{

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmAddInf::typeid));
			this->lblAddName1 = (gcnew System::Windows::Forms::Label());
			this->txtAddName1 = (gcnew System::Windows::Forms::TextBox());
			this->lblAddName2 = (gcnew System::Windows::Forms::Label());
			this->txtAddName2 = (gcnew System::Windows::Forms::TextBox());
			this->lblAddName3 = (gcnew System::Windows::Forms::Label());
			this->txtAddName3 = (gcnew System::Windows::Forms::TextBox());
			this->lblAddName4 = (gcnew System::Windows::Forms::Label());
			this->txtAddName4 = (gcnew System::Windows::Forms::TextBox());
			this->panelAdd = (gcnew System::Windows::Forms::Panel());
			this->rbMinimum = (gcnew System::Windows::Forms::RadioButton());
			this->rbPartly = (gcnew System::Windows::Forms::RadioButton());
			this->rbFull = (gcnew System::Windows::Forms::RadioButton());
			this->rbAdmin = (gcnew System::Windows::Forms::RadioButton());
			this->lblAddName5 = (gcnew System::Windows::Forms::Label());
			this->btnAccountsAdd = (gcnew System::Windows::Forms::Button());
			this->btnAddCancel = (gcnew System::Windows::Forms::Button());
			this->LblAddInf = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxForTrips2 = (gcnew System::Windows::Forms::TextBox());
			this->labelForTrips2 = (gcnew System::Windows::Forms::Label());
			this->textBoxForTrips1 = (gcnew System::Windows::Forms::TextBox());
			this->labelForTrips1 = (gcnew System::Windows::Forms::Label());
			this->labelForTrips3 = (gcnew System::Windows::Forms::Label());
			this->textBoxForTrips3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxForTrips4 = (gcnew System::Windows::Forms::TextBox());
			this->labelForTrips4 = (gcnew System::Windows::Forms::Label());
			this->panelAdd->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblAddName1
			// 
			this->lblAddName1->BackColor = System::Drawing::Color::SkyBlue;
			this->lblAddName1->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAddName1->Location = System::Drawing::Point(14, 71);
			this->lblAddName1->Name = L"lblAddName1";
			this->lblAddName1->Size = System::Drawing::Size(125, 22);
			this->lblAddName1->TabIndex = 6;
			this->lblAddName1->Text = L"Фамилия:";
			this->lblAddName1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddName1
			// 
			this->txtAddName1->Location = System::Drawing::Point(177, 72);
			this->txtAddName1->Name = L"txtAddName1";
			this->txtAddName1->Size = System::Drawing::Size(139, 22);
			this->txtAddName1->TabIndex = 7;
			// 
			// lblAddName2
			// 
			this->lblAddName2->BackColor = System::Drawing::Color::SkyBlue;
			this->lblAddName2->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAddName2->Location = System::Drawing::Point(14, 110);
			this->lblAddName2->Name = L"lblAddName2";
			this->lblAddName2->Size = System::Drawing::Size(125, 22);
			this->lblAddName2->TabIndex = 8;
			this->lblAddName2->Text = L"Логин:";
			this->lblAddName2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddName2
			// 
			this->txtAddName2->Location = System::Drawing::Point(177, 111);
			this->txtAddName2->Name = L"txtAddName2";
			this->txtAddName2->Size = System::Drawing::Size(139, 22);
			this->txtAddName2->TabIndex = 9;
			// 
			// lblAddName3
			// 
			this->lblAddName3->BackColor = System::Drawing::Color::SkyBlue;
			this->lblAddName3->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAddName3->Location = System::Drawing::Point(14, 151);
			this->lblAddName3->Name = L"lblAddName3";
			this->lblAddName3->Size = System::Drawing::Size(125, 22);
			this->lblAddName3->TabIndex = 10;
			this->lblAddName3->Text = L"Пароль:";
			this->lblAddName3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddName3
			// 
			this->txtAddName3->Location = System::Drawing::Point(177, 151);
			this->txtAddName3->Name = L"txtAddName3";
			this->txtAddName3->Size = System::Drawing::Size(139, 22);
			this->txtAddName3->TabIndex = 11;
			// 
			// lblAddName4
			// 
			this->lblAddName4->BackColor = System::Drawing::Color::SkyBlue;
			this->lblAddName4->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAddName4->Location = System::Drawing::Point(14, 194);
			this->lblAddName4->Name = L"lblAddName4";
			this->lblAddName4->Size = System::Drawing::Size(125, 22);
			this->lblAddName4->TabIndex = 12;
			this->lblAddName4->Text = L"Должность:";
			this->lblAddName4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtAddName4
			// 
			this->txtAddName4->Location = System::Drawing::Point(177, 194);
			this->txtAddName4->Name = L"txtAddName4";
			this->txtAddName4->Size = System::Drawing::Size(139, 22);
			this->txtAddName4->TabIndex = 13;
			// 
			// panelAdd
			// 
			this->panelAdd->BackColor = System::Drawing::Color::SkyBlue;
			this->panelAdd->Controls->Add(this->rbMinimum);
			this->panelAdd->Controls->Add(this->rbPartly);
			this->panelAdd->Controls->Add(this->rbFull);
			this->panelAdd->Controls->Add(this->rbAdmin);
			this->panelAdd->Location = System::Drawing::Point(14, 269);
			this->panelAdd->Name = L"panelAdd";
			this->panelAdd->Size = System::Drawing::Size(302, 60);
			this->panelAdd->TabIndex = 14;
			// 
			// rbMinimum
			// 
			this->rbMinimum->AutoSize = true;
			this->rbMinimum->Location = System::Drawing::Point(177, 30);
			this->rbMinimum->Name = L"rbMinimum";
			this->rbMinimum->Size = System::Drawing::Size(122, 21);
			this->rbMinimum->TabIndex = 3;
			this->rbMinimum->Text = L"Минимальный";
			this->rbMinimum->UseVisualStyleBackColor = true;
			// 
			// rbPartly
			// 
			this->rbPartly->AutoSize = true;
			this->rbPartly->Location = System::Drawing::Point(177, 3);
			this->rbPartly->Name = L"rbPartly";
			this->rbPartly->Size = System::Drawing::Size(103, 21);
			this->rbPartly->TabIndex = 2;
			this->rbPartly->Text = L"Частичный";
			this->rbPartly->UseVisualStyleBackColor = true;
			// 
			// rbFull
			// 
			this->rbFull->AutoSize = true;
			this->rbFull->Location = System::Drawing::Point(18, 30);
			this->rbFull->Name = L"rbFull";
			this->rbFull->Size = System::Drawing::Size(81, 21);
			this->rbFull->TabIndex = 1;
			this->rbFull->Text = L"Полный";
			this->rbFull->UseVisualStyleBackColor = true;
			// 
			// rbAdmin
			// 
			this->rbAdmin->AutoSize = true;
			this->rbAdmin->Location = System::Drawing::Point(18, 3);
			this->rbAdmin->Name = L"rbAdmin";
			this->rbAdmin->Size = System::Drawing::Size(132, 21);
			this->rbAdmin->TabIndex = 0;
			this->rbAdmin->Text = L"Администратор";
			this->rbAdmin->UseVisualStyleBackColor = true;
			// 
			// lblAddName5
			// 
			this->lblAddName5->BackColor = System::Drawing::Color::SkyBlue;
			this->lblAddName5->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAddName5->Location = System::Drawing::Point(14, 235);
			this->lblAddName5->Name = L"lblAddName5";
			this->lblAddName5->Size = System::Drawing::Size(302, 22);
			this->lblAddName5->TabIndex = 15;
			this->lblAddName5->Text = L"Уровень доступа:";
			this->lblAddName5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnAccountsAdd
			// 
			this->btnAccountsAdd->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnAccountsAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAccountsAdd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAccountsAdd->Location = System::Drawing::Point(200, 436);
			this->btnAccountsAdd->Name = L"btnAccountsAdd";
			this->btnAccountsAdd->Size = System::Drawing::Size(112, 29);
			this->btnAccountsAdd->TabIndex = 18;
			this->btnAccountsAdd->Text = L"Добавить";
			this->btnAccountsAdd->UseVisualStyleBackColor = false;
			this->btnAccountsAdd->Click += gcnew System::EventHandler(this, &FrmAddInf::btnAccountsAdd_Click);
			// 
			// btnAddCancel
			// 
			this->btnAddCancel->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btnAddCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddCancel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAddCancel->Location = System::Drawing::Point(10, 436);
			this->btnAddCancel->Name = L"btnAddCancel";
			this->btnAddCancel->Size = System::Drawing::Size(112, 29);
			this->btnAddCancel->TabIndex = 19;
			this->btnAddCancel->Text = L"Отмена";
			this->btnAddCancel->UseVisualStyleBackColor = false;
			this->btnAddCancel->Click += gcnew System::EventHandler(this, &FrmAddInf::btnAddCancel_Click);
			// 
			// LblAddInf
			// 
			this->LblAddInf->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->LblAddInf->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold));
			this->LblAddInf->Location = System::Drawing::Point(13, 20);
			this->LblAddInf->Name = L"LblAddInf";
			this->LblAddInf->Size = System::Drawing::Size(302, 37);
			this->LblAddInf->TabIndex = 20;
			this->LblAddInf->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SkyBlue;
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(422, 272);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(302, 161);
			this->panel1->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(163, 124);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(135, 22);
			this->textBox6->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(7, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 22);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Дом:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 22);
			this->textBox3->TabIndex = 38;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(7, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 22);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Улица:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(162, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 22);
			this->textBox4->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(7, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 22);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Город:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 22);
			this->textBox2->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 22);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Область:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 22);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Страна:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxForTrips2
			// 
			this->textBoxForTrips2->Location = System::Drawing::Point(562, 152);
			this->textBoxForTrips2->Name = L"textBoxForTrips2";
			this->textBoxForTrips2->Size = System::Drawing::Size(139, 22);
			this->textBoxForTrips2->TabIndex = 44;
			// 
			// labelForTrips2
			// 
			this->labelForTrips2->BackColor = System::Drawing::Color::SkyBlue;
			this->labelForTrips2->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForTrips2->Location = System::Drawing::Point(391, 152);
			this->labelForTrips2->Name = L"labelForTrips2";
			this->labelForTrips2->Size = System::Drawing::Size(127, 22);
			this->labelForTrips2->TabIndex = 43;
			this->labelForTrips2->Text = L"Страна:";
			this->labelForTrips2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxForTrips1
			// 
			this->textBoxForTrips1->Location = System::Drawing::Point(562, 111);
			this->textBoxForTrips1->Name = L"textBoxForTrips1";
			this->textBoxForTrips1->Size = System::Drawing::Size(139, 22);
			this->textBoxForTrips1->TabIndex = 42;
			// 
			// labelForTrips1
			// 
			this->labelForTrips1->BackColor = System::Drawing::Color::SkyBlue;
			this->labelForTrips1->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForTrips1->Location = System::Drawing::Point(395, 110);
			this->labelForTrips1->Name = L"labelForTrips1";
			this->labelForTrips1->Size = System::Drawing::Size(125, 22);
			this->labelForTrips1->TabIndex = 41;
			this->labelForTrips1->Text = L"Страна:";
			this->labelForTrips1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelForTrips3
			// 
			this->labelForTrips3->BackColor = System::Drawing::Color::SkyBlue;
			this->labelForTrips3->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForTrips3->Location = System::Drawing::Point(393, 196);
			this->labelForTrips3->Name = L"labelForTrips3";
			this->labelForTrips3->Size = System::Drawing::Size(125, 22);
			this->labelForTrips3->TabIndex = 45;
			this->labelForTrips3->Text = L"ФИО:";
			this->labelForTrips3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxForTrips3
			// 
			this->textBoxForTrips3->Location = System::Drawing::Point(562, 196);
			this->textBoxForTrips3->Name = L"textBoxForTrips3";
			this->textBoxForTrips3->Size = System::Drawing::Size(139, 22);
			this->textBoxForTrips3->TabIndex = 46;
			// 
			// textBoxForTrips4
			// 
			this->textBoxForTrips4->Location = System::Drawing::Point(562, 50);
			this->textBoxForTrips4->Name = L"textBoxForTrips4";
			this->textBoxForTrips4->Size = System::Drawing::Size(139, 22);
			this->textBoxForTrips4->TabIndex = 48;
			// 
			// labelForTrips4
			// 
			this->labelForTrips4->BackColor = System::Drawing::Color::SkyBlue;
			this->labelForTrips4->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForTrips4->Location = System::Drawing::Point(395, 49);
			this->labelForTrips4->Name = L"labelForTrips4";
			this->labelForTrips4->Size = System::Drawing::Size(125, 22);
			this->labelForTrips4->TabIndex = 47;
			this->labelForTrips4->Text = L"Страна:";
			this->labelForTrips4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FrmAddInf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(332, 479);
			this->Controls->Add(this->textBoxForTrips4);
			this->Controls->Add(this->labelForTrips4);
			this->Controls->Add(this->textBoxForTrips2);
			this->Controls->Add(this->textBoxForTrips3);
			this->Controls->Add(this->labelForTrips3);
			this->Controls->Add(this->labelForTrips2);
			this->Controls->Add(this->textBoxForTrips1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelForTrips1);
			this->Controls->Add(this->LblAddInf);
			this->Controls->Add(this->btnAddCancel);
			this->Controls->Add(this->btnAccountsAdd);
			this->Controls->Add(this->panelAdd);
			this->Controls->Add(this->txtAddName4);
			this->Controls->Add(this->lblAddName4);
			this->Controls->Add(this->txtAddName3);
			this->Controls->Add(this->lblAddName3);
			this->Controls->Add(this->txtAddName2);
			this->Controls->Add(this->lblAddName2);
			this->Controls->Add(this->txtAddName1);
			this->Controls->Add(this->lblAddName1);
			this->Controls->Add(this->lblAddName5);
			this->MaximizeBox = false;
			this->Name = L"FrmAddInf";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmAddInf";
			this->Load += gcnew System::EventHandler(this, &FrmAddInf::FrmAddInf_Load);
			this->panelAdd->ResumeLayout(false);
			this->panelAdd->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
public: System::Windows::Forms::Panel^ panel1;
private:

public: System::Windows::Forms::TextBox^ textBox6;
private:
public: System::Windows::Forms::Label^ label6;
public: System::Windows::Forms::TextBox^ textBox3;
public: System::Windows::Forms::Label^ label3;
public: System::Windows::Forms::TextBox^ textBox4;
public: System::Windows::Forms::Label^ label4;
public: System::Windows::Forms::TextBox^ textBox2;
public: System::Windows::Forms::Label^ label2;
public: System::Windows::Forms::TextBox^ textBox1;
public: System::Windows::Forms::Label^ label1;
public: System::Windows::Forms::TextBox^ textBoxForTrips2;
public: System::Windows::Forms::Label^ labelForTrips2;
public: System::Windows::Forms::TextBox^ textBoxForTrips1;
public: System::Windows::Forms::Label^ labelForTrips1;






public: System::Windows::Forms::Label^ labelForTrips3;
public: System::Windows::Forms::TextBox^ textBoxForTrips3;
public: System::Windows::Forms::TextBox^ textBoxForTrips4;
public: System::Windows::Forms::Label^ labelForTrips4;

public:





private:













#pragma endregion
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		// Обработчики событий
		System::Void btnAccountsAdd_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void FrmAddInf_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		System::Void textBoxAddress_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		System::Void FrmAddInf_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void btnAddCancel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
		}

	public:
		System::Windows::Forms::Label^ lblAddName1;
		System::Windows::Forms::TextBox^ txtAddName1;
		System::Windows::Forms::Label^ lblAddName2;
		System::Windows::Forms::TextBox^ txtAddName2;
		System::Windows::Forms::Label^ lblAddName3;
		System::Windows::Forms::TextBox^ txtAddName3;
		System::Windows::Forms::Label^ lblAddName4;
		System::Windows::Forms::TextBox^ txtAddName4;
		System::Windows::Forms::Panel^ panelAdd;
		System::Windows::Forms::Label^ lblAddName5;
		System::Windows::Forms::RadioButton^ rbMinimum;
		System::Windows::Forms::RadioButton^ rbPartly;
		System::Windows::Forms::RadioButton^ rbFull;
		System::Windows::Forms::RadioButton^ rbAdmin;
		System::Windows::Forms::Button^ btnAccountsAdd;
		System::Windows::Forms::Button^ btnAddCancel;
		System::Windows::Forms::Label^ LblAddInf;

		FrmWorkInfGrid^ parentForm;

		FrmAddInf(void)
		{
			InitializeComponent();
		}

		FrmAddInf(FrmWorkInfGrid^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FrmAddInf()
		{
			if (components)
			{
				delete components;
			}
		}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void textBoxForTrips4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelForTrips4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelForTrips5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
