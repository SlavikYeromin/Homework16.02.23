#include "EditionYearException.h"

EditionYearException::EditionYearException()
{
}

EditionYearException::EditionYearException(string name)
{
    this->name = name;
}

string EditionYearException::Message() const
{
    return "���������� ������� ������� - ������ ������������ ��� �������";
}
