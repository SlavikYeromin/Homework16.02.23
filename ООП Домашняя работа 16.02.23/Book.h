#pragma once
#include "Izdanie.h"
using namespace std;

class Book:public Izdanie
{
protected:
	string rezyme;
public:
	Book();
	Book(string nazvanie, string author, int god_izdaniya, string rezyme);

	void setRezyme(string rezyme);
	string getRezyme()const;

	void show()const override;

};

