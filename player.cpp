#include "player.h"
#include <iostream>

Player::Player(std::string name, int health, int damage)
        : name(name), health(health), damage(damage) {}

std::string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

void Player::setHealth(int newHealth) {
    health = newHealth;
}

int Player::getDamage() const {
    return damage;
}

void Player::attack(Player* target) {
    std::cout << name << " attacks " << target->getName() << " for " << damage << " damage." << std::endl;
    target->takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
