#include <iostream>
#include "workshop.h"

int main() {
    double num = 10.5;
    changeValue(&num);
    std::cout << "Modified num: " << num << std::endl;

    const int arraySize = 5;
    double myArray[arraySize] = {1.2, 3.4, 5.6, 7.8, 9.0};
    printArray(myArray, arraySize);

    double maxVal = arrayMax(myArray, arraySize);
    std::cout << "Maximum value in array: " << maxVal << std::endl;

    double* newArray = dynamicArray(3, 7.0);
    for (int i = 0; i < 3; ++i) {
        std::cout << "newArray[" << i << "] = " << newArray[i] << std::endl;
    }
    delete[] newArray;

    return 0;
}
