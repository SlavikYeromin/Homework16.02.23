#pragma once
#include<string>
using std::string;

class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string name);

	virtual string Message()const = 0;
};

