//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "LoginUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFMain::LogOut(TObject *Sender)
{
	FMain->Close();
	FLogin->Show();
	// isprazniti login nakon zatvaranja Logina...

    //provjera checkboxa remember me radi ispraznjivanja login forme
	if(!(FLogin->CBRememberMe->Checked)){
		FLogin->EUsernameLogin->Text = "";
		FLogin->EPasswordLogin->Text = "";
	}
}
//---------------------------------------------------------------------------
