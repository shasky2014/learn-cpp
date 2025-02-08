#include <iostream>
#include <string>
#include <valarray>

#include "PL2_student.h"
std::ostream &Student::arr_out(std::ostream &os) const
{
    int len = ArrayDb::size();
    for (int i = 0; i < len; ++i)
    {
        os << (*this)[i];
        if (i < len - 1)
            os << ", ";
    }
    return os;
}

std::istream &operator>>(std::istream &ist, Student &stu)
{
    std::cout << "Enter student name:\n";
    getline(ist, (std::string &)stu);
    std::cout << "Enter student score number: ";
    int n = stu.size();
    std::cout << "and scores:\n";
    for (int i = 0; i < n; ++i)
    {
        ist >> stu.operator[](i);
    }
    return ist;
}
std::istream &getline(std::istream &ist, Student &stu)
{
    std::cout << "Enter student name:\n";
    getline(ist, (std::string &)stu);
    std::cout << "Enter student score number: ";
    int n = stu.size();
    std::cout << "and scores:\n";
    for (int i = 0; i < n; ++i)
    {
        ist >> stu.operator[](i);
    }
    return ist;
}

std::ostream &operator<<(std::ostream &os, const Student &stu)
{
    os << "Student[" << &stu
       << "]{name=" << (std::string &)stu
       << ",scores=[";
    stu.arr_out(os) << "]}";
    return os;
}
