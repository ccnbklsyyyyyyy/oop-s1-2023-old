#include <iostream>

void changeValue(double* ptr) {
    *ptr = 42.0;
}

int main() {
    double num = 7.77;
    double* numPtr = &num;

    std::cout << "Original value of num: " << num << std::endl;
    changeValue(numPtr);
    std::cout << "Modified value of num: " << num << std::endl;

    return 0;
}
