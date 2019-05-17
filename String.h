
#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class String
{
private:
	char* ptrStr;
	int length;
	char* getLine(istream&);
public:
	String();
	String(const char*);
	String(const char*, int);
	String(const String&);
	~String();
	String& operator=(const String&);
	void display() const;
	friend String operator+ (String&, String&);
	friend ostream &operator<< (ostream&, const String&);
	friend istream &operator >> (istream&, String&);

};

#endif // !STRING
