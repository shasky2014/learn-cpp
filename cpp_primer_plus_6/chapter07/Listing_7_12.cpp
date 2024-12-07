#include <cmath>
#include <base.h>

struct rect
{
    double x;
    double y;
};
struct polar
{
    double distance;
    double angle;
};

void show_polar(const polar *);
polar rect_to_polar(const rect *);
int main()
{
    polar p = {80, 0.25};
    show_polar(&p);
    rect r = {30, 40};
    polar d2 = rect_to_polar(&r);
    show_polar(&d2);
    return 0;
}
void show_polar(const polar *d)
{
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << d->distance << " km" << endl;
    cout << "angle = " << d->angle * Rad_to_deg << "°" << endl;
}

polar rect_to_polar(const rect *r)
{
    polar p;
    p.distance = sqrt(r->x * r->x + r->y * r->y);
    p.angle = atan2(r->y, r->x);
    return p;
}
