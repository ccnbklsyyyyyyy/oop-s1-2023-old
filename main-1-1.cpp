#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    std::vector<Vehicle*> vehicles;
    ParkingLot parkingLot(10);
    for (Vehicle* vehicle : vehicles) {
        parkingLot.parkVehicle(vehicle);
    }

    for (Vehicle* vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds"
                  << std::endl;
        delete vehicle;
    }

    return 0;
}
