#include <iostream>
#include "Person.h"

int main() {
    int n = 5;

    Person* people = createPersonArray(n);

    std::cout << "Created Person Array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << people[i].name << ", Age = " << people[i].age << std::endl;
    }

    delete[] people;

    return 0;
}
