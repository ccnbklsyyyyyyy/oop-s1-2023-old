#include "function-4-1.cpp"

int main() {
    int *arr = readNumbers();
    int result = findSecondSmallestSum(arr, 10);

    if (result == INT_MAX) {
        std::cout << "Array length is insufficient." << std::endl;
    } else {
        std::cout << "Second smallest sum: " << result << std::endl;
    }

    delete[] arr;

    return 0;
}
