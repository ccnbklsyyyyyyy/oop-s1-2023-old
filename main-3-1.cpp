#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House myHouse(5);

    Fridge fridge1(200, 50.0);
    Fridge fridge2(150, 40.0);
    TV tv1(150, 42.0);

    myHouse.addAppliance(&fridge1);
    myHouse.addAppliance(&fridge2);
    myHouse.addAppliance(&tv1);

    double totalPowerConsumption = myHouse.getTotalPowerConsumption();

    return 0;
}
