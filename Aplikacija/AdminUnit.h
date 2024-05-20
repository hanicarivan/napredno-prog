//---------------------------------------------------------------------------

#ifndef AdminUnitH
#define AdminUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFAdmin : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnLogOut;
	void __fastcall BtnLogOutClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFAdmin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFAdmin *FAdmin;
//---------------------------------------------------------------------------
#endif
