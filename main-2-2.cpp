#include "TV.h"

int main() {
    TV tv(150, 42.0);
    tv.turnOn();
    double powerConsumption = tv.getPowerConsumption();
    tv.turnOff();

    return 0;
}
