#include <iostream>
#include "function-2-2.cpp"

int main() {
    int binary_digits[] = {1, 0, 1, 0, 1}; // Example binary array
    int number_of_digits = 5; // Size of the array

    int result = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Binary to Integer: " << result << std::endl;

    return 0;
}
