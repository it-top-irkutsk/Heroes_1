#include <iostream>
#include <string>

#include "Mage.h"
#include "Barbarian.h"

#include "Utilites.h"
#include "HeroCreator.h"

using namespace std;

int main() {
    Hero* player = nullptr;
    Hero* enemy = nullptr;

    string playerName;
    string enemyName = "Enemy";

    cout << "=== START ===" << endl;
    cout << endl;

    ShowMenu();
    char select;
    cout << "Enter: ";
    cin >> select;

    cout << "Enter name hero: ";
    cin >> playerName;

    CreateHeroes(&player, &enemy, select, playerName, enemyName);

    if (player == nullptr || enemy == nullptr) return 1;

    ShowHero(player);
    ShowHero(enemy);

    do {
        cout << "### ATTACK ###" << endl;
        player->Attack(enemy);
        enemy->Attack(player);

        ShowHero(player);
        ShowHero(enemy);
    } while (!player->isDead() && !enemy->isDead());

    if (player->isDead()) {
        cout << enemy->getName() << " is WIN !!!" << endl;
    } else if (enemy->isDead()) {
        cout << player->getName() << " is WIN !!!" << endl;
    }

    delete player;
    delete enemy;

    return 0;
}
