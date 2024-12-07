#include <iostream>
using namespace std;
double betsy(int);
double pam(int);
double ralph(int lns);
// second argument is pointer to a type double function that takes a type int argument
void estimate(int lines, double (*pf)(int));
int main()
{

    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);
    cout << "Here's Ralph's estimate:\n";
    estimate(code, ralph);
    return 0;
}
double betsy(int lns)
{
    cout << "betsy's function,as 0.05 * " << lns << endl;
    return 0.05 * lns;
}
double pam(int lns)
{
    cout << "pam's function,as 0.03 * " << lns << "+0.0004 * power(" << lns << ",2)" << endl;
    return 0.03 * lns + 0.0004 * lns * lns;
}
double ralph(int lns)
{
    cout << "ralph's function,as 0.04 * " << lns << "+0.0003 * power(" << lns << ",2)" << endl;
    return 0.04 * lns + 0.0003 * lns * lns;
};
void estimate(int lines, double (*pf)(int))
{
    // pf 是指向函数的指针，可以 pf(lines) 调用，或者按 (*pf)(lines) 调用
    using namespace std;
    cout << lines << " lines will take ";
    cout << pf(lines) << " hour(s)\n";
}