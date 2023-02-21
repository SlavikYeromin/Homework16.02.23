#include "Izdanie.h"

Izdanie::Izdanie()
{
    nazvanie = "Undefined";
    author = "Undefined";
    god_izdaniya = 0;
}

Izdanie::Izdanie(string nazvanie, string author, int god_izdaniya)
{
    this->nazvanie = nazvanie;
    this->author = author;
    this->god_izdaniya = god_izdaniya;
}

void Izdanie::setNazvanie(string nazvanie)
{
    this->nazvanie = nazvanie;
}

string Izdanie::getNazvanie() const
{
    return nazvanie;
}

void Izdanie::setAuthor(string author)
{
    this->author = author;
}

string Izdanie::getAuthor() const
{
    return author;
}

void Izdanie::setGodIzdaniya(int god_izdaniya)
{
    this->god_izdaniya = god_izdaniya;
}

int Izdanie::getGodIzdaniya() const
{
    return god_izdaniya;
}
