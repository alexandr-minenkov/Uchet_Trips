#pragma once

#include "FrmWelcome.h"
#include "FrmChoose.h"
#include <iostream>

namespace UchetKurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FrmEnter
	/// </summary>
	public ref class FrmEnter : public System::Windows::Forms::Form
	{
		System::Windows::Forms::Label^ labelEnter;
		System::Windows::Forms::Label^ labelLogin;
		System::Windows::Forms::Label^ labelPassword;
		System::Windows::Forms::TextBox^ textBoxLogin;
		System::Windows::Forms::TextBox^ textBoxPassword;
		System::Windows::Forms::Panel^ panel;
		System::Windows::Forms::Button^ buttonEnter;
		System::Windows::Forms::Button^ buttonExit;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmEnter::typeid));
			this->labelEnter = (gcnew System::Windows::Forms::Label());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelEnter
			// 
			this->labelEnter->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEnter->Location = System::Drawing::Point(12, 9);
			this->labelEnter->Name = L"labelEnter";
			this->labelEnter->Size = System::Drawing::Size(698, 59);
			this->labelEnter->TabIndex = 4;
			this->labelEnter->Text = L"Вход в учётную запись";
			this->labelEnter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLogin
			// 
			this->labelLogin->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLogin->Location = System::Drawing::Point(98, 17);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(111, 27);
			this->labelLogin->TabIndex = 5;
			this->labelLogin->Text = L"Логин";
			this->labelLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelPassword
			// 
			this->labelPassword->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPassword->Location = System::Drawing::Point(98, 72);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(111, 27);
			this->labelPassword->TabIndex = 6;
			this->labelPassword->Text = L"Пароль";
			this->labelPassword->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxLogin->Location = System::Drawing::Point(56, 47);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(191, 22);
			this->textBoxLogin->TabIndex = 7;
			this->textBoxLogin->TextChanged += gcnew System::EventHandler(this, &FrmEnter::textBoxLogin_TextChanged);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel->Controls->Add(this->buttonExit);
			this->panel->Controls->Add(this->labelPassword);
			this->panel->Controls->Add(this->buttonEnter);
			this->panel->Controls->Add(this->textBoxPassword);
			this->panel->Controls->Add(this->textBoxLogin);
			this->panel->Controls->Add(this->labelLogin);
			this->panel->Location = System::Drawing::Point(214, 112);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(302, 175);
			this->panel->TabIndex = 8;
			this->panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmEnter::panel_Paint);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonExit->Location = System::Drawing::Point(56, 130);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 29);
			this->buttonExit->TabIndex = 9;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FrmEnter::buttonExit_Click);
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::Color::CornflowerBlue;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEnter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonEnter->Location = System::Drawing::Point(172, 130);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(75, 29);
			this->buttonEnter->TabIndex = 8;
			this->buttonEnter->Text = L"Войти";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &FrmEnter::buttonEnter_Click);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBoxPassword->Location = System::Drawing::Point(56, 102);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(191, 22);
			this->textBoxPassword->TabIndex = 7;
			this->textBoxPassword->UseSystemPasswordChar = true;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &FrmEnter::textBoxPassword_TextChanged);
			// 
			// FrmEnter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(722, 403);
			this->Controls->Add(this->labelEnter);
			this->Controls->Add(this->panel);
			this->MaximizeBox = false;
			this->Name = L"FrmEnter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmEnter";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FrmEnter::FrmEnter_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FrmEnter::FrmEnter_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
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
		System::Void FrmEnter_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		System::Void textBoxLogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
		System::Void FrmEnter_Load(System::Object^ sender, System::EventArgs^ e) {
		}

	public:
		FrmEnter(void)
		{
			InitializeComponent();
		}

		/// <summary>
		//public методы
		/// </summary>
		
		~FrmEnter()
		{
			if (components)
			{
				delete components;
			}
		}
	
};
}
