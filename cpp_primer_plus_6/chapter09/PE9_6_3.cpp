#include <iostream>
#include <cstring>
char buffer[1024];
struct chaff
{
    char dross[20];
    int slag;
};

void show(const chaff &c)
{
    std::cout << "&chaff=" << &c << " " << c.dross << " " << c.slag << std::endl;
}
void set(chaff &c, const char *a, int b)
{
    std::strcpy(c.dross, a);
    c.slag = b;
}

int main(int argc, char const *argv[])
{
    std::cout << "sizeof(chaff): " << sizeof(chaff) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;

    chaff *c1 = new (buffer) chaff[3];
    chaff *c2 = new (buffer + 3 * sizeof(chaff)) chaff[3];
    for (int i = 0; i < 3; i++)
    {
        set(c1[i], "hello", i);
        set(c2[i], "world", i + 100);
    }
    for (int i = 0; i < 3; i++)
    {
        show(c1[i]);
        // show(c2[i]);
    }
    std::cout << "---- " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        // show(c1[i]);
        show(c2[i]);
    }
    return 0;
}
