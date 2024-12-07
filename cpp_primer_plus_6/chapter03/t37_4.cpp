#include <base.h>

/*
Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
 time in days, hours, minutes,and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour,and the number
of seconds in a minute.The output should look like this:

Enter the number of seconds: 31600000

31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */

void timeOfSeconds(long long seconds,
                   long &days, int &hours, int &minutes, int &last_seconds)
{
    const int SECONDS_IN_DAY = 86400;
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_MINUTE = 60;

    days = seconds / SECONDS_IN_DAY;
    hours = (seconds % SECONDS_IN_DAY) / SECONDS_IN_HOUR;
    minutes = (seconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
    last_seconds = seconds % SECONDS_IN_MINUTE;
}
int main()
{
    long long seconds;
    long days;

    int hours, minutes, last_seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    timeOfSeconds(seconds, days, hours, minutes, last_seconds);

    cout
        << seconds << " seconds = "
        << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, "
        << last_seconds << " seconds" << endl;
    return 0;
}