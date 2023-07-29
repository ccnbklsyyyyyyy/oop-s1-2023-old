#include <iostream>

bool is_descending(int array[], int n);

int main() {
    int arr[] = {10, 8, 5, 3, 1};
    bool descending = is_descending(arr, 5);
    std::cout << "Descending: " << std::boolalpha << descending << std::endl;
    return 0;
}
