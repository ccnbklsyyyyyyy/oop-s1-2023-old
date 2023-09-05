#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
public:
    TV(int powerRating = 0, double screenSize = 0.0);
    void setScreenSize(double screenSize);
    double getScreenSize() const override;
    double getPowerConsumption() const override;

private:
    double screenInches;
};

#endif
