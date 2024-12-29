#ifndef STOCK_H_
#define STOCK_H_

#include <string>
class Stock
{
private: // 私有成员，`private:`可以不用特意在代码中写出来，
         // 括号开始到public之前的变量，函数都是私有的
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    // 构造函数
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0);
    // 析构函数，负责对象删除时的清理或者逻辑
    ~Stock();

    // void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    // const 成员函数，不能修改对象，并且约定如果不修改对象的函数都写成 const成员函数
    void show() const;
    const Stock &topval(const Stock &s) const;
};

#endif