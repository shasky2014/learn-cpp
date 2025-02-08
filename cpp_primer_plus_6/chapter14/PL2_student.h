#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student : private std::string, private std::valarray<double>
{
private:
    typedef std::valarray<double> ArrayDb;
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : std::string("Null Student"), ArrayDb() {}
    explicit Student(const std::string &s) : std::string(s), ArrayDb() {}
    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}
    Student(const std::string &s, int n) : std::string(s), ArrayDb(n) {}
    Student(const std::string &s, const ArrayDb &n) : std::string(s), ArrayDb(n) {}
    Student(const char *s, const double *pd, int n) : std::string(s), ArrayDb(pd, n) {}
    ~Student() {}

    double Average() const { return ArrayDb::size() > 0 ? ArrayDb::sum() / ArrayDb::size() : 0; }
    const std::string &Name() const { return (const std::string &)*this; }
    int size() const { return ArrayDb::size(); }
    double &operator[](int i) { return ArrayDb::operator[](i); }
    double operator[](int i) const { return ArrayDb::operator[](i); }

    friend std::istream &operator>>(std::istream &ist, Student &stu);
    friend std::istream &getline(std::istream &ist, Student &stu);
    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};
#endif