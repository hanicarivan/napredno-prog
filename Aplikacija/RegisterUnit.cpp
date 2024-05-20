﻿//---------------------------------------------------------------------------
#include <vcl.h>
#include <System.Hash.hpp>    // za hashanje
#include <System.Math.hpp>    // za RandomRange funkciju
#pragma hdrstop
#include "RegisterUnit.h"
#include "dm1.h"
#include "LoginUnit.h"
#include "Translation.h"
#include "StaticLibrary.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFRegister *FRegister;
//---------------------------------------------------------------------------
__fastcall TFRegister::TFRegister(TComponent* Owner)
	: TForm(Owner)
{
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
	translateForm(this, getLanguage(), translation);
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::RegisterUser(TObject *Sender)
{
	TLocateOptions Opts;
	Opts.Clear();
	if(DMUsers->TUsers->Locate("username",EUsernameInput->Text,Opts)) {
		Application->MessageBox(L"Username already taken!",L"Error!",MB_OK|MB_ICONWARNING);
	} else {
		DMUsers->TUsers->Append();
		DMUsers->TUsers->FieldByName("username")->AsString = EUsernameInput->Text;
		PasswordHashing RegisterHashing(EUsernameInput->Text, EPasswordInput->Text);
		UnicodeString HashedPassword = RegisterHashing.HashRegisterPassword(getRandomChar())	;
		DMUsers->TUsers->FieldByName("password")->AsString = HashedPassword;
		DMUsers->TUsers->FieldByName("admin")->AsInteger = 0;
		int Key = getConfirmationKey();
		String ConfirmationKey = IntToStr(Key);
		DMUsers->TUsers->FieldByName("key")->AsString = ConfirmationKey;
		DMUsers->TUsers->Post();
		String message = L"Account created successfully! Your confirmation key for resetting your password is: " + ConfirmationKey;
		Application->MessageBox(message.c_str(), L"Success!", MB_OK | MB_ICONINFORMATION);
		Hide();
		FRegister->Close();
		FLogin->EUsernameLogin->Text =  EUsernameInput->Text;
	}
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::BtnCloseRegisterClick(TObject *Sender)
{
	Hide();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFRegister::FormClose(TObject *Sender, TCloseAction &Action)
{
	FLogin->ShowModal();
}
//---------------------------------------------------------------------------