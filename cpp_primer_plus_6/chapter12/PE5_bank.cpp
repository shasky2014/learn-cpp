#include <random>
#include <iostream>
#include "PE5_bank.h"
namespace bank
{
    void Customer::set(long a)
    {
        arrive = a;
        processtime = rand() % 3 + 1;
    }
    Queue::Queue(int qs) : qsize_(qs)
    {
        head_ = tail_ = nullptr;
        count_ = 0;
    }
    Queue::~Queue()
    {
        Node *temp;
        while (head_ != nullptr)
        {
            temp = head_;
            head_ = temp->next;
            delete temp;
        }
    }
    bool Queue::add(const Item &a)
    {
        if (isfull())
            return false;
        Node *temp = new Node(a, nullptr);
        count_++;
        if (head_ == nullptr)
            head_ = temp;
        else
            tail_->next = temp;
        tail_ = temp;
        return true;
    }
    bool Queue::drop(Item &a)
    {
        if (isempty())
            return false;
        count_--;
        Node *temp = head_;
        a = head_->item;
        head_ = head_->next;
        delete temp;
        if (head_ == nullptr)
            tail_ = nullptr;
        return true;
    }
    void Queue::clean()
    {
        while (!isempty())
        {
            Item temp;
            drop(temp);
        }
    }
    std::ostream &operator<<(std::ostream &os, const Queue &q)
    {
        os << "Queue[" << &q << "]{qsize=" << q.qsize_ << ",count=" << q.count_ << "}";
        return os;
    }
}