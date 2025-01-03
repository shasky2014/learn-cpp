#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "PE2.h"
using namespace mytime;
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::to_string;
int main(int argc, char const *argv[])
{
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "aida:" << aida << " tosca:" << tosca << endl;
    cout << "aida+tosca:" << aida + tosca << endl;
    cout << "tosca-aida:" << tosca - aida << endl;
    cout << "aida*1.5:" << aida * 1.5 << " 1.5*tosca:" << 1.5 * tosca << endl;
    cout << "temp + aida * 1.5:" << temp + aida * 1.5 << endl;

    return 0;
}
