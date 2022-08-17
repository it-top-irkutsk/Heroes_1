#pragma once

#include <string>

using namespace std;

class Barbarian {
private:
    string _name;
    int _health;
    int _damage;

public:
    Barbarian(const string& name) : _name(name) {
        _health = 100;
        _damage = 20;
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
