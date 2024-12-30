#include <iostream>
#include <cstring>
#include "PE8_List.h"

namespace List_PE8
{
    using namespace test_pe8;

    template <class T>
    List<T>::List()
    {
        n_ = 0;
    }

    template <class T>
    List<T>::List(T items[], int n)
    {
        if (n > MAX_SIZE)
            n_ = MAX_SIZE;
        else
            n_ = n;
        for (int i = 0; i < n_; i++)
        {
            l_[i] = items[i];
        }
    }

    template <class T>
    List<T>::~List()
    {
        std::cout << "List[" << this << " ] is destructed\n";
    }

    template <class T>
    bool List<T>::isempty()
    {
        return n_ == 0;
    }

    template <class T>
    bool List<T>::isfull()
    {
        return n_ == MAX_SIZE;
    }

    template <class T>
    void List<T>::add(const T &item)
    {
        if (n_ >= MAX_SIZE)
            std::cout << "List;" << this << " ] is alreaday full\n";
        else
        {
            l_[n_] = item;
            n_++;
        }
    }

    template <class T>
    void List<T>::show() const
    {
        std::cout << "List[" << this << " ]:[";
        if (n_ == 0)
        {
            std::cout << "] is empty\n";
        }
        else
        {
            for (int i = 0; i < n_; i++)
            {
                std::cout << l_[i];
                if (i == n_ - 1)
                    std::cout << "]\n";
                else
                    std::cout << ", ";
            }
        }
    }

    template <class T>
    void List<T>::visit(void (*pf)(T &))
    {
        for (int i = 0; i < n_; i++)
        {
            pf(l_[i]);
        }
    }

    template class List<int>;
    template class List<double>;
    template class List<std::string>;
    template class List<Test>;
}

namespace test_pe8
{
    Test::Test(double a, double b)
    {
        h = a;
        w = b;
        calArea();
    }
    void Test::add(double a, double b)
    {
        h = a + h;
        w = b + w;
        calArea();
    }
    void Test::show() const
    {
        std::cout << "Test[" << this
                  << "]: {h = " << h
                  << ", w = " << w
                  << ", area = " << area << "}\n";
    }
}