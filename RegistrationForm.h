#pragma once
#include "User.h"

namespace loginregistrationdb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPasswordConfirm;
	private: System::Windows::Forms::TextBox^ tbName;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbAddress;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPasswordConfirm = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(544, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 52);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(156, 92);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(400, 34);
			this->tbEmail->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(13, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 52);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(156, 146);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(400, 34);
			this->tbPassword->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->btnOK->Location = System::Drawing::Point(156, 432);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(189, 44);
			this->btnOK->TabIndex = 7;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegistrationForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->btnCancel->Location = System::Drawing::Point(367, 432);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(189, 44);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegistrationForm::btnCancel_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->label4->Location = System::Drawing::Point(13, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 52);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Confirm Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbPasswordConfirm
			// 
			this->tbPasswordConfirm->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPasswordConfirm->Location = System::Drawing::Point(156, 201);
			this->tbPasswordConfirm->Name = L"tbPasswordConfirm";
			this->tbPasswordConfirm->PasswordChar = '*';
			this->tbPasswordConfirm->Size = System::Drawing::Size(400, 34);
			this->tbPasswordConfirm->TabIndex = 3;
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(156, 256);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(400, 34);
			this->tbName->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(12, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 52);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Name";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPhone->Location = System::Drawing::Point(156, 311);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(400, 34);
			this->tbPhone->TabIndex = 5;
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAddress->Location = System::Drawing::Point(156, 368);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(400, 34);
			this->tbAddress->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(13, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 52);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Phone";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(13, 356);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 52);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Address";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(580, 501);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbPasswordConfirm);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegistrationForm";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Registration Canceled", "Registration Canceled", MessageBoxButtons::OK);
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;
		String^ confirmPass = this->tbPasswordConfirm->Text;
		String^ userName = this->tbName->Text;

		if (email->Length == 0 || password->Length == 0 || confirmPass->Length == 0 || userName->Length == 0)
		{
			MessageBox::Show("One of the following fields is empty: Email, Password, Confirm Password, Name", "Empty Field", MessageBoxButtons::OK);
			return;
		}
		if (password != confirmPass)
		{
			MessageBox::Show("Given passwords don't match", "Ivalid password", MessageBoxButtons::OK);
			return;
		}

		user = gcnew User;
		//user->id = 0;
		user->name = userName;
		user->email = email;
		user->phone = this->tbPhone->Text;
		user->address = this->tbAddress->Text;
		user->password = password;

		try
		{
			String^ connString = "Data Source=.\\TEW_SQLEXPRESS;Initial Catalog=users_data;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection();
			sqlConn->ConnectionString = connString;

			String^ insertQuery = "INSERT INTO dbo.users (name, email, phone, address, password)";
			insertQuery += " VALUES('" + user->name + "', '" + user->email + "', '" + user->phone + "', '" + user->address + "', '" + user->password + "')";

			SqlCommand^ cmd = sqlConn->CreateCommand();
			cmd->CommandText = insertQuery;
			sqlConn->Open();
			cmd->ExecuteNonQuery();
			sqlConn->Close();

			MessageBox::Show("Your data was succesfully saved in database. You can log in now", "Registration succesful", MessageBoxButtons::OK);

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}
	};
}
