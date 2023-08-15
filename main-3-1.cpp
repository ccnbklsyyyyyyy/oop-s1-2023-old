#include "function-3-1.cpp"

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();

    bool result = areArraysEqual(numbers1, numbers2, 10);

    std::cout << "Arrays are equal: " << (result ? "true" : "false") << std::endl;

    delete[] numbers1;
    delete[] numbers2;

    return 0;
}
