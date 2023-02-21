#pragma once
#include<string>
using namespace std;

class Izdanie
{
protected:
	string nazvanie;
	string author;
	int god_izdaniya;
public:
	Izdanie();
	Izdanie(string nazvanie, string author, int god_izdaniya);

	void setNazvanie(string nazvanie);
	string getNazvanie()const;
	void setAuthor(string author);
	string getAuthor()const;
	void setGodIzdaniya(int god_izdaniya);
	int getGodIzdaniya()const;

	virtual void show()const = 0;

};

