#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
        : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* target) {
    std::cout << name << " casts a spell on " << target->getName() << " for " << mana << " damage.\n";
    target->takeDamage(mana);
}
