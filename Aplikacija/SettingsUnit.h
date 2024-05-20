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
	TButton *BtnApplySettings;
	TLabel *TLanguage;
	TComboBox *CBLanguage;
	TCheckBox *CBDarkMode;
	TButton *BtnCloseSettings;
	TLabel *LDateFormat;
	TComboBox *CBDateFormat;
	void __fastcall ApplySettings(TObject *Sender);
	void __fastcall BtnCloseSettingsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFSettings(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFSettings *FSettings;
//---------------------------------------------------------------------------
#endif
