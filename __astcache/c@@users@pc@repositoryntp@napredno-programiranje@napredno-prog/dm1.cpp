//---------------------------------------------------------------------------


#pragma hdrstop

#include "dm1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDMUsers *DMUsers;
//---------------------------------------------------------------------------
__fastcall TDMUsers::TDMUsers(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
