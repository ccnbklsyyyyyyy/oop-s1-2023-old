#include <iostream>
#include "function-2-4.cpp"

int main() {
    int integer_array[] = {5, 2, 8, 1, 4}; // Example integer array
    int length = 5; // Size of the array

    int result = sum_min_max(integer_array, length);
    if (result == -1) {
        std::cout << "Array length is invalid." << std::endl;
    } else {
        std::cout << "Sum of min and max: " << result << std::endl;
    }

    return 0;
}
