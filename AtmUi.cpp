#include "AtmUi.h"
#include <iostream>
#include <string>

using namespace std;

AtmUi::AtmUi(AtmController& controller) : m_controller{ controller }
{

}

void AtmUi::displayMenu()
{
	char op;
	while (true)
	{
		cout << "Please insert your option: " << endl;
		cout << "\t 1 - deposit amount" << endl << "\t 2 - withdraw amount" << endl << "\t 3 - account balance" << endl << "\t 4 - report a bug" << endl;
		cout << "\t 0 - exit" << endl;
		cin >> op;
		if (op == '1')
		{
			int amount;
			cout << "Amount: ";
			cin >> amount;
			if (this->m_controller.deposit(amount))
				cout << "Transaction succesful." << endl;
			else
				cout << "Transaction failed." << endl;
		}
		else if (op == '2')
		{
			int amount;
			cout << "Amount: ";
			cin >> amount;
			if (this->m_controller.withdraw(amount))
				cout << "Transaction succesful." << endl;
			else
				cout << "Transaction failed." << endl;
			/*
			try
			{
				this->m_controller.withdraw(amount)
			}
			catch (const std::exception&)
			{
				cout << "Transaction failed." << endl;
			}
			* 
			*/
		}
		else if (op == '3')
			cout << "Your balance: " << this->m_controller.accountBalance() << endl;
		else if (op == '4') {
			string bug;
			cout << "What is the bug? " << endl;
			//getline(cin, bug);
			cin >> bug;

			this->m_controller.reportBug(bug);
		}
		else if (op == '0')
			break;
		else
			cout << "Invalid option  >:[" << endl;

	}
}
