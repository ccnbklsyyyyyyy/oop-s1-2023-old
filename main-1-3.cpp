#include <iostream>
#include "Person.h"

int main() {
    int n = 4;

    PersonList originalList = createPersonList(n);
    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Deep Copied Person List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Copied Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
