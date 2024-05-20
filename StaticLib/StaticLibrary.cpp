//---------------------------------------------------------------------------

#pragma hdrstop

#include "StaticLibrary.h"
#include <System.math.hpp>
#include <Registry.hpp>
#include <System.Hash.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
char getRandomChar(){
	return char(RandomRange(97, 123));
}

int getConfirmationKey(){
	return RandomRange(10000000, 99999999);
}

UnicodeString getLanguage(){
	TIniFile* ini;
		ini = new TIniFile(GetCurrentDir() + "\\STARTUP.INI");
		UnicodeString language = ini->ReadString("Settings","Language","English");
	delete ini;
	return language;
}

PasswordHashing::PasswordHashing(UnicodeString U, UnicodeString P) : Username(U), Password(P) {}


UnicodeString PasswordHashing::HashLoginPassword(int i) {
	return THashSHA2::GetHashString(THashMD5::GetHashString(this->Username) + this->Password + char(i), THashSHA2::TSHA2Version::SHA256);
}
UnicodeString PasswordHashing::HashRegisterPassword(char i) {
	return THashSHA2::GetHashString(THashMD5::GetHashString(this->Username) + this->Password + i, THashSHA2::TSHA2Version::SHA256);
}
UnicodeString PasswordHashing::HashKey(UnicodeString key) {
	UnicodeString hashedKey = THashSHA2::GetHashString(key, THashSHA2::TSHA2Version::SHA256);
	return THashSHA2::GetHashString(hashedKey, THashSHA2::TSHA2Version::SHA256);
}