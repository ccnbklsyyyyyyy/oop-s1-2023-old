#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(std::string name, int health, int damage);
    virtual ~Player() = default;

    std::string getName() const;
    int getHealth() const;
    void setHealth(int newHealth);
    int getDamage() const;

    virtual void attack(Player* target);
    virtual void takeDamage(int damage);

private:
    std::string name;
    int health;
    int damage;
};

#endif

