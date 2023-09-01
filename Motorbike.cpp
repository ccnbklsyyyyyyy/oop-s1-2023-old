#include "Motorbike.h"

Motorbike::Motorbike(int _id) : Vehicle(_id) {}

int Motorbike::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int duration = static_cast<int>(currentTime - getTimeOfEntry());
    return static_cast<int>(duration * 0.85); // Apply 15% reduction
}
