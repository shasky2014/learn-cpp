#include <base.h>
int main(int argc, char const *argv[])
{
    /* diffrence between cout.get() and cout.getline()
    Your name: Ernest Hemingway
    your book: Old man and the sea
    */
    const int SIZE = 50;
    char name[SIZE];
    char book[SIZE];
    cout << "Enter your name: ";
    // 直接 `cin >> name;` 会因为输入的空格作为两个变量直接用，人名或者书名无法包含空格
    // 使用 `cin.get(name, SIZE);` 输入的带空格名字ok，但是后续的book没有被输入的机会
    //      应为在输入名字后换行被`cin.get(book, SIZE)`获取，直接跳过了book的输入,
    //      所以需要再get一次，跳过回车，即`cin.get(name, SIZE).get();`
    // 使用 `cin.getline(name, SIZE);` 直接按行读取数据到name，如果输入内容长度超出SIZE
    //      会导致book没法输入，且name会按照size大小截取输入内容
    //      getname后加cin.clear也只能把超出长度的部分赋值给book，依然没有输入book的机会

    cin.getline(name, SIZE);
    cout << "Enter your book: ";
    cin.clear();
    cin.getline(book, SIZE);

    cout << "-----------" << endl;
    cout << "Your name: " << name << endl;
    cout << "Your book: " << book << endl;

    return 0;
}
