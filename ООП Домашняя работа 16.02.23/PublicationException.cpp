#include "PublicationException.h"

PublicationException::PublicationException()
{
	name = "Undefined";
}

PublicationException::PublicationException(string name)
{
	this->name = name;
}
