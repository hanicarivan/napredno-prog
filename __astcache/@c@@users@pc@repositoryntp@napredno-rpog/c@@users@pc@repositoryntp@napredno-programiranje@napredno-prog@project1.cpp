//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("..\..\napredno-rpog\RegisterUnit.cpp", FRegister);
USEFORM("..\..\napredno-rpog\dm1.cpp", DMUsers); /* TDataModule: File Type */
USEFORM("..\..\napredno-rpog\LoginUnit.cpp", FLogin);
USEFORM("..\..\napredno-rpog\MainUnit.cpp", FMain);
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
