#include <iostream>
#include <string>
#include <valarray>

#include "PL1_student.h"
std::ostream &Student::arr_out(std::ostream &os) const
{
    int len = scores.size();
    for (int i = 0; i < len; ++i)
    {
        os << scores[i];
        if (i < len - 1)
            os << ", ";
    }
    return os;
}

std::istream &operator>>(std::istream &ist, Student &stu)
{
    std::cout << "Enter student name:\n";
    getline(ist, stu.name);
    std::cout << "Enter student score number: ";
    int n;
    ist >> n;
    std::cout << "and scores:\n";
    stu.scores = Student::ArrayDb(n);
    for (int i = 0; i < n; ++i)
    {
        ist >> stu.scores[i];
    }
    return ist;
}
std::istream &getline(std::istream &ist, Student &stu)
{
    std::cout << "Enter student name:\n";
    getline(ist, stu.name);
    std::cout << "Enter student score number: ";
    int n;
    ist >> n;
    std::cout << "and scores:\n";
    stu.scores = Student::ArrayDb(n);
    for (int i = 0; i < n; ++i)
    {
        ist >> stu.scores[i];
    }

    return ist;
}

std::ostream &operator<<(std::ostream &os, const Student &stu)
{
    os << "Student[" << &stu
       << "]{name=" << stu.name
       << ",scores=[";
    stu.arr_out(os) << "]}";
    return os;
}
