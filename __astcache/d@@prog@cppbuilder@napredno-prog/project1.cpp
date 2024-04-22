//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("RegisterUnit.cpp", FRegister);
USEFORM("LoginUnit.cpp", FLogin);
USEFORM("dm1.cpp", DMUsers); /* TDataModule: File Type */
USEFORM("MainUnit.cpp", FMain);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFLogin), &FLogin);
		Application->CreateForm(__classid(TDMUsers), &DMUsers);
		Application->CreateForm(__classid(TFRegister), &FRegister);
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
