//
// Created by c on 15/8/2023.
//
#include "function-3-2.cpp"
#include "function-3-1.cpp"

int main() {
    int *originalArray = readNumbers();
    int *reversedArray = reverseArray(originalArray, 10);

    bool result = areArraysEqual(originalArray, reversedArray, 10);

    std::cout << "Arrays are equal: " << (result ? "true" : "false") << std::endl;

    delete[] originalArray;
    delete[] reversedArray;

    return 0;
}
