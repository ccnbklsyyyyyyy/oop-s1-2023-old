#include "Fridge.h"

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), fridgeVolume(volume) {}

void Fridge::setVolume(double volume) {
    fridgeVolume = volume;
}

double Fridge::getVolume() const {
    return fridgeVolume;
}

double Fridge::getPowerConsumption() const {
    return powerRating * 24.0 * (fridgeVolume / 100.0);
}
