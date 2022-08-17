#include <iostream>
#include <string>

#include "Mage.h"
#include "Barbarian.h"

#include "Utilites.h"

using namespace std;

int main() {
    Mage* player;
    Barbarian* enemy;

    string playerName = "Mage";
    string enemyName = "Enemy";

    player = new Mage(playerName);
    enemy = new Barbarian(enemyName);

    cout << "=== START ===" << endl;
    ShowMage(player);
    ShowBarbarian(enemy);

    do {
        cout << "### ATTACK ###" << endl;
        player->Attack(enemy);
        enemy->Attack(player);

        ShowMage(player);
        ShowBarbarian(enemy);
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
