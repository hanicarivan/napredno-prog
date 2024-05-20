//---------------------------------------------------------------------------

#include <vcl.h>
#include <System.SysUtils.hpp>
#pragma hdrstop

#include "ForgotPassUnit.h"
#include "LoginUnit.h"
#include "dm1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFForgot *FForgot;
//---------------------------------------------------------------------------
__fastcall TFForgot::TFForgot(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFForgot::BtnCloseClick(TObject *Sender)
{
	FForgot->Hide();
	FForgot->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFForgot::FormClose(TObject *Sender, TCloseAction &Action)
{
	FLogin->ShowModal();
}
//---------------------------------------------------------------------------

int findConfirmationKey(int key) {
	for (int i = 100000000; i <= 999999999; i++) {  // inclusive of 99999999
        if (i == key) {
            return i;
        }
	}
    return -1;
}

void __fastcall TFForgot::BtnConfirmClick(TObject *Sender) {
    TLocateOptions Opts;
    Opts.Clear();
    Variant VAR[2];
    VAR[0] = Variant(EUsername->Text);
	VAR[1] = Variant(findConfirmationKey(StrToInt(EConfirmation->Text)));
	Variant LookupResults;
	if (DMUsers->TUsers->Locate("username;key", VarArrayOf(VAR, 1), Opts)){
		ShowMessage(1);
	} else {
		Application->MessageBox(L"Wrong Username or Confirmation key!", L"Error!", MB_OK | MB_ICONWARNING);
	}
}
//---------------------------------------------------------------------------

