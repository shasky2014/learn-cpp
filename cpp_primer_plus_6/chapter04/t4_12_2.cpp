#include <base.h>
#include <array>
#include <iterator>
#include <vector>

#define printl(a)             \
    {                         \
        cout << "[";          \
        for (auto i : a)      \
        {                     \
            cout << i << " "; \
        }                     \
        cout << "]" << endl;  \
    }
struct fish
{
    string kind;
    int weight;
    float length;
};

void pointfish(fish f)
{
    cout << "fish{" << endl
         << "\tkind: " << f.kind << endl
         << "\tweight by ounces: " << f.weight << endl
         << "\tlength by inches: " << f.length << endl
         << "}" << endl;
}
int main(int argc, char const *argv[])
{
    cout << " 11. Suppose ted is a double variable. Declare"
         << " a pointer that points to ted and use the"
         << " pointer to display ted’s value." << endl;
    double ted = 3.14;
    double *pted = &ted;
    cout << "ted’s value by *pted:" << *pted << endl;
    cout << "ted’s value by ted:" << ted << endl;

    cout << "12. Suppose treacle is an array of 10 floats."
         << "Declare a pointer that points to the first element"
         << " of treacle and use the pointer to display"
         << " the first and last elements of the array."
         << endl;
    float treacle[10] = {1.1, 2.2, 3.3, 1.4, 5.1, 6.6, 7.6, 8.8, 9.9, 10.1};
    // float *pt1 = &treacle[0];
    float *pt1 = treacle;
    cout << "the first elements of treacle:" << *pt1 << endl;
    cout << "the last elements of treacle:" << *(pt1 + 9) << endl;

    cout << "13. Write a code fragment that asks the user to "
         << "enter a positive integer and then creates a dynamic "
         << "array of that many ints. Do this by using new, "
         << "then again using a vector object."
         << endl;

    int n = 0;
    cout << "enter a positive integer:";
    cin >> n;
    cout << "n:" << n << endl;
    int *p = new int[n];
    cout << p << endl;
    for (int i = 0; i < n; i++)
    {
        *(p + i) = (i + 3) * 5;
        cout << "p[" << i << "]=" << *(p + i) << endl;
    }
    delete[] p;

    vector<int> vi(n);
    printl(vi);

    // const int n1 = n;
    cout << "14. Is the following valid code? "
         << "If so, what does it print? " << endl;
    cout << (int *)"Home of the jolly bytes" << endl;
    // array<int, n1> an;
    cout << "15. Write a code fragment that dynamically allocates "
         << "a structure of the type described "
         << "in Question 8 and then reads a value for the kind "
         << "member of the structure." << endl;
    fish *pf = new fish;
    pointfish(*pf);
    cout << "17. Declare a vector object of 10 string objects and"
         << " an array object of 10 string objects. "
         << "Show the necessary header files and don’t use using. "
         << "Do use a const for the number of strings." << endl;
    const int n2 = 10;
    vector<string> vs1(n2);
    array<string, n2> as2;

    cout << "&vs1=" << &vs1 << endl;
    for (int i = 0; i < n2; i++)
    {
        vs1[i] = (i + 2) ^ 2;
        cout << vs1[i] << endl;
    }
    cout << &as2 << endl;
    printl(as2);
    return 0;
}
