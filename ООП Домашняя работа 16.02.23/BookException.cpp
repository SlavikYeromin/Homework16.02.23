#include "BookException.h"

BookException::BookException()
{
}

BookException::BookException(string name)
{
    this->name = name;
}

string BookException::Message() const
{
    return "Book" + name + " has wrong name";
}
