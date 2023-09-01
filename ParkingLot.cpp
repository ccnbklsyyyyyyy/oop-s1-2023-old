#include "ParkingLot.h"

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), parkedCount(0) {
    vehicles.reserve(maxCapacity);
}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const {
    return parkedCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (parkedCount < maxCapacity) {
        vehicles.push_back(vehicle);
        parkedCount++;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            parkedCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayingCount = 0;
    std::time_t currentTime = std::time(nullptr);
    for (Vehicle* vehicle : vehicles) {
        int duration = static_cast<int>(currentTime - vehicle->getTimeOfEntry());
        if (duration > maxParkingDuration) {
            overstayingCount++;
        }
    }
    return overstayingCount;
}
