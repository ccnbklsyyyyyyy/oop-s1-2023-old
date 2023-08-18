#include <iostream>
#include "Person.h"

int main() {
    int n = 2;

    PersonList originalList = createPersonList(n);
    PersonList shallowCopiedList = shallowCopyPersonList(originalList);

    std::cout << "Shallow Copied Person List:" << std::endl;
    for (int i = 0; i < shallowCopiedList.numPeople; ++i) {
        std::cout << "Shallow Copied Person " << i + 1 << ": Name = " << shallowCopiedList.people[i].name << ", Age = " << shallowCopiedList.people[i].age << std::endl;
    }

    return 0;
}
