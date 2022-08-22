#pragma once

#include <string>

#include "Hero.h"
#include "Mage.h"
#include "Barbarian.h"

using namespace std;

enum HeroType {
    HeroMage, HeroBarbarian
};

class HeroCreator {
public:
    static Hero* Create(HeroType hero_type, const string& name) {
        switch (hero_type) {
            case HeroMage:
                return new Mage(name);
            case HeroBarbarian:
                return new Barbarian(name);
        }
    }
};
