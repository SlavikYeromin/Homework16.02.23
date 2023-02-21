#include<iostream>
#include"Book.h"
#include"Izdanie.h"
#include"Magazine.h"
#include"Library.h"
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

	cout << "======================" << endl;

	Library qq;
	
	qq.addSmth(new Book("qqqq","wwww",1015,"1213"));

	qq.addSmth(new Book("eee", "zzzz", 909, "qweasdasczx"));

	qq.show_all();

	qq.deleteSmth(1);

	qq.show_all();

	


	system("pause");
	return 0;
}