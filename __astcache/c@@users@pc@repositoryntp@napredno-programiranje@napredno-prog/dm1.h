//---------------------------------------------------------------------------

#ifndef dm1H
#define dm1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDMUsers : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOTable *TUsers;
	TDataSource *DataSource1;
private:	// User declarations
public:		// User declarations
	__fastcall TDMUsers(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDMUsers *DMUsers;
//---------------------------------------------------------------------------
#endif
