#include <iostream>
#include "AtmUi.h"
#include "AtmRepo.h"
#include "AtmController.h"
#include "Account.h"
#include "testing.h"

using namespace std;

int main() {
	//testing::testAll();

	AtmRepo atm;
	Account myAccount("Andrei");
	AtmController controller(atm, myAccount);
	AtmUi Ui(controller);
	Ui.displayMenu();

	return 0;
}