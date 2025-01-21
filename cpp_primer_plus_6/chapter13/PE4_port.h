#ifndef PE4_PORT_H_
#define PE4_PORT_H_

#include <iostream>

class Port
{
private:
    char *brand;
    char style[20]; // i.e.,tawny,ruby,vintage,none
    int bottlesnum;

public:
    Port(const char *br = "none", const char *st = "none", int b = 0);
    Port(const Port &p);
    virtual ~Port();
    Port &operator=(const Port &p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BottleCount() const { return bottlesnum; }
    virtual void show() const;
    friend std::ostream &operator<<(std::ostream &os, const Port &p);
};

class VintagePort : public Port
{
private:
    char *nickname;
    int year;

public:
    VintagePort();
    VintagePort(const char *br, int b, const char *nn, int y);
    VintagePort(const VintagePort &vp);
    virtual ~VintagePort();
    VintagePort &operator=(const VintagePort &vp);
    virtual void show() const;
    friend std::ostream &operator<<(std::ostream &os, const VintagePort &p);
};
#endif