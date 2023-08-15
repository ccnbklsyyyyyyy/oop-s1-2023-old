//
// Created by c on 15/8/2023.
//
#include "function-2-1.cpp"

int main() {
    int *numbers = readNumbers();
    hexDigits(numbers, 10);

    delete[] numbers; // Deallocate the dynamically allocated array

    return 0;
}
