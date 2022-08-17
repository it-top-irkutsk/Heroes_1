#pragma once

#include <iostream>
#include <string>

#include "Mage.h"
#include "Barbarian.h"

using namespace std;

void ShowMage(Mage* mage) {
    cout << "+++ " << mage->getName() << " +++" << endl;
    cout << "+++ " << "Health: " << mage->getHealth() << " +++" << endl;
    cout << "+++ " << "Damage: " << mage->getDamage() << " +++" << endl;
    cout << "+++ +++ +++" << endl;
}

void ShowBarbarian(Barbarian* barbarian) {
    cout << "--- " << barbarian->getName() << " ---" << endl;
    cout << "--- " << "Health: " << barbarian->getHealth() << " ---" << endl;
    cout << "--- " << "Damage: " << barbarian->getDamage() << " ---" << endl;
    cout << "--- --- ---" << endl;
}