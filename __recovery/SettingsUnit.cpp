//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SettingsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFSettings *FSettings;
//---------------------------------------------------------------------------
__fastcall TFSettings::TFSettings(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFSettings::ChangeFontFun(TObject *Sender)
{
    FontDialog1->Execute();
}
//---------------------------------------------------------------------------
