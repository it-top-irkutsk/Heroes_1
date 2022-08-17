#pragma once

#include <string>

using namespace std;

class Mage {
private:
    string _name;
    int _health;
    int _damage;

public:
    Mage(const string& name) : _name(name) {
        _health = 120;
        _damage = 10;
    }

    const string& getName() const {
        return _name;
    }

    int getHealth() const {
        return _health;
    }

    int getDamage() const {
        return _damage;
    }
};
