#include <print>
#include <iostream>
using namespace std;

// import std;
int main(int argc, char const *argv[])
{
    auto fib = [](this auto self, int n)
    {
        if (n <= 1)
            return 1;
        return n * self(n - 1);
    };
    cout << fib(5) << endl; // output 120
    cout << "hello world";
    println("hello world");
    return 0;
}
