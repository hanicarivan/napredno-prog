//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include <Registry.hpp>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("RegisterUnit.cpp", FRegister);
USEFORM("SettingsUnit.cpp", FSettings);
USEFORM("AdminUnit.cpp", FAdmin);
USEFORM("dm1.cpp", DMUsers); /* TDataModule: File Type */
USEFORM("LoginUnit.cpp", FLogin);
USEFORM("MainUnit.cpp", FMain);
USEFORM("ForgotPassUnit.cpp", FForgot);
//---------------------------------------------------------------------------
bool isToggled;
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int) {
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFLogin), &FLogin);
		Application->CreateForm(__classid(TDMUsers), &DMUsers);
		Application->CreateForm(__classid(TFRegister), &FRegister);
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->CreateForm(__classid(TFSettings), &FSettings);
		Application->CreateForm(__classid(TFAdmin), &FAdmin);
		Application->CreateForm(__classid(TFForgot), &FForgot);
		TIniFile* ini;
		ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");
		isToggled = ini->ReadBool("Settings","Toggled", false);
		delete ini;
		if(isToggled) {
			 TStyleManager::TrySetStyle("Tablet Dark");
		}  else {
			TStyleManager::TrySetStyle("Emerald Light Slate");
		}
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