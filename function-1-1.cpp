#include <iostream>

int *readNumbers() {
    int *numbers = new int[10];

    std::cout << "Please enter 10 integer numbers:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    return numbers;
}

void printNumbers(int *numbers, int length) {
    std::cout << "Printing the array:" << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cout << "Index " << i << ": " << numbers[i] << std::endl;
    }
}
