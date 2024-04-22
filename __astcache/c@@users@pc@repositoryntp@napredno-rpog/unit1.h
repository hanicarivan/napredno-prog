//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TLogin : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	void __fastcall OpenRegisterForm(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLogin *Login;
//---------------------------------------------------------------------------
#endif
