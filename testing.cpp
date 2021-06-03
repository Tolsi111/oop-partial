#include "testing.h"
#include <assert.h>
#include <iostream>

void testing::testDeposit()
{
	AtmRepo atm;
	Account myAccount("Andrei");
	Account myAccount2("Alex");
	AtmController controller(atm, myAccount);

	assert(controller.deposit(500) == false);
	assert(controller.deposit(-500) == false);
	assert(controller.deposit(100) == true);
	assert(controller.deposit(50) == true);
	assert(controller.accountBalance() == 150);

	AtmController controller2(atm, myAccount2);

	assert(controller2.deposit(500) == false);
	assert(controller2.deposit(-500) == false);
	assert(controller2.deposit(10) == true);
	assert(controller2.deposit(50) == true);
	assert(controller2.accountBalance() == 60);

}

void testing::testWithdraw()
{
	AtmRepo atm;
	Account myAccount("Andrei");
	AtmController controller(atm, myAccount);
}

void testing::testAccBalance()
{
	AtmRepo atm;
	Account myAccount("Andrei");
	AtmController controller(atm, myAccount);
}

void testing::testReportBug()
{
	AtmRepo atm;
	Account myAccount("Andrei");
	AtmController controller(atm, myAccount);
}

void testing::testAll()
{
	testDeposit();
	testWithdraw();
	testAccBalance();
	testReportBug();
}
