#include <cmath>
#include "PE2.h"
namespace mytime
{
    using std::atan;
    using std::cos;
    using std::cout;
    using std::endl;
    using std::pow;
    using std::round;
    using std::sin;
    using std::sqrt;
    Time::~Time() {}
    Time::Time(int a, int b)
    {
        hour = a + b / 60;
        minute = b % 60;
    }
    void Time::addHour(int a)
    {
        hour = a + hour;
    }
    void Time::addMinute(int a)
    {
        hour = hour + (a + minute) / 60;
        minute = (a + minute) % 60;
    }
    void Time::reset(int a, int b)
    {
        hour = a + b / 60;
        minute = b % 60;
    }
    Time operator+(const Time &a, const Time &b)
    {
        return Time(b.hour + a.hour, b.minute + a.minute);
    }
    Time operator-(const Time &a, const Time &b)
    {
        int h = b.hour - a.hour;
        int m = b.minute - a.minute;
        if (m < 0)
        {
            m += 60;
            h--;
        }
        return Time(h, m);
    }
    Time operator*(const Time &t, double b)
    {
        return Time(t.hour * b, t.minute * b);
    }
    Time operator*(double b, const Time &t)
    {
        return Time(t.hour * b, t.minute * b);
    }

    std::ostream &
    operator<<(std::ostream &os, const Time &v)
    {
        os << v.hour << ":" << v.minute;
        return os;
    }
}