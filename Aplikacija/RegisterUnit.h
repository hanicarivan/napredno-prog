//---------------------------------------------------------------------------

#ifndef RegisterUnitH
#define RegisterUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFRegister : public TForm
{
__published:	// IDE-managed Components
	TLabel *LUsername;
	TEdit *EUsernameInput;
	TLabel *LPassword;
	TEdit *EPasswordInput;
	TButton *BtnRegister;
	TButton *BtnCloseRegister;
	void __fastcall RegisterUser(TObject *Sender);
	void __fastcall BtnCloseRegisterClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFRegister(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRegister *FRegister;
//---------------------------------------------------------------------------
#endif
