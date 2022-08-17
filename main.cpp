#include <iostream>
#include <string>

#include "Mage.h"
#include "Barbarian.h"

#include "Utilites.h"

using namespace std;

int main() {
    Hero* player;
    Hero* enemy;

    string playerName;
    string enemyName = "Enemy";

    cout << "=== START ===" << endl;
    cout << endl;

    cout << "Select hero:" << endl;
    cout << "1. Mage" << endl;
    cout << "2. Barbarian" << endl;
    cout << "0. Exit" << endl;
    char select;
    cout << "Enter: ";
    cin >> select;

    cout << "Enter name hero: ";
    cin >> playerName;

    switch (select) {
        case '1':
            player = new Mage(playerName);
            enemy = new Barbarian(enemyName);
            break;
        case '2':
            player = new Barbarian(playerName);
            enemy = new Mage(enemyName);
            break;
        case '0':
            cout << "Exit ...";
            return 0;
        default:
            cout << "Bad enter!";
            return 0;
    }

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
