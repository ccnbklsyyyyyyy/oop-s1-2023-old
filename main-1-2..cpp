#include <iostream>
#include "function-1-2.h"

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    double mean = array_mean(arr1, size);
    std::cout << "Mean of array 1: " << mean << std::endl;

    return 0;
}
