#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include "String.h"


int main() {
	//проверка работы класса.
	/*
	String s1;
	cout << "s1 ="; 
	cin >> s1;
	String s2(s1); //копирование
	String s3;
	s3 = s1;	// присваивание
	s1 = s1;	// сам на себя

	String s4 = s1 + s3; // перегрузка + дружественная функция.

	cout << "s1 =" << s1 << endl;
	cout << "s2 =" << s2 << endl;
	cout << "s3 =" << s3 << endl;
	cout << "s4 =" << s4 << endl;
	*/


	vector<String> s;
	vector<String>::iterator iter1; 

	//проверка работы с вектором и сортировка 
	/*	
	String s1 = "bardo";
	String s2 = "ariangle";
	String s3 = "hello";
	String s4 = "aartino";
	String s5 = "bardo";

	s.push_back(s1);
	s.push_back(s2);
	s.push_back(s3);
	s.push_back(s4);
	s.push_back(s5);

	sort(s.begin(), s.end());	// в прямом
	sort(s.begin(), s.end(), greater<String>()); // в обратном
	*/
	

	
	//ввод и предложений и сортировка
	//в потоке остается '\n'. смотри перегрузку входного потока. >>
	char ch = 'y';
	do {
		String s1;
		cout << "s1 enter string: ";
		cin >> s1;
		s.push_back(s1);


		cout << "enter yes or no (y/n):";
		cin >> ch;
	} while (ch == 'y');
	//------------------------------------------

	sort(s.begin(), s.end());

	//-------------------------------------------
	cout << endl;
	iter1 = s.begin();
	while (iter1 != s.end())
	{
		cout << (*iter1++) << endl;
	}

	cout << endl;

	getchar();
	getchar();
	//end;
	return 0;
}
//----------------------------------------

