//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnLogut;
	TButton *BtnSettings;
	TLabel *LCurrentDate;
	TLabel *LActiveUser;
	void __fastcall LogOut(TObject *Sender);
	void __fastcall OpenSettings(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif
