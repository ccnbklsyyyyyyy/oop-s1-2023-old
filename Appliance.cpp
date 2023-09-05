#include "Appliance.h"

Appliance::Appliance(int powerRating) : powerRating(powerRating), powerOn(false) {}

void Appliance::togglePower() {
    powerOn = !powerOn;
}

bool Appliance::isOn() const {
    return powerOn;
}

double Appliance::getPowerConsumption() const {
    return 0.0;
}
