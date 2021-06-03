#pragma once
#include <vector>
#include <string>

using namespace std;

class AtmRepo
{
private:
	int m_balance;
	vector<string> m_bugs;
public:
	AtmRepo();

	bool deposit(int);
	bool withdraw(int);
	int getBalance();
	void reportBug(string);




};

