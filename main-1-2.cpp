#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10);

    // Loop to park vehicles
    while (parkingLot.getCount() < 10) {
        int choice;
        std::cout << "Select vehicle type (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> choice;

        Vehicle* vehicle = nullptr;
        int id = parkingLot.getCount() + 1;

        switch (choice) {
            case 1:
                vehicle = new Car(id);
                break;
            case 2:
                vehicle = new Bus(id);
                break;
            case 3:
                vehicle = new Motorbike(id);
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
        }

        if (vehicle != nullptr) {
            parkingLot.parkVehicle(vehicle);
            std::cout << "Vehicle parked. ID: " << id << std::endl;
        }
    }

    int unparkID;
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> unparkID;
    parkingLot.unparkVehicle(unparkID);

    return 0;
}
