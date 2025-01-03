#include <cmath>
#include "PE3.h"
namespace mycomplex
{
    using std::cout;
    using std::endl;
    complex::~complex() {}
    complex::complex(double a, double b)
    {
        real_ = a;
        imag_ = b;
    }

    complex operator+(const complex &a, const complex &b)
    {
        return complex(a.real_ + b.real_, a.imag_ + b.imag_);
    }
    complex operator-(const complex &a, const complex &b)
    {
        return complex(a.real_ - b.real_, a.imag_ - b.imag_);
    }
    complex operator*(const complex &a, const complex &b)
    {
        return complex(
            a.real_ * b.real_ - a.imag_ * b.imag_,
            a.real_ * b.imag_ + b.real_ * a.imag_);
    }
    complex operator*(const complex &a, double b)
    {
        return complex(a.real_ * b, a.imag_ * b);
    }
    complex operator*(double b, const complex &a)
    {
        return complex(a.real_ * b, a.imag_ * b);
    }
    complex operator~(const complex &a)
    {
        return complex(a.real_, -a.imag_);
    }

    std::ostream &operator<<(std::ostream &os, const complex &v)
    {
        // os <<"("<< v.real_<<"," <<v.imag_<<")";
        if (v.real_ == 0 && v.imag_ == 0)
            os << 0;
        else if (v.real_ == 0)
        {
            if (v.imag_ == 1)
                os << "i";
            else if (v.imag_ == -1)
                os << "-i";
            else
                os << v.imag_ << "i";
        }
        else if (v.real_ != 0)
        {
            os << v.real_;
            if (v.imag_ != 0)
            {
                if (v.imag_ == 1)
                    os << "+i";
                else if (v.imag_ == -1)
                    os << "-i";
                else if (v.imag_ != 1 && v.imag_ != -1)
                {
                    if (v.imag_ > 0)
                        os << "+" << v.imag_ << "i";
                    else
                        os << v.imag_ << "i";
                }
            }
        }
        return os;
    }
    std::istream &operator>>(std::istream &ist, complex &v)
    {
        cout << "real:";
        ist >> v.real_;
        cout << "imaginary:";
        ist >> v.imag_;
        return ist;
    }
}