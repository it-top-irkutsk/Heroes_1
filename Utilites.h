#pragma once

#include <iostream>
#include <string>

#include "Hero.h"
#include "HeroCreator.h"

using namespace std;

void ShowHero(Hero* hero) {
    cout << "+++ " << hero->getName() << " +++" << endl;
    cout << "+ " << "Health: " << hero->getHealth() << " +" << endl;
    cout << "+ " << "Damage: " << hero->getDamage() << " +" << endl;
    cout << "+++ +++ +++" << endl;
}

void ShowMenu() {
    cout << "Select hero:" << endl;
    cout << "1. Mage" << endl;
    cout << "2. Barbarian" << endl;
    cout << "0. Exit" << endl;
}

void CreateHeroes(Hero** player, Hero** enemy, char select, const string& playerName, const string& enemyName) {
    switch (select) {
        case '1':
            *player = HeroCreator::Create(HeroType::HeroMage, playerName);
            *enemy = HeroCreator::Create(HeroType::HeroBarbarian, enemyName);
            break;
        case '2':
            *player = HeroCreator::Create(HeroType::HeroBarbarian, playerName);
            *enemy = HeroCreator::Create(HeroType::HeroMage, enemyName);
            break;
        case '0':
            cout << "Exit ...";
            break;
        default:
            cout << "Bad enter!";
            break;
    }
}