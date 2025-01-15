#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
#include <ostream>
#include <string>
class Stock
{
private: // 私有成员，`private:`可以不用特意在代码中写出来，
         // 括号开始到public之前的变量，函数都是私有的
    char *company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    // 构造函数
    Stock();
    Stock(const Stock &s);
    Stock(const char *co, long n = 0, double pr = 0);
    Stock &operator=(const Stock &s);
    // 析构函数，负责对象删除时的清理或者逻辑
    ~Stock();
    // void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock &topval(const Stock &s) const;
    friend std::ostream &operator<<(std::ostream &os, const Stock &s);
};

#endif