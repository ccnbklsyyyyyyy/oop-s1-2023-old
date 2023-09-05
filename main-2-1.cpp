#include "Fridge.h"

int main() {
    Fridge fridge(200, 50.0);
    fridge.turnOn();
    double powerConsumption = fridge.getPowerConsumption();
    fridge.turnOff();

    return 0;
}
