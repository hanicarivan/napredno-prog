﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RegisterUnit.h"
#include "dm1.h"
#include "LoginUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFRegister *FRegister;
//---------------------------------------------------------------------------
__fastcall TFRegister::TFRegister(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::RegisterUser(TObject *Sender)
{
	// provjera je li username zauzet
	// sakriti unos passowrda - odraditi enkripciju passworda - SHA 256
	TLocateOptions Opts;
	Opts.Clear();

	if(DMUsers->TUsers->Locate("username",EUsernameInput->Text,Opts)== true) {

		Application->MessageBox(L"Username već postoji",L"Greška",MB_OK|MB_ICONWARNING);
	} else {
		DMUsers->TUsers->Append();
		DMUsers->TUsers->FieldByName("username")->AsString = EUsernameInput->Text;
		DMUsers->TUsers->FieldByName("password")->AsString = EPasswordInput->Text;
		DMUsers->TUsers->Post();
		Application->MessageBox(L"Račun je uspješno kreiran!",L"Uspjeh!",MB_OK|MB_ICONINFORMATION);
		FRegister->Close();
		FLogin->EUsernameLogin->Text =  EUsernameInput->Text;
	}
}
//---------------------------------------------------------------------------
