#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 5, 8};
    bool ascending = is_ascending(arr, 5);
    std::cout << "Ascending: " << std::boolalpha << ascending << std::endl;
    return 0;
}
