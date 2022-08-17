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

    ShowMage(player);
    ShowBarbarian(enemy);

    // Attack

    ShowMage(player);
    ShowBarbarian(enemy);

    return 0;
}
