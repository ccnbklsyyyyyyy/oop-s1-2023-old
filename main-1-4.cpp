#include <iostream>
#include "function-1-4.h"

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int sum_two = sum_two_arrays(arr1, arr2, size);
    std::cout << "Sum of array 1 and array 2: " << sum_two << std::endl;

    return 0;
}
