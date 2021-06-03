#include "AtmController.h"
#include <exception>

AtmController::AtmController(AtmRepo& repo, Account& acc) : m_acc { acc }
{
	this->m_repo = repo;
}

bool AtmController::deposit(int amount)
{
	if (amount != 5 && amount != 10 && amount != 50 && amount != 100)
		return false;
	/*
	if (amount != 5 && amount != 10 && amount != 50 && amount != 100)
		throw exception();
	*/
	this->m_repo.deposit(amount);
	this->m_acc.deposit(amount);
	return true;
}

bool AtmController::withdraw(int amount)
{
	if (amount != 5 && amount != 10 && amount != 50 && amount != 100)
		return false;//throw exception();
	if (this->m_repo.getBalance() < amount || this->m_acc.accountBalance() < amount)
		return false;//throw exception();
	this->m_repo.withdraw(amount);
	this->m_acc.withdraw(amount);
	return true;
}

int AtmController::accountBalance()
{
	return this->m_acc.accountBalance();
}

void AtmController::reportBug(string bug)
{
	this->m_repo.reportBug(bug);
}
