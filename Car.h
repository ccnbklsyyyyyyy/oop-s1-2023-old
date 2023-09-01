#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int _id);
    int getParkingDuration() const override;
};

#endif
