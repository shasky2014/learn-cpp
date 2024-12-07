#include <base.h>

/*
Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:

Three blind mice
Three blind mice
See how they run
See how they run
*/
void cp(string a)
{
    cout << a << endl;
}
void double_run(string a)
{
    cp(a);
    cp(a);
}

int main()
{
    double_run("Three blind mice");
    double_run("See how they run");
    return 0;
}