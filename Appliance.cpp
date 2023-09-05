#include "Appliance.h"

Appliance::Appliance(int powerRating) : powerRating(powerRating), powerOn(false) {}

void Appliance::turnOn() {
    powerOn = true;
}

void Appliance::turnOff() {
    powerOn = false;
}

bool Appliance::isOn() const {
    return powerOn;
}

double Appliance::getPowerConsumption() const {
    return 0.0;
}
