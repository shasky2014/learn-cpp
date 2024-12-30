#include <iostream>
#include <cstring>
#include "PE8_List.h"
using namespace std;
using namespace List_PE8;
using namespace test_pe8;

void pf(Test &item)
{
    item.show();
    item.add(30, 30);
    item.show();
}

void pf(double &item)
{
    cout << "double item= " << item << ", 2*item= " << item * 2 << endl;
}

int main()
{

    Test t1 = Test(3, 6);
    t1.show();
    cout << t1 << "\n";
    Test items[5] = {Test(1, 1), Test(1, 2), Test(1, 3), Test(1, 4)};
    for (int i = 0; i < 5; i++)
    {
        cout << items[i] << "\n";
    }

    List<Test> list1(items, 4);
    list1.visit(pf);

    double a[] = {3, 4, 5, 6, 10};
    List<double> list2(a, 5);
    list2.visit(pf);
    return 0;
}
