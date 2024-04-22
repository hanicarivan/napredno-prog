//---------------------------------------------------------------------------

#ifndef SettingsUnitH
#define SettingsUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TFSettings : public TForm
{
__published:	// IDE-managed Components
	TFontDialog *FontDialog1;
	TButton *BtnChangeFont;
	void __fastcall ChangeFontFun(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFSettings(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFSettings *FSettings;
//---------------------------------------------------------------------------
#endif
