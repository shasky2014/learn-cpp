#ifndef PE5_BANK_H
#define PE5_BANK_H
#include <iostream>
namespace bank
{
    class Customer
    {
    private:
        long arrive;
        int processtime;

    public:
        Customer() : arrive(0), processtime(0) {}
        void set(long);
        int ptime() const { return processtime; }
        long when() const { return arrive; }
    };

    typedef Customer Item;

    class Queue
    {
    private:
        struct Node
        {
            Item item;
            struct Node *next;
        };
        enum
        {
            Q_SIZE = 10
        };

        Node *head_;
        Node *tail_;
        int count_;
        const int qsize_;                                  // 队列最大长度,初始化的时候设置,并且此后无法再修改
        Queue(const Queue &q) : qsize_(0) {}               // 不允许拷贝Queue对象
        Queue &operator=(const Queue &q) { return *this; } // 不允许赋值Queue对象

    public:
        Queue(int qs = Q_SIZE);
        ~Queue();
        bool add(const Item &);
        bool drop(Item &);
        void clean();
        bool isempty() const { return count_ == 0; }
        bool isfull() const { return count_ == qsize_; }
        int count() const { return count_; }
        int qsize() const { return qsize_; }
        friend std::ostream &operator<<(std::ostream &os, const Queue &q);
    };
}
#endif // MACRO
