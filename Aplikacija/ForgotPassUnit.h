//---------------------------------------------------------------------------

#ifndef ForgotPassUnitH
#define ForgotPassUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFForgot : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnClose;
	TEdit *EUsername;
	TEdit *EPassword;
	TEdit *EConfirmation;
	TButton *BtnConfirm;
	TLabel *LUsername;
	TLabel *LPassword;
	TLabel *LConfirmation;
	void __fastcall BtnCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall BtnConfirmClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFForgot(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFForgot *FForgot;
//---------------------------------------------------------------------------
#endif
