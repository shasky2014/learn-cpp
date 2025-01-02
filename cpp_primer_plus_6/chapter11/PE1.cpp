#include <cmath>
#include "PE1.h"
namespace vector
{
    using std::atan;
    using std::cos;
    using std::cout;
    using std::endl;
    using std::pow;
    using std::round;
    using std::sin;
    using std::sqrt;
    const double RAD2DEG = 45.0 / atan(1.0);

    double Vector::a() const
    {
        double angle_;
        if (x_ == 0 && y_ == 0)
            angle_ = 0;
        else
        {
            angle_ = RAD2DEG * atan2(y_, x_);
        }
        return angle_;
    }
    double Vector::d() const
    {
        return sqrt(x_ * x_ + y_ * y_);
    }
    void Vector::set_xy(double a, double b)
    {
        x_ = a * cos(b / RAD2DEG);
        y_ = a * sin(b / RAD2DEG);
    }
    // Vector::Vector()
    // {
    //     mode_ = RECT;
    //     x_ = y_ = distance_ = angle_ = 0;
    // }
    Vector::~Vector() {}
    Vector::Vector(double a, double b, Mode m)
    {
        mode_ = m;
        if (m == RECT)
        {
            x_ = a;
            y_ = b;
        }
        else if (m == POL)
        {
            set_xy(a, b);
        }
        else
        {
            cout << "Incorrect mode entered. Mode set to RECT.\n";
            mode_ = RECT;
            x_ = y_ = 0;
        }
    }
    void Vector::reset(double a, double b, Mode m)
    {
        *this = Vector(a, b, m);
    }

    Vector Vector::operator+(const Vector &a) const
    {
        return Vector(x_ + a.x(), y_ + a.y());
    }
    Vector Vector::operator-(const Vector &a) const
    {
        return Vector(x_ - a.x(), y_ - a.y());
    }
    Vector Vector::operator*(double a) const
    {
        return Vector(x_ * a, y_ * a);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x_, -y_);
    }
    Vector operator*(double a, const Vector &v)
    {
        return Vector(v.x() * a, v.y() * a);
    }
}