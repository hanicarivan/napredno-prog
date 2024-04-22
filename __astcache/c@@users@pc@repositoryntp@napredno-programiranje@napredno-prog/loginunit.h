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
	TLabel *Label1;
	TEdit *EUsernameLogin;
	TEdit *EPasswordLogin;
	TLabel *Label2;
	TButton *BtnLogin;
	TButton *BtnRegister;
	TCheckBox *CBRememberMe;
	void __fastcall OpenRegisterForm(TObject *Sender);
	void __fastcall OpenMainForm(TObject *Sender);
	void __fastcall RememberMe(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFLogin *FLogin;
//---------------------------------------------------------------------------
#endif
