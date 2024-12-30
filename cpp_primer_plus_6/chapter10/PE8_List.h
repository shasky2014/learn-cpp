#ifndef STACK_H_
#define STACK_H_
#include <iostream>
namespace List_PE8
{
    static const int MAX_SIZE = 20;

    template <class T>
    class List
    {
    private:
        T l_[MAX_SIZE];
        int n_;

    public:
        List();
        ~List();
        List(T items[], int n);

        bool isempty();
        bool isfull();

        void add(const T &);

        void show() const;
        void visit(void (*pf)(T &));
    };
}

namespace test_pe8
{
    class Test
    {
    private:
        double h;
        double w;
        double area;
        void calArea() { area = h * w; }

    public:
        Test(double a = 0, double b = 0);
        void show() const;
        void add(double a, double b);

        friend std::ostream &operator<<(std::ostream &os, const Test &t)
        {
            os << "Height: " << t.h << ", Width: " << t.w << ", Area: " << t.area;
            return os;
        }
    };
}
#endif