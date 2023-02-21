#pragma once
#include"Izdanie.h"
#include"Book.h"
#include"Magazine.h"

class Library
{
protected:
	string name;
	vector<Izdanie*>array;
public:
	Library();
	Library(string namee,Izdanie* obj);

	void setName(string namee);
	string getName()const;

	void show_all()const;

	void addSmth(Izdanie* obj);

	void deleteSmth(int ind);

	void find_nazvanie(string j)const;
	void find_author(string j)const;
	void find_god(int jj)const;

};

