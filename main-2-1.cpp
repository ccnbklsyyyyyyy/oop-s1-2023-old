#include <iostream>

int min_element(int array[], int n);

int main() {
    int arr[] = {3, 1, 5, 2, 4};
    int min = min_element(arr, 5);
    std::cout << "Minimum: " << min << std::endl;
    return 0;
}
