#include <iostream>
#include "Orchestra.h"
#include "Musician.h"

int main() {
    Orchestra orchestra(5);

    Musician m1("violin", 5);
    Musician m2("viola", 3);
    Musician m3("cello", 7);
    Musician m4("double bass", 2);
    Musician m5("flute", 4);
    Musician m6("trumpet", 6);

    if (orchestra.add_musician(m1)) {
        std::cout << "Added musician 1 to the orchestra" << std::endl;
    } else {
        std::cout << "Could not add musician 1 to the orchestra" << std::endl;
    }

    // Similar code for other musicians...

    std::cout << "The orchestra currently has " << orchestra.get_current_number_of_members() << " members" << std::endl;

    if (orchestra.has_instrument("violin")) {
        std::cout << "The orchestra has a violinist" << std::endl;
    } else {
        std::cout << "The orchestra does not have a violinist" << std::endl;
    }

    return 0;
}
