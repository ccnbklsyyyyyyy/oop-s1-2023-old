#include <iostream>
#include "function-1-3.cpp" // Include the implementation of num_count function

int main() {
    const int size = 5;
    int arr[size] = {3, 6, 2, 8, 1};
    int number = 2;
    int count = num_count(arr, size, number);
    std::cout << "Number of occurrences of " << number << ": " << count << std::endl;

    return 0;
}
