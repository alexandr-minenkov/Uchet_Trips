#pragma once

namespace UchetKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FrmWelcome
	/// </summary>
	public ref class FrmWelcome : public System::Windows::Forms::Form
	{
		System::Windows::Forms::Label^ LblName_Main;

		System::Windows::Forms::Button^ buttonExit;
		System::Windows::Forms::Button^ buttonRegistration;
		System::Windows::Forms::Button^ buttonEnter;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmWelcome::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->LblName_Main = (gcnew System::Windows::Forms::Label());
			this->buttonRegistration = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLight;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(297, 331);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(134, 38);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FrmWelcome::buttonExit_Click);
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonEnter->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLight;
			this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEnter->Location = System::Drawing::Point(266, 160);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(200, 60);
			this->buttonEnter->TabIndex = 4;
			this->buttonEnter->Text = L"Вход в учетную запись";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &FrmWelcome::buttonEnter_Click);
			// 
			// LblName_Main
			// 
			this->LblName_Main->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->LblName_Main->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblName_Main->Location = System::Drawing::Point(16, 58);
			this->LblName_Main->Name = L"LblName_Main";
			this->LblName_Main->Size = System::Drawing::Size(694, 79);
			this->LblName_Main->TabIndex = 3;
			this->LblName_Main->Text = L"Учёт заграничных командировок";
			this->LblName_Main->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonRegistration
			// 
			this->buttonRegistration->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonRegistration->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLight;
			this->buttonRegistration->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonRegistration->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRegistration->Location = System::Drawing::Point(266, 242);
			this->buttonRegistration->Name = L"buttonRegistration";
			this->buttonRegistration->Size = System::Drawing::Size(200, 60);
			this->buttonRegistration->TabIndex = 6;
			this->buttonRegistration->Text = L"Регистрация";
			this->buttonRegistration->UseVisualStyleBackColor = false;
			this->buttonRegistration->Click += gcnew System::EventHandler(this, &FrmWelcome::buttonRegistration_Click);
			// 
			// FrmWelcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(722, 403);
			this->Controls->Add(this->buttonRegistration);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->LblName_Main);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FrmWelcome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добро пожаловать!";
			this->Load += gcnew System::EventHandler(this, &FrmWelcome::FrmWelcome_Load);
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
		System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void FrmWelcome_Load(System::Object^ sender, System::EventArgs^ e) {}
		System::Void FrmWelcome_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			Application::Exit();
		}

	public:
		FrmWelcome(void)
		{
			InitializeComponent();
		}

		/// <summary>
		//public методы
		/// </summary>

		~FrmWelcome()
		{
			if (components)
			{
				delete components; /// Освободить все используемые ресурсы.
			}
		}	
	private: System::Void buttonRegistration_Click(System::Object^ sender, System::EventArgs^ e);
};
}
