#pragma once

#include <string>

using namespace std;

class Hero {
private:
    string _name;

protected:
    int _health;
    int _damage;

    Hero(const string& name) : _name(name) {
    }

public:
    const string& getName() const {
        return _name;
    }

    int getHealth() const {
        return _health;
    }

    void setHealth(int health) {
        if (health <= 0) {
            _health = 0;
        } else {
            _health = health;
        }

        // _health = health <= 0 ? 0 : health;
    }

    int getDamage() const {
        return _damage;
    }

    void Attack(Hero* enemy) {
        int newHealth = enemy->getHealth() - this->_damage;
        enemy->setHealth(newHealth);
    }

    bool isDead() {
        return this->_health == 0;
    }
};
