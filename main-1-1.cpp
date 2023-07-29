#include <iostream>
#include "function-1-1.cpp"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    int result = array_sum(array, n);
    std::cout << "Sum of elements in the array: " << result << std::endl;

    return 0;
}
