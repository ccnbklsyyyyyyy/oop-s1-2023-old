#include <iostream>
#include "function-1-4.cpp" // Include the implementation of sum_two_arrays function

int main() {
    const int size = 5;
    int arr1[size] = {3, 6, 2, 8, 1};
    int arr2[size] = {1, 2, 3, 4, 5};

    // Test function 1-4: sum_two_arrays
    int sum_two = sum_two_arrays(arr1, arr2, size);
    std::cout << "Sum of two arrays: " << sum_two << std::endl;

    return 0;
}
