#include <iostream>

int max_element(int array[], int n);

int main() {
    int arr[] = {3, 1, 5, 2, 4};
    int max = max_element(arr, 5);
    std::cout << "Maximum: " << max << std::endl;
    return 0;
}
