#pragma once
#include "AtmRepo.h"
#include "Account.h"
class AtmController
{
private:
	AtmRepo m_repo;
	Account m_acc;
public:
	AtmController(AtmRepo&,Account&);

	bool deposit(int);
	bool withdraw(int);
	int accountBalance();
	void reportBug(string);

};

