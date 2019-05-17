#include <iostream>
#include <list>
using namespace std;
#include "String.h"

int main() {

	String s1;
	cout << "s1 ="; 
	cin >> s1;
	String s2(s1);
	String s3;
	cout << "enter data: ";
	cin >> s3;
	//s1 = s3;
	s1 = s1;

	String s4 = s1 + s3;

	cout << "s1 =" << s1 << endl;
	cout << "s2 =" << s2 << endl;
	cout << "s3 =" << s3 << endl;
	cout << "s4 =" << s4 << endl;



	//list<String> s;

	
	getchar();
	return 0;
}