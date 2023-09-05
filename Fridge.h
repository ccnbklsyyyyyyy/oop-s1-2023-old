#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
public:
    Fridge(int powerRating = 0, double volume = 0.0);
    void setVolume(double volume);
    double getVolume() const override;
    double getPowerConsumption() const override;

private:
    double fridgeVolume;
};

#endif
