#include <base.h>
int main()
{
    int *ps = new int;
    cout << "*ps=" << *ps << " :location=" << ps << endl;
    int *pq = ps;
    cout << "*pq=" << *pq << " :location=" << pq << endl;
    delete pq;
    cout << "ok: delete pq;" << endl;
    // 指向同一个地址的指针，只能释放一次
    // 多次释放会导致程序直接报错 Unknown signal
    delete ps;
    cout << "ok: delete ps;" << endl;
    return 0;
}
