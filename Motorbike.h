#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int _id);
    int getParkingDuration() const override;
};

#endif
