﻿//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFRegister : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EUsernameInput;
	TLabel *Label2;
	TEdit *EPasswordInput;
	TButton *BtnRegister;
	void __fastcall RegisterUser(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFRegister(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRegister *FRegister;
//---------------------------------------------------------------------------
#endif
