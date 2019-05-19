#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
#include "String.h"

int main() {
/*
	String s1;
	cout << "s1 ="; 
	cin >> s1;
	String s2(s1);
	String s3;
	s3 = s1;
	s1 = s1;

	String s4 = s1 + s3;

	cout << "s1 =" << s1 << endl;
	cout << "s2 =" << s2 << endl;
	cout << "s3 =" << s3 << endl;
	cout << "s4 =" << s4 << endl;

	*/


	list<String> s;
	list<String>::iterator iter1;
	char ch = 'y';

	do {
		String s1;
		cout << "s1 enter string: ";
		cin >> s1;
		s.push_back(s1);


		cout << "enter yes or no (y/n):";
		cin >> ch;
	} while (ch == 'y');

	//sort(s.begin(), s.end());

	
	cout << endl;
	iter1 = s.begin();
	while (iter1 != s.end())
	{
		cout << (*iter1++) << endl;
	}

	
	getchar();
	getchar();
	return 0;
}