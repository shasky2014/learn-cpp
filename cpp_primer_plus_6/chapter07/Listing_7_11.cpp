#include <base.h>
struct travel_time
{
    int hour;
    int minute;
};

travel_time sum_time(travel_time t1, travel_time t2);
void show_time(travel_time t1);
int main()
{
    travel_time t1 = {5, 45};
    travel_time t2 = {3, 25};
    cout << "t1=";
    show_time(t1);
    cout << "t2=";
    show_time(t2);
    travel_time t3 = sum_time(t1, t2);
    cout << "t3=";
    show_time(t3);

    return 0;
}

travel_time sum_time(travel_time t1, travel_time t2)
{
    travel_time t_out;
    t_out.hour = t1.hour + t2.hour;
    t_out.minute = t1.minute + t2.minute;
    if (t_out.minute >= 60)
    {
        t_out.hour += t_out.minute / 60;
        t_out.minute = t_out.minute % 60;
    }
    return t_out;
}

void show_time(travel_time t1)
{
    cout << t1.hour << "h " << t1.minute << "m" << endl;
    return;
}
