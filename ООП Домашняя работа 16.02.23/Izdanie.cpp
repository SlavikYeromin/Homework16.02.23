#include "Izdanie.h"
#include"PublicationException.h"
#include"BookException.h"
#include"EditionYearException.h"

Izdanie::Izdanie()
{
    nazvanie = "Undefined";
    author = "Undefined";
    god_izdaniya = 0;
}

Izdanie::Izdanie(string nazvanie, string author, int god_izdaniya)
{
    if (nazvanie == "")
    {
        throw new BookException(nazvanie);
    }
    else if (author == "")
    {
        throw new BookException(author);
    }
    else if (god_izdaniya <= 0 )
    {
        string s = std::to_string(god_izdaniya);
        throw new EditionYearException(s);
    }
    else
    {
        this->nazvanie = nazvanie;
        this->author = author;
        this->god_izdaniya = god_izdaniya;
    }
}

void Izdanie::setNazvanie(string nazvanie)
{
    if (nazvanie == "")
    {
        throw BookException(nazvanie);
    }
    else
    {
        this->nazvanie = nazvanie;
    }   
}

string Izdanie::getNazvanie() const
{
    return nazvanie;
}

void Izdanie::setAuthor(string author)
{
    if (author == "")
    {
        throw BookException(author);
    }
    else
    {
        this->author = author;
    }  
}

string Izdanie::getAuthor() const
{
    return author;
}

void Izdanie::setGodIzdaniya(int god_izdaniya)
{
    if (god_izdaniya <= 0)
    {
        string s = std::to_string(god_izdaniya);
        throw EditionYearException(s);
    }
    else
    {
        this->god_izdaniya = god_izdaniya;
    }   
}

int Izdanie::getGodIzdaniya() const
{
    return god_izdaniya;
}
