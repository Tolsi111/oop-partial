#include "AtmRepo.h"

AtmRepo::AtmRepo()
{
    this->m_balance = 0;
}

bool AtmRepo::deposit(int amount)
{
    this->m_balance += amount;
    return true;
}

bool AtmRepo::withdraw(int amount)
{
    if (amount != 5 && amount != 10 && amount != 50 && amount != 100)
        return false;
    if (this->m_balance < amount)
        return false;
    this->m_balance -= amount;
    return true;
}

int AtmRepo::getBalance()
{
    return this->m_balance;
}

void AtmRepo::reportBug(string bug)
{
    this->m_bugs.push_back(bug);
}
