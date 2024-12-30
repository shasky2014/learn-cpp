#include <iostream>
#include <cstring>
#include "PE7_plorg.h"
Plorg::Plorg()
{
    strcpy(name_, "Plorga");
    CI_ = 50;
}

Plorg::~Plorg()
{
    std::cout << "Plorg[" << this << " ] is destructed\n";
}
Plorg::Plorg(const char *name, int ci)
{
    strcpy(name_, name);
    CI_ = ci;
}

void Plorg::show() const
{
    std::cout << "Plorg[" << this << " ]:{" << "name: " << name_ << ", CI: " << CI_ << "}\n";
}

void Plorg::update(int ci)
{
    CI_ = ci;
}
void Plorg::rename(char *name)
{
    strcpy(name_, name);
}
