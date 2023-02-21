#include "Magazine.h"

Magazine::Magazine()
{

}

Magazine::Magazine(string nazvanie, string author, int god_izdaniya, string statia):Izdanie(nazvanie, author, god_izdaniya)
{
	statya.push_back(statia);
}

string Magazine::getStatya(int y) const
{
	return statya[y];
}

void Magazine::addStatya(string q)
{
	statya.push_back(q);
}

void Magazine::show() const
{
	cout << "Название: " << nazvanie << endl;
	cout << "Автор: " << author << endl;
	cout << "Год издания: " << god_izdaniya << endl;
	cout << "Статья: ";
	for (int i = 0; i < statya.size(); i++)
	{
		if (i == statya.size() - 1)
		{
			cout << statya[i] << " " << endl;
		}
		else
		{
			cout << statya[i] << "     ";
		}
	}
}
