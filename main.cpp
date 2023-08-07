#include <iostream>
#include "workshop.h"

int main() {
    double num = 5.0;
    changeValue(&num);
    std::cout << "Modified value: " << num << std::endl;

    double myArray[] = {3.5, 7.2, 1.0, 9.8, 2.3};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printArray(myArray, arraySize);

    double max = arrayMax(myArray, arraySize);
    std::cout << "Maximum value in array: " << max << std::endl;

    double* dynamicArr = dynamicArray(5, 42.0);
    // Print or manipulate the dynamicArr as needed

    delete[] dynamicArr; // Don't forget to release the dynamically allocated memory

    return 0;
}
