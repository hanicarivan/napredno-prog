//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "dm1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLogin *Login;
//---------------------------------------------------------------------------
__fastcall TLogin::TLogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLogin::OpenRegisterForm(TObject *Sender)
{
		Hide();
		FRegister->ShowModal();
}
//---------------------------------------------------------------------------

