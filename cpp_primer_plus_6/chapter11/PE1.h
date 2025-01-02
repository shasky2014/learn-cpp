#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace vector
{

    class Vector
    {
    public:
        enum Mode
        {
            RECT,
            POL
        };

    private:
        double x_;
        double y_;
        void set_xy(double a, double b);
        Mode mode_;
        // void set_distance();

    public:
        Vector(double a = 0, double b = 0, Mode m = RECT);
        void reset(double a = 0, double b = 0, Mode m = RECT);
        ~Vector();
        double x() const { return x_; }
        double y() const { return y_; }
        double d() const;
        double a() const;
        void POL_mode() { mode_ = POL; }
        void RECT_mode() { mode_ = RECT; }
        Vector operator+(const Vector &) const;
        Vector operator-(const Vector &) const;
        Vector operator*(double) const;
        Vector operator-() const;
        friend Vector operator*(double, const Vector &);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}
#endif