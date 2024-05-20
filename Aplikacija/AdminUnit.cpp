//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdminUnit.h"
#include "LoginUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAdmin *FAdmin;
//---------------------------------------------------------------------------
__fastcall TFAdmin::TFAdmin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFAdmin::BtnLogOutClick(TObject *Sender)
{
	FAdmin->Close();
	FLogin->Show();
	// isprazniti login nakon zatvaranja Logina...
    //provjera checkboxa remember me radi ispraznjivanja login forme
	if(!(FLogin->CBRememberMe->Checked)){
		FLogin->EUsernameLogin->Text = "";
		FLogin->EPasswordLogin->Text = "";
	}
}
//---------------------------------------------------------------------------
