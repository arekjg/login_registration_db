#pragma once
#include "User.h"

namespace loginregistrationdb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			label1->Text = "Welcome " + user->name;
			lbAddress->Text = "Your address: " + user->address;
			lbPhone->Text = "Your phone #: " + user->phone;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbPhone;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(560, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome <name>";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbAddress
			// 
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbAddress->Location = System::Drawing::Point(12, 117);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(553, 53);
			this->lbAddress->TabIndex = 0;
			this->lbAddress->Text = L"Your address: <address>";
			this->lbAddress->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbPhone
			// 
			this->lbPhone->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPhone->Location = System::Drawing::Point(13, 186);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(553, 53);
			this->lbPhone->TabIndex = 1;
			this->lbPhone->Text = L"Your phone #: <number>";
			this->lbPhone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 293);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"Main Form";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
