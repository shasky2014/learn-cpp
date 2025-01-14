#include <iostream>
#include <cstring>
#include "PE1_cow.h"
using namespace std;

cow::cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

cow::cow(const char *nm, const char *ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}
cow::cow(const cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}
cow::~cow()
{
    delete[] hobby;
    cout << "cow[" << this << "] delete\n";
}

cow &cow::operator=(const cow &c)
{
    if (this == &c)
        return *this;
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}
void cow::show() const
{
    cout << "cow[" << this << "]={Name: " << name
         << ",hobby: " << hobby
         << ",weight: " << weight << "}\n";
}
