#include "Account.h"

Account::Account(string name)
{
    this->m_accountBalance = 0;
    this->m_name = name;
}

bool Account::deposit(int amount)
{
    this->m_accountBalance += amount;
    return true;
}

bool Account::withdraw(int amount)
{
    if (amount != 5 && amount != 10 && amount != 50 && amount != 100)
        return false;
    if (this->m_accountBalance < amount)
        return false;
    this->m_accountBalance -= amount;
    return true;
}

int Account::accountBalance()
{
    return this->m_accountBalance;
}
