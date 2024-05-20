#include <vcl.h>
#pragma hdrstop

#include "SettingsUnit.h"
#include "LoginUnit.h"
#include "RegisterUnit.h"
#include "Translation.h"
#include "Project1.cpp"
#include "StaticLibrary.h"
#include "MainUnit.h"
#include <Vcl.Themes.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFSettings *FSettings;
//---------------------------------------------------------------------------
__fastcall TFSettings::TFSettings(TComponent* Owner)
	: TForm(Owner)
{
	TIniFile* ini;
	ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");
	CBDarkMode->Checked = ini->ReadBool("Settings","Toggled", isToggled);
	CBDateFormat->Text = ini->ReadString("Settings", "DateFormat", "mm/dd/yyyy");
	CBLanguage->Text = getLanguage();
	if(CBLanguage->Text == "Hrvatski"){
		CBDarkMode->Caption = "Tamni način rada";
		TLanguage->Caption = "Jezik";
		BtnApplySettings->Caption = "Primjeni";
		BtnCloseSettings->Caption = "Zatvori";
	}
	delete ini;
}
//---------------------------------------------------------------------------
void __fastcall TFSettings::ApplySettings(TObject *Sender)
{
	isToggled = CBDarkMode->Checked;
	if (isToggled)	{
		TStyleManager::TrySetStyle("Tablet Dark");
	}
	else {
		TStyleManager::TrySetStyle("Emerald Light Slate");
	}
	TIniFile* ini;
	ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");
	ini->WriteBool("Settings","Toggled", isToggled);
	ini->WriteString("Settings","Language",CBLanguage->Text);
	ini->WriteString("Settings", "DateFormat", CBDateFormat->Text);
	delete ini;
    translation["LUsername"] = {
		{
			{"English","Username:"},
			{"Hrvatski","Korisničko ime:"}
		}
	};
	translation["LPassword"] = {
		{
			{"English","Password:"},
			{"Hrvatski","Lozinka:"}
		}
	};
	translation["BtnLogin"] = {
		{
			{"English","Login"},
			{"Hrvatski","Prijavi se"}
		}
	};
    translation["CBRememberMe"] = {
		{
			{"English","Remember me"},
			{"Hrvatski","Zapamti me"}
		}
	};
	translation["BtnRegister"] = {
		{
			{"English","Register"},
			{"Hrvatski","Registriraj me"}
		}
	};
    translation["BtnRegister"] = {
		{
			{"English","Register"},
			{"Hrvatski","Registriraj me"}
		}
	};
	translation["BtnCloseRegister"] = {
		{
			{"English","Cancel"},
			{"Hrvatski","Poništi"}
		}
	};
	translation["CBDarkMode"] = {
		{
			{"English","Dark mode"},
			{"Hrvatski","Tamni način rada"}
		}
	};
	translation["TLanguage"] = {
		{
			{"English","Language:"},
			{"Hrvatski","Jezik:"}
		}
	};
	translation["BtnApplySettings"] = {
		{
			{"English","Apply"},
			{"Hrvatski","Primjeni"}
		}
	};
	translation["BtnCloseSettings"] = {
		{
			{"English","Close"},
			{"Hrvatski","Zatvori"}
		}
	};
	translateForm(this, CBLanguage->Text, translation);
	translateForm(FRegister, CBLanguage->Text, translation);
	translateForm(FLogin, CBLanguage->Text, translation);
	UnicodeString DateFormat = CBDateFormat->Text;
	TDateTime currentDate = Date();
	FMain->LCurrentDate->Caption = FormatDateTime(DateFormat, currentDate);
}
//---------------------------------------------------------------------------

void __fastcall TFSettings::BtnCloseSettingsClick(TObject *Sender)
{
	FSettings->Hide();
	FSettings->Close();
}
//---------------------------------------------------------------------------

