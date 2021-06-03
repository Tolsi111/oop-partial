#pragma once
#include <string>

using namespace std;

class Account
{
private:
	string m_name;
	int m_accountBalance;
public:
	Account(string);

	bool deposit(int);
	bool withdraw(int);
	int accountBalance();
};

