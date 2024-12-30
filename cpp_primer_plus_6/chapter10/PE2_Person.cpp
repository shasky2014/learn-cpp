#include <iostream>
#include <string>
#include <cstring>
#include "PE2_Person.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const
{
    std::cout << "Person[" << this << "]=" << fname << " " << lname << std::endl;
}
void Person::formalShow() const
{
    std::cout << "Person[" << this << "]=" << lname << " " << fname << std::endl;
}
