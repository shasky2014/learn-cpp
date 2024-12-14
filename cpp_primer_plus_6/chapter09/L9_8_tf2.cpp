#include <iostream>
using namespace std;

extern int tom;
static int dick = 10;
int harry = 100;

void remote_access()
{
    cout << "remote_access:  \ntom = " << tom << ", &tom= " << &tom << endl;
    cout << "dick = " << dick << " ,&dick= " << &dick << endl;
    cout << "harry = " << harry << " ,&harry= " << &harry << endl;
}
