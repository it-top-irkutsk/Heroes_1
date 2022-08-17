#pragma once

#include <iostream>
#include <string>

#include "Hero.h"

using namespace std;

void ShowHero(Hero* hero) {
    cout << "+++ " << hero->getName() << " +++" << endl;
    cout << "+ " << "Health: " << hero->getHealth() << " +" << endl;
    cout << "+ " << "Damage: " << hero->getDamage() << " +" << endl;
    cout << "+++ +++ +++" << endl;
}