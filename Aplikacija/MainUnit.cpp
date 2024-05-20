//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <Registry.hpp>
#include "MainUnit.h"
#include "LoginUnit.h"
#include "SettingsUnit.h"
#include <System.SysUtils.hpp> //za currentdate
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
	TIniFile* ini;
	ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");
	UnicodeString DateFormat = ini->ReadString("Settings", "DateFormat", "mm/dd/yyyy");
	delete ini;
	TDateTime currentDate = Date();
	LCurrentDate->Caption = FormatDateTime(DateFormat, currentDate);
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
void __fastcall TFMain::OpenSettings(TObject *Sender)
{
	FSettings->ShowModal();
}
//---------------------------------------------------------------------------


