#include <base.h>
// #include <string>
int main(int argc, char const *argv[])
{
    /*
    1. 一个数据块，可以指向多个指针，但是只能有一个指针指向它，否则会出错。
    2. delete后是直接删除指针指向的数据块，多个指针指向同一个数据块，在删除后这些指针都没有数据了，都不能再访问，强行调用访问会导致未定义行为，表现为异常数据，或者直接报错
    */
    char *p1 = new char[50];
    memcpy(p1, "hello12345678", 20);
    // strcpy(p1, "hello12345678");
    // p1 = "sadsadsad";
    cout << "*p1=" << *p1 << ",&p1=" << &p1 << ",p1=" << p1 << endl;
    char *p2 = p1;
    cout << "*p2=" << *p2 << ",&p2=" << &p2 << ",p2=" << p2 << endl;

    delete[] p1;
    cout << "after delete[] p1" << endl;
    cout << "*p1=" << *p1 << ",&p1=" << &p1 << ",p1=" << p1 << endl;
    cout << "*p2=" << *p2 << ",&p2=" << &p2 << ",p2=" << p2 << endl;

    return 0;
}
