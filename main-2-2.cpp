#include <iostream>
#include "function-2-2.cpp"

int main() {
    int binaryArray[] = {1,0,1,0};
    int arraySize = sizeof(binaryArray) / sizeof(binaryArray[0]);
    int decimalValue = bin_to_int(binaryArray,arraySize);

    std::cout << "Binary to Decimal: " << decimalValue << std::endl;

    return 0;
}