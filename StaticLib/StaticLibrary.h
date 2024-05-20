//---------------------------------------------------------------------------
#include <vcl.h>
#ifndef StaticLibraryH
#define StaticLibraryH
//---------------------------------------------------------------------------
#endif

char getRandomChar();
UnicodeString getLanguage();
int getConfirmationKey();
class PasswordHashing {
public:
    UnicodeString Username;
    UnicodeString Password;

	PasswordHashing(UnicodeString U, UnicodeString P);
	UnicodeString HashLoginPassword(int i);
	UnicodeString HashRegisterPassword(char i);
    UnicodeString HashKey(UnicodeString key);
};