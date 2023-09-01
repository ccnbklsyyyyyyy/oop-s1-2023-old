#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int parkedCount;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
