#include <base.h>
#include <string>
/*
1. Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the num-
ber of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly func-
tion, but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.
*/
int use_time = 1;

void print(string &a, int n = 0)
{
    cout << "use_time: " << use_time << endl;

    if (n != 0)
    {
        for (int i = 0; i < use_time; i++)
        {
            cout << a << endl;
        }
    }
    else
    {
        cout << a << endl;
    }
    use_time++;
    return;
}

int main(int argc, char const *argv[])
{
    string a = "hello world";
    print(a);
    print(a);
    print(a);
    print(a);
    print(a, 1);
    print(a, 1);
    return 0;
}
