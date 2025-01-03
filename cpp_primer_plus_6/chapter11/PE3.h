#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
namespace mycomplex
{

    class complex
    {

    private:
        double real_;
        double imag_;

    public:
        ~complex();
        complex(double a = 0, double b = 0);

        friend complex operator+(const complex &a, const complex &b);
        friend complex operator-(const complex &a, const complex &b);
        friend complex operator*(const complex &a, const complex &b);
        friend complex operator*(const complex &b, double);
        friend complex operator*(double, const complex &b);
        friend complex operator~(const complex &a);

        friend std::ostream &operator<<(std::ostream &os, const complex &);
        friend std::istream &operator>>(std::istream &ist, complex &);
    };
}
#endif