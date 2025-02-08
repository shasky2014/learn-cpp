#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

class Student
{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : name("Null Student"), scores() {}
    explicit Student(const std::string &s) : name(s), scores() {}
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string &s, int n) : name(s), scores(n) {}
    Student(const std::string &s, const ArrayDb &n) : name(s), scores(n) {}
    Student(const char *s, const double *pd, int n) : name(s), scores(pd, n) {}
    ~Student() {}

    double Average() const { return scores.size() > 0 ? scores.sum() / scores.size() : 0; }
    const std::string &Name() const { return name; }
    double &operator[](int i) { return scores[i]; }
    double operator[](int i) const { return scores[i]; }

    friend std::istream &operator>>(std::istream &ist, Student &stu);
    friend std::istream &getline(std::istream &ist, Student &stu);
    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};
#endif