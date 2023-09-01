#include "Vehicle.h"

Vehicle::Vehicle(int _id) : id(_id) {
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const {
    return id;
}

std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}
