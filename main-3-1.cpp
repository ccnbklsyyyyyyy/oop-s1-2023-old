#include "function-3-1.cpp"

int main() {
    int *array1 = readNumbers();
    int *array2 = readNumbers();

    bool result = areArraysEqual(array1, array2, 10);

    std::cout << "Arrays are equal: " << (result ? "true" : "false") << std::endl;

    delete[] array1;
    delete[] array2;

    return 0;
}
