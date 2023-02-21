#include<iostream>
#include"Book.h"
#include"Izdanie.h"
#include"Magazine.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");

	Magazine a("C++","Straystryp",2000,"vector");
	
	a.show();

	cout << endl;

	a.addStatya("p");
	a.addStatya("w");
	a.addStatya("e");
	
	a.show();

	cout << endl;
	
	cout << a.getStatya(3);
	

	cout << endl;

	a.show();


	system("pause");
	return 0;
}