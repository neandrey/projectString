//#include <iostream>
//using namespace std;
#include <iomanip>
#include <iterator>
#include <cstring>
#include <limits>
#include "String.h"

char * String::getLine(istream& input)
{
	String::CINLIM;
	char* buffer = new char[CINLIM];
	char* currentPosition = buffer;
	size_t maximumLength = CINLIM;
	size_t length = 0;
	int character;

	while (1)
	{
		character = input.get();
		if (character == '\n') {
			break;
		}
			
		if (++length >= maximumLength)
		{
			char* newBuffer = new char[maximumLength += CINLIM];
			strcpy(newBuffer, buffer);
			currentPosition = newBuffer + (currentPosition - buffer);
			buffer = newBuffer;
		}
		*currentPosition++ = character;
	}
	*currentPosition = '\0';
	
	return buffer;
}
//----------------------------------------------
String::String() : length(0) {
	ptrStr = new char[length + 1];
	ptrStr[0] = '\0';
}
//-----------------------------------------
String::String(const char* s) {
	length = strlen(s);
	ptrStr = new char[length + 1];
	strcpy(ptrStr, s);
}
//---------------------------------------------
String::String(const String& copy)
{
	//cout << "constructor_copy_work" << endl;
	length = copy.length;
	ptrStr = new char[strlen(copy.ptrStr) + 1];
	strcpy(ptrStr, copy.ptrStr);
}
//--------------------------------------------------
String::~String() {
	//cout << "Destructor_work" << ptrStr << endl;
	delete[] ptrStr;
 }
//-------------------------------------------------
String & String::operator=(const String & str)
{
	//cout << "operator = " << endl;
	if (&str == this)
		return *this;
	delete[] ptrStr;
	length = str.length;
	ptrStr = new char[strlen(str.ptrStr) + 1];
	strcpy(ptrStr, str.ptrStr);	
	return *this;
}
//--------------------------------------------------
void String::display() const {
	cout << ptrStr << endl;
	
}
//---------------------------------------------------
String::String(const char* s, int l) {
	length = l;
	ptrStr = new char[strlen(s) + 1];
	strcpy(ptrStr, s);
}
//-------------------------------------------------------
String operator+(String & s1, String & s2)
{
	size_t newLength = s1.length + s2.length;
	char* tempPtr = new char[newLength];

	strcpy(tempPtr, s1.ptrStr);
	strcat(tempPtr, s2.ptrStr);

	return String(tempPtr, newLength);
}
//--------------------------------------------------------
ostream & operator<<(ostream &output, const String &s)
{
	output << s.ptrStr;
	return output;
}
//---------------------------------------------------------
istream & operator >> (istream &input, String &s)
{
	//данное решение не помогло.
	//input.clear();
	//input.ignore(numeric_limits<streamsize>::max(), '\n');
	//поэтому пока просто экранирую первый символ.
	//думаю надо смотреть потоковые буфера.
	//короче здесь я не знаю.
	
	input.ignore();
	s = s.getLine(input);
	return input;
}
bool operator>(const String & s1, const String & s2)
{
	int h = strcmp(s1.ptrStr, s2.ptrStr);
	if (h > 0)
		return true;
	if (h < 0)
		return false;
}
//------------------------------------------------------
bool operator<(const String & s1, const String &s2)
{
	int h = strcmp(s1.ptrStr, s2.ptrStr);
	if (h < 0)
		return true;
	if (h > 0)
		return false;
}
//------------------------------------------------------------
