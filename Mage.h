#pragma once

#include <string>

#include "Hero.h"

using namespace std;

class Mage : public Hero {
public:
    Mage(const string& name) : Hero(name) {
        _health = 120;
        _damage = 10;
    }
};
