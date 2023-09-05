#ifndef HOUSE_H
#define HOUSE_H

#include <vector>
#include "Appliance.h"

class House {
public:
    House();
    explicit House(int numAppliances);
    ~House();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

private:
    std::vector<Appliance*> appliances;
    int numAppliances;
};

#endif
