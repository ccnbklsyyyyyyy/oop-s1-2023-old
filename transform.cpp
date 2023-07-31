#include <iostream>
#include <string>

std::string decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0)
        return "0";

    std::string binaryRepresentation = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryRepresentation = std::to_string(remainder) + binaryRepresentation;
        decimalNumber /= 2;
    }

    return binaryRepresentation;
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string binaryNumber = decimalToBinary(decimalNumber);
    std::cout << "Binary representation: " << binaryNumber << std::endl;

    return 0;
}
