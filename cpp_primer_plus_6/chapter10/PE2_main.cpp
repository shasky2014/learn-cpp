#include <iostream>
#include <string>
#include <cstring>
#include "PE2_Person.h"
int main(int argc, char const *argv[])
{
    Person one;
    Person tow("Smythock");
    Person three("Smythock", "John");
    one.show();
    one.formalShow();
    tow.show();
    tow.formalShow();
    three.show();
    three.formalShow();

    Person four(tow);
    four.show();
    four.formalShow();
    one = three;
    one.show();
    one.formalShow();
    return 0;
}
