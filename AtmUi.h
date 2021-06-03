#pragma once
#include "AtmController.h"

using namespace std;

class AtmUi
{
private:
	AtmController m_controller;

public:
	AtmUi(AtmController&);

	void displayMenu();
};

