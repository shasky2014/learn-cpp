#include <base.h>
// 定义结构体，类似定义一个class，
struct Object
{
    int weight = 0;
    int value = 0;
};
int main()
{
    Object b;
    cout << "new Object b" << endl;
    cout << "b.weight=" << b.weight << ",";
    cout << "b.value=" << b.value << endl;

    Object c;
    cout << "new Object c" << endl;
    cout << "c.weight=" << c.weight << ",";
    cout << "c.value=" << c.value << endl;

    b.weight = 1;
    b.value = 5;
    cout << "after first reassignment" << endl;

    cout << "b.weight=" << b.weight << ",";
    cout << "b.value=" << b.value << endl;

    b.weight = 2;
    b.value = 3;
    cout << "------- after second reassignment ------" << endl;

    cout << "b.weight=" << b.weight << ",";
    cout << "b.value=" << b.value << endl;

    Object *d = new Object();
    (*d).weight = 2;
    (*d).value = 3;
    cout << "Object *d reassignment" << endl;
    cout << "(*d).weight=" << (*d).weight << ",";
    cout << "(*d).value=" << (*d).value << endl;

    (*d).weight = 12;
    (*d).value = 30;
    cout << "Object *d second reassignment" << endl;
    cout << "(*d).weight=" << (*d).weight << ",";
    cout << "(*d).value=" << (*d).value << endl;
}
