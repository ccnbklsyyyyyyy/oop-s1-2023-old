#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int id;

public:
    Vehicle(int _id);
    int getID() const;
    virtual int getParkingDuration() const = 0;
    std::time_t getTimeOfEntry() const;
};

#endif
