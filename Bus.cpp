#include "Bus.h"

Bus::Bus(int _id) : Vehicle(_id) {}

int Bus::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int duration = static_cast<int>(currentTime - getTimeOfEntry());
    return static_cast<int>(duration * 0.75); // Apply 25% reduction
}
