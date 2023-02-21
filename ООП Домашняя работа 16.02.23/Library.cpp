#include "Library.h"

Library::Library()
{
    name = "Undefined";
}

Library::Library(string namee, Izdanie* obj)
{
}

void Library::setName(string namee)
{
    this->name = namee;
}

string Library::getName() const
{
    return name;
}

void Library::show_all() const
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << endl;
        cout << "#" << i + 1 << endl;
        array[i]->show();
    }
}

void Library::addSmth(Izdanie* obj)
{
    array.push_back(obj);
}

void Library::deleteSmth(int ind)
{
        if (ind <= array.size())
        {
            ind--;
            array.erase(array.begin() + ind);
        }
}

void Library::find_nazvanie(string j) const
{
    for (int i = 0; i < array.size(); i++)
    {
        if (j == array[i]->getNazvanie())
        {
            array[i]->show();
        }
    }
}

void Library::find_author(string j) const
{
    for (int i = 0; i < array.size(); i++)
    {
        if (j == array[i]->getAuthor())
        {
            array[i]->show();
        }
    }
}

void Library::find_god(int jj) const
{
    for (int i = 0; i < array.size(); i++)
    {
        if (jj == array[i]->getGodIzdaniya())
        {
            array[i]->show();
        }
    }
}
