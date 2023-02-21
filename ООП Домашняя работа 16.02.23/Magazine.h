#pragma once
#include "Izdanie.h"
#include<vector>
#include<algorithm>

class Magazine:public Izdanie
{
protected:
	vector<string> statya;
public:
	Magazine();
	Magazine(string nazvanie, string author, int god_izdaniya, string statia);

	string getStatya(int y)const;
	void addStatya(string q);

	void show()const override;

};

