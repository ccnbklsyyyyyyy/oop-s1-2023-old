#include <iostream>
#include "workshop.h"

int main() {
    // Part 1
    double myDouble = 3.14;
    char myChar = 'A';

    double* doublePtr = &myDouble;
    char* charPtr = &myChar;

    std::cout << "Value of myDouble: " << *doublePtr << std::endl;
    std::cout << "Value of myChar: " << *charPtr << std::endl;

    // Part 2
    changeValue(&myDouble);
    std::cout << "New value of myDouble: " << myDouble << std::endl;

    // Part 3
    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    printArray(myArray, arraySize);

    // Part 4
    double maxVal = arrayMax(myArray, arraySize);
    std::cout << "Maximum value in the array: " << maxVal << std::endl;

    // Part 5 and Part 6
    double* dynamicPtr = dynamicArray(5);
    maxVal = arrayMax(dynamicPtr, 5);
    std::cout << "Maximum value in the dynamic array: " << maxVal << std::endl;
    delete[] dynamicPtr;

    // Part 7
    double* initializedArray = dynamicArray(5, 7.7);
    printArray(initializedArray, 5);
    delete[] initializedArray;

    return 0;
}
