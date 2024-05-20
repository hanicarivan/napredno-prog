//---------------------------------------------------------------------------

#ifndef LoginUnitH
#define LoginUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFLogin : public TForm
{
__published:	// IDE-managed Components
	TLabel *LUsername;
	TEdit *EUsernameLogin;
	TEdit *EPasswordLogin;
	TLabel *LPassword;
	TButton *BtnLogin;
	TButton *BtnRegister;
	TCheckBox *CBRememberMe;
	TButton *BtnForgotPass;
	void __fastcall OpenRegisterForm(TObject *Sender);
	void __fastcall OpenMainForm(TObject *Sender);
	void __fastcall RememberMe(TObject *Sender, TCloseAction &Action);
	void __fastcall BtnForgotPassClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFLogin(TComponent* Owner);
    UnicodeString Language;
};
//---------------------------------------------------------------------------
extern PACKAGE TFLogin *FLogin;
//---------------------------------------------------------------------------
#endif
