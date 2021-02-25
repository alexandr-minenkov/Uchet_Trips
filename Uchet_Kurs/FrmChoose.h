#pragma once

namespace UchetKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FrmChoose
	/// </summary>
	public ref class FrmChoose : public System::Windows::Forms::Form
	{
	System::Windows::Forms::Label^ labelBox;
	
	System::Windows::Forms::Button^ buttonExit;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmChoose::typeid));
			this->labelBox = (gcnew System::Windows::Forms::Label());
			this->buttonAccounts = (gcnew System::Windows::Forms::Button());
			this->buttonTrips = (gcnew System::Windows::Forms::Button());
			this->buttonMembers = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelBox
			// 
			this->labelBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBox->Location = System::Drawing::Point(12, 9);
			this->labelBox->Name = L"labelBox";
			this->labelBox->Size = System::Drawing::Size(698, 61);
			this->labelBox->TabIndex = 5;
			this->labelBox->Text = L"Выберите действие:";
			this->labelBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelBox->Click += gcnew System::EventHandler(this, &FrmChoose::labelBox_Click);
			// 
			// buttonAccounts
			// 
			this->buttonAccounts->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonAccounts->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAccounts->Location = System::Drawing::Point(230, 102);
			this->buttonAccounts->Name = L"buttonAccounts";
			this->buttonAccounts->Size = System::Drawing::Size(280, 45);
			this->buttonAccounts->TabIndex = 6;
			this->buttonAccounts->Text = L"Управление аккаунтами";
			this->buttonAccounts->UseVisualStyleBackColor = false;
			this->buttonAccounts->Click += gcnew System::EventHandler(this, &FrmChoose::buttonAccounts_Click);
			// 
			// buttonTrips
			// 
			this->buttonTrips->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonTrips->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTrips->Location = System::Drawing::Point(230, 228);
			this->buttonTrips->Name = L"buttonTrips";
			this->buttonTrips->Size = System::Drawing::Size(280, 45);
			this->buttonTrips->TabIndex = 7;
			this->buttonTrips->Text = L"Управление командировками";
			this->buttonTrips->UseVisualStyleBackColor = false;
			this->buttonTrips->Click += gcnew System::EventHandler(this, &FrmChoose::buttonTrips_Click);
			// 
			// buttonMembers
			// 
			this->buttonMembers->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonMembers->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMembers->Location = System::Drawing::Point(230, 167);
			this->buttonMembers->Name = L"buttonMembers";
			this->buttonMembers->Size = System::Drawing::Size(280, 45);
			this->buttonMembers->TabIndex = 8;
			this->buttonMembers->Text = L"Управление сотрудниками";
			this->buttonMembers->UseVisualStyleBackColor = false;
			this->buttonMembers->Click += gcnew System::EventHandler(this, &FrmChoose::buttonMembers_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonExit->Location = System::Drawing::Point(32, 348);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(88, 29);
			this->buttonExit->TabIndex = 10;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FrmChoose::buttonExit_Click);
			// 
			// FrmChoose
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(722, 403);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonMembers);
			this->Controls->Add(this->buttonTrips);
			this->Controls->Add(this->buttonAccounts);
			this->Controls->Add(this->labelBox);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->Name = L"FrmChoose";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Менеджмент";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FrmChoose::FrmChoose_FormClosed_1);
			this->Load += gcnew System::EventHandler(this, &FrmChoose::FrmChoose_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		/// <summary>
		/// Обработчики событий.
		/// </summary>
		System::Void FrmChoose_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void labelBox_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void FrmChoose_FormClosed_1(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void buttonMembers_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonTrips_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonAccounts_Click(System::Object^ sender, System::EventArgs^ e);

	public:
		System::Windows::Forms::Button^ buttonAccounts;
		System::Windows::Forms::Button^ buttonTrips;
		System::Windows::Forms::Button^ buttonMembers;


		FrmChoose()
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		/// <summary>
		/// public методы.
		/// </summary>

		~FrmChoose()
		{
			if (components)
			{
				delete components;
			}
		}

	

private: System::Void FrmChoose_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
