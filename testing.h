#pragma once
#include "AtmUi.h"
#include "AtmRepo.h"
#include "AtmController.h"
#include "Account.h"

using namespace std;

class testing
{
public:
	static void testDeposit();
	static void testWithdraw();
	static void testAccBalance();
	static void testReportBug();

	static void testAll();
};

