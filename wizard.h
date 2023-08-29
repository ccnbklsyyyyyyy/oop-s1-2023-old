#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
public:
    Wizard(std::string name, int health, int damage, int mana);

    void castSpell(Player* target);

private:
    int mana;
};

#endif // WIZARD_H
