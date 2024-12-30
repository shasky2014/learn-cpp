#include <string>
#include "R5_Account.h"

using std::string;
using namespace R5;

B_Account::B_Account()
{
    UUID_ = UniqueIDGenerator::generate();
    name_ = UUID_;
    balance_ = 0;
}
B_Account::B_Account(const string &name, double balance)
{
    name_ = name;
    balance_ = balance;
    UUID_ = UniqueIDGenerator::generate();
}
B_Account::~B_Account()
{
    std::cout << "Bye," << name_ << "!\n";
};
void B_Account::show() const
{
    std::cout << "UUID: " << UUID_ << "\n";
    std::cout << "name: " << name_ << "\n";
    std::cout << "balance: " << balance_ << "\n";
}
void B_Account::depositing(double balance)
{
    balance_ = balance_ + balance;
}
void B_Account::withdrawing(double balance)
{
    if (balance_ < balance)
    {
        std::cout << "您的余额不足 " << balance << ".\n";
        return;
    }
    else
    {
        balance_ = balance_ - balance;
        std::cout << "请保管好取款\n";
        std::cout << "剩余金额为: " << balance_ << "\n";
    }
}
void B_Account::rename(string name)
{
    name_ = name;
}
// UniqueIDGenerator
int UniqueIDGenerator::counter = 0;
string UniqueIDGenerator::generate()
{
    // 获取当前时间戳
    auto now = std::chrono::system_clock::now();
    auto now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%Y%m%d%H%M%S");

    // 增加计数器
    counter++;

    // 组合时间戳和计数器生成唯一值
    ss << std::setw(3) << std::setfill('0') << counter;
    return ss.str();
}
