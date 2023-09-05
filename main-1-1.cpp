#include "Appliance.h"

int main() {
    Appliance appliance(100);
    appliance.turnOn();
    double powerConsumption = appliance.getPowerConsumption();
    appliance.turnOff();

    return 0;
}
