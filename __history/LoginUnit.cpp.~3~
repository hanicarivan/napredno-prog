//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LoginUnit.h"
#include "dm1.h"
#include "RegisterUnit.h"
#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFLogin *FLogin;
//---------------------------------------------------------------------------
__fastcall TFLogin::TFLogin(TComponent* Owner)
	: TForm(Owner)
{
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

		 Hide();
		 FMain->ActiveUser->Caption =  FLogin->EUsernameLogin->Text;
		 FMain->ShowModal();
	} else {
		Application->MessageBox(L"Pogrešan username ili lozinka!!!",L"Greška",MB_OK|MB_ICONWARNING);
	}


}

//---------------------------------------------------------------------------

