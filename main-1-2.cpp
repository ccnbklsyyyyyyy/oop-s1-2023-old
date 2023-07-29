#include <iostream>
#include "function-1-2.cpp" // Include the implementation of array_mean function

int main() {
    const int size = 5;
    int arr[size] = {3, 6, 2, 8, 1};

    // Test function 1-2: array_mean
    double mean = array_mean(arr, size);
    std::cout << "Mean of array elements: " << mean << std::endl;

    return 0;
}
