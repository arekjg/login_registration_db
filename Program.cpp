#include "LoginForm.h"
#include "MainForm.h"
#include "WelcomeForm.h"
#include "RegistrationForm.h"

using namespace System;
using namespace System::Windows::Forms;

void OnFormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Form^ form = safe_cast<Form^>(sender);
	form->FormClosed -= gcnew FormClosedEventHandler(&OnFormClosed);
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
}

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	loginregistrationdb::WelcomeForm^ welcomeForm = gcnew loginregistrationdb::WelcomeForm;
	
	welcomeForm->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
	welcomeForm->Show();
	Application::Run();


}


/*
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
loginregistrationdb::LoginForm loginForm;

loginForm.ShowDialog();
User^ user = loginForm.user;

if (user != nullptr)
{
	loginregistrationdb::MainForm mainForm(user);
	Application::Run(% mainForm);

}
else
{
	MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
}
*/