//---------------------------------------------------------------------------

#include <vcl.h>
#include <Registry.hpp>
#pragma hdrstop

#include "LoginUnit.h"
#include "dm1.h"
#include "RegisterUnit.h"
#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFLogin *FLogin;
bool KeyDeleted = false;
//---------------------------------------------------------------------------
__fastcall TFLogin::TFLogin(TComponent* Owner)
	: TForm(Owner)
{
	//Citanje is windows registry za rememberme funkciju
	TRegistry *Registry = new TRegistry;
	Registry->RootKey = HKEY_CURRENT_USER;
	AnsiString KEY = "SOFTWARE\\RememberMe";

	if(Registry->KeyExists(KEY))
		if(Registry->OpenKey(KEY, true)){
			EUsernameLogin->Text = Registry->ReadString("Username");
			EPasswordLogin->Text = Registry->ReadString("Password");
            CBRememberMe->Checked = Registry->ReadBool("RememberMe");
			Registry->CloseKey();
		}
		delete Registry;
}
//---------------------------------------------------------------------------

void __fastcall TFLogin::OpenRegisterForm(TObject *Sender)
{
		//Hide();
		FRegister->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFLogin::OpenMainForm(TObject *Sender)
{

	// provjera username-a i lozinke
	// sakriti unos passworda
	//
	TLocateOptions Opts;
	Opts.Clear();
	Variant VAR[2];
	VAR[0] = Variant(EUsernameLogin->Text);
	VAR[1] = Variant(EPasswordLogin->Text);
	if(DMUsers->TUsers->Locate("username;password",VarArrayOf(VAR,1),Opts)) {

		 //Hide();
		 FMain->ActiveUser->Caption =  FLogin->EUsernameLogin->Text;
		 FMain->ShowModal();
	} else {
		Application->MessageBox(L"Wrong Username or Password!",L"Error!",MB_OK|MB_ICONWARNING);
	}
}

//---------------------------------------------------------------------------


void __fastcall TFLogin::RememberMe(TObject *Sender, TCloseAction &Action)
{
    //Provjera remember me funkcije i kod za pamcenje podataka
	if(!CBRememberMe->Checked){
		TRegistry *Registry = new TRegistry;
		Registry->RootKey = HKEY_CURRENT_USER;
		AnsiString KEY = "SOFTWARE\\RememberMe";

		if(Registry->KeyExists(KEY))
			Registry->DeleteKey(KEY);
		delete Registry;

		KeyDeleted = true;
	}
	else{
	   if(KeyDeleted) return;
		TRegistry *Registry = new TRegistry;
		Registry->RootKey = HKEY_CURRENT_USER;
		AnsiString KEY = "SOFTWARE\\RememberMe";

		Registry->CreateKey(KEY);
		if(Registry->OpenKey(KEY, true)){
			Registry->WriteString("Username", EUsernameLogin->Text);
			Registry->WriteString("Password", EPasswordLogin->Text);
			Registry->WriteBool("RememberMe", CBRememberMe->Checked);
			Registry->CloseKey();
		}
		delete Registry;
	}
}
//---------------------------------------------------------------------------

