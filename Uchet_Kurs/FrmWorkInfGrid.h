#pragma once
#include <iostream>
using namespace std;

namespace UchetKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Accounts
	/// </summary>
	public ref class FrmWorkInfGrid : public System::Windows::Forms::Form
	{
		






		System::Windows::Forms::Button^ buttonExit;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmWorkInfGrid::typeid));
			this->GrdInf = (gcnew System::Windows::Forms::DataGridView());
			this->buttonAddAccount = (gcnew System::Windows::Forms::Button());
			this->buttonEditAccount = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->columnRowNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnFio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnLogin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colomnPosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->columnAccess = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrdInf))->BeginInit();
			this->SuspendLayout();
			// 
			// GrdInf
			// 
			this->GrdInf->AllowUserToAddRows = false;
			this->GrdInf->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->GrdInf->BackgroundColor = System::Drawing::Color::DarkTurquoise;
			this->GrdInf->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->GrdInf->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GrdInf->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->columnRowNumber,
					this->columnFio, this->columnLogin, this->columnPassword, this->colomnPosition, this->columnAccess
			});
			this->GrdInf->GridColor = System::Drawing::Color::CornflowerBlue;
			this->GrdInf->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->GrdInf->Location = System::Drawing::Point(-2, 0);
			this->GrdInf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GrdInf->Name = L"GrdInf";
			this->GrdInf->ReadOnly = true;
			this->GrdInf->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->GrdInf->RowHeadersWidth = 40;
			this->GrdInf->RowTemplate->Height = 24;
			this->GrdInf->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->GrdInf->Size = System::Drawing::Size(974, 507);
			this->GrdInf->TabIndex = 0;
			this->GrdInf->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmWorkInfGrid::GrdAccounts_CellContentClick);
			// 
			// buttonAddAccount
			// 
			this->buttonAddAccount->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonAddAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonAddAccount->Location = System::Drawing::Point(702, 515);
			this->buttonAddAccount->Name = L"buttonAddAccount";
			this->buttonAddAccount->Size = System::Drawing::Size(112, 29);
			this->buttonAddAccount->TabIndex = 10;
			this->buttonAddAccount->Text = L"Добавить";
			this->buttonAddAccount->UseVisualStyleBackColor = false;
			this->buttonAddAccount->Click += gcnew System::EventHandler(this, &FrmWorkInfGrid::btnAccountsAdd_Click);
			// 
			// buttonEditAccount
			// 
			this->buttonEditAccount->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonEditAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEditAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonEditAccount->Location = System::Drawing::Point(841, 515);
			this->buttonEditAccount->Name = L"buttonEditAccount";
			this->buttonEditAccount->Size = System::Drawing::Size(112, 29);
			this->buttonEditAccount->TabIndex = 11;
			this->buttonEditAccount->Text = L"Изменить";
			this->buttonEditAccount->UseVisualStyleBackColor = false;
			this->buttonEditAccount->Click += gcnew System::EventHandler(this, &FrmWorkInfGrid::btnChange_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonExit->Location = System::Drawing::Point(12, 515);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(112, 29);
			this->buttonExit->TabIndex = 12;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FrmWorkInfGrid::buttonExit_Click);
			// 
			// columnRowNumber
			// 
			this->columnRowNumber->FillWeight = 30;
			this->columnRowNumber->HeaderText = L"#";
			this->columnRowNumber->MinimumWidth = 10;
			this->columnRowNumber->Name = L"columnRowNumber";
			this->columnRowNumber->ReadOnly = true;
			// 
			// columnFio
			// 
			this->columnFio->FillWeight = 100.7487F;
			this->columnFio->HeaderText = L"Фамилия";
			this->columnFio->MinimumWidth = 10;
			this->columnFio->Name = L"columnFio";
			this->columnFio->ReadOnly = true;
			// 
			// columnLogin
			// 
			this->columnLogin->FillWeight = 100.7487F;
			this->columnLogin->HeaderText = L"Логин";
			this->columnLogin->MinimumWidth = 10;
			this->columnLogin->Name = L"columnLogin";
			this->columnLogin->ReadOnly = true;
			// 
			// columnPassword
			// 
			this->columnPassword->FillWeight = 100.7487F;
			this->columnPassword->HeaderText = L"Пароль";
			this->columnPassword->MinimumWidth = 10;
			this->columnPassword->Name = L"columnPassword";
			this->columnPassword->ReadOnly = true;
			// 
			// colomnPosition
			// 
			this->colomnPosition->FillWeight = 100.7487F;
			this->colomnPosition->HeaderText = L"Должность";
			this->colomnPosition->MinimumWidth = 10;
			this->colomnPosition->Name = L"colomnPosition";
			this->colomnPosition->ReadOnly = true;
			// 
			// columnAccess
			// 
			this->columnAccess->FillWeight = 100.7487F;
			this->columnAccess->HeaderText = L"Уровень доступа";
			this->columnAccess->MinimumWidth = 10;
			this->columnAccess->Name = L"columnAccess";
			this->columnAccess->ReadOnly = true;
			// 
			// FrmWorkInfGrid
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(965, 556);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonEditAccount);
			this->Controls->Add(this->buttonAddAccount);
			this->Controls->Add(this->GrdInf);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"FrmWorkInfGrid";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список аккаунтов";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FrmWorkInfGrid::FrmWorkInfGrid_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrdInf))->EndInit();
			this->ResumeLayout(false);

		}
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnRowNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnFio;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnLogin;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnPassword;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ colomnPosition;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ columnAccess;
#pragma endregion

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		//Обработчики событий
		System::Void FrmWorkInfGrid_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void btnAccountsAdd_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void GrdAccounts_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
		{
		}

	public:
		//public переменные
		System::Windows::Forms::Button^ buttonEditAccount;
		System::Windows::Forms::Button^ buttonAddAccount;
		System::Windows::Forms::DataGridView^ GrdInf;

		FrmWorkInfGrid(void)
		{
			InitializeComponent();
		}

		/// public методы.
		int GetRowIndex();
		void SetRows(int n, int id, String^ text1, String^ text2, String^ text3, String^ text4, String^ text5);
		void writeToFile(string);
		void addToFile();
		void readFileUsersToGrid();
		void readFileMembersToGrid();
		void readFileTripsToGrid();


		~FrmWorkInfGrid()
		{
			if (components)
			{
				delete components;
			}
		}
	};
}
