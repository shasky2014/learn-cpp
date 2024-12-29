#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_
#include <string>
#include <iostream>
#include <chrono>
#include <sstream>
#include <iomanip>
using std::string;
namespace R5
{
    class B_Account
    {
    private:
        string name_;
        string UUID_;
        double balance_;

    public:
        B_Account();
        B_Account(const string &name, double balance = 0);
        ~B_Account();
        void show() const;
        void depositing(double balance);
        void withdrawing(double balance);
        void rename(string name);
    };

    class UniqueIDGenerator
    {
    private:
        static int counter;

    public:
        static std::string generate();
    };
}

#endif