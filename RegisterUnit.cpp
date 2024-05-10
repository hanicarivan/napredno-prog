﻿//---------------------------------------------------------------------------
#include <vcl.h>
#include <System.Hash.hpp>
#include <System.Math.hpp>
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
char getRandomChar(){
	return char(RandomRange(97, 123));
}

void __fastcall TFRegister::RegisterUser(TObject *Sender)
{
	// provjera je li username zauzet
	// sakriti unos passowrda - odraditi enkripciju passworda - SHA 256
	TLocateOptions Opts;
	Opts.Clear();
	if(DMUsers->TUsers->Locate("username",EUsernameInput->Text,Opts)== true) {
		Application->MessageBox(L"Username already taken!",L"Error!",MB_OK|MB_ICONWARNING);
	} else {
		DMUsers->TUsers->Append();
		DMUsers->TUsers->FieldByName("username")->AsString = EUsernameInput->Text;
		//Hashanje inputanog passworda
		UnicodeString HashedPassword = THashSHA2::GetHashString(THashMD5::GetHashString(EUsernameInput->Text) + EPasswordInput->Text + getRandomChar(), THashSHA2::TSHA2Version::SHA256);
		DMUsers->TUsers->FieldByName("password")->AsString = HashedPassword;
		DMUsers->TUsers->Post();
		Application->MessageBox(L"Account created successfully!",L"Success!",MB_OK|MB_ICONINFORMATION);
		FRegister->Close();
		FLogin->EUsernameLogin->Text =  EUsernameInput->Text;
	}
}
//---------------------------------------------------------------------------
