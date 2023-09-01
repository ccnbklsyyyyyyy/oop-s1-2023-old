#include "Car.h"

Car::Car(int _id) : Vehicle(_id) {}

int Car::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int duration = static_cast<int>(currentTime - getTimeOfEntry());
    return static_cast<int>(duration * 0.9); // Apply 10% reduction
}
