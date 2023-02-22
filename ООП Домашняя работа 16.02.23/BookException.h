#pragma once
#include "PublicationException.h"

class BookException:public PublicationException
{
public:
	BookException();
	BookException(string name);

	string Message()const override;
};

