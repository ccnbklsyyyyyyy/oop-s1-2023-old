#include "House.h"

House::House() : numAppliances(0) {}

House::House(int numAppliances) : numAppliances(numAppliances) {}

House::~House() {
    for (Appliance* appliance : appliances) {
        delete appliance;
    }
}

bool House::addAppliance(Appliance* appliance) {
    if (appliances.size() < static_cast<size_t>(numAppliances)) {
        appliances.push_back(appliance);
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() const {
    double totalPower = 0.0;
    for (const Appliance* appliance : appliances) {
        totalPower += appliance->getPowerConsumption();
    }
    return totalPower;
}
