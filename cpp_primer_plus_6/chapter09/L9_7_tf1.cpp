#include <iostream>
using namespace std;

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();
int main()
{
    cout << "main: \ntom = " << tom << " ,&tom= " << &tom << endl;
    cout << "dick = " << dick << " ,&dick= " << &dick << endl;
    cout << "harry = " << harry << ", &harry= " << &harry << endl;
    cout << "::harry = " << ::harry << ", &harry= " << &::harry << endl;
    cout << "--------" << endl;
    remote_access();
    return 0;
}
