#include <iostream>
#include "function-1-1.cpp" // Include the implementation of array_sum function

int main() {
    const int size = 5;
    int arr[size] = {3, 6, 2, 8, 1};

    // Test function 1-1: array_sum
    int sum = array_sum(arr, size);
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
