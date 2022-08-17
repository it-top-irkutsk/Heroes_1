#pragma once

#include <string>

#include "Hero.h"

using namespace std;

class Barbarian : public Hero{
public:
    Barbarian(const string& name) : Hero(name) {
        _health = 100;
        _damage = 20;
    }
};
