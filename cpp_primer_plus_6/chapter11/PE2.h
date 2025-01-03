#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
namespace mytime
{

    class Time
    {

    private:
        int hour;
        int minute;

    public:
        Time(int a = 0, int b = 0);
        ~Time();
        void addHour(int a);
        void addMinute(int b);
        void reset(int a = 0, int b = 0);

        friend Time operator+(const Time &a, const Time &b);
        friend Time operator-(const Time &a, const Time &b);
        friend Time operator*(const Time &b, double);
        friend Time operator*(double, const Time &b);
        friend std::ostream &operator<<(std::ostream &os, const Time &v);
    };
}
#endif