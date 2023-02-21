#include "Book.h"

Book::Book()
{
    rezyme = "Undefined";
}

Book::Book(string nazvanie, string author, int god_izdaniya, string rezyme):Izdanie(nazvanie,author,god_izdaniya)
{
    this->rezyme = rezyme;
}

void Book::setRezyme(string rezyme)
{
    this->rezyme = rezyme;
}

string Book::getRezyme() const
{
    return rezyme;
}

void Book::show() const
{
    cout << "Название: " << nazvanie << endl;
    cout << "Автор: " << author << endl;
    cout << "Год издания: " << god_izdaniya << endl;
    cout << "Резюме: " << rezyme << endl;
}
