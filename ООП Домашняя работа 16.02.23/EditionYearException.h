#pragma once
#include "PublicationException.h"

class EditionYearException:public PublicationException
{
public:
	EditionYearException();
	EditionYearException(string name);

	string Message()const override;
};

