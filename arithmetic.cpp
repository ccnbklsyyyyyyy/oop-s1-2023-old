#include <iostream>
#include <string>
#include <cmath>

std::string addBinary(std::string binary1, std::string binary2) {
    std::string result = "";
    int carry = 0, i = binary1.length() - 1, j = binary2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += binary1[i--] - '0';
        if (j >= 0) sum += binary2[j--] - '0';
        result = static_cast<char>((sum % 2) + '0') + result;
        carry = sum / 2;
    }

    return result;
}

std::string subtractBinary(std::string binary1, std::string binary2) {
    std::string result = "";
    int borrow = 0, i = binary1.length() - 1, j = binary2.length() - 1;

    while (i >= 0) {
        int num1 = binary1[i--] - '0';
        int num2 = j >= 0 ? binary2[j--] - '0' : 0;
        int diff = num1 - borrow - num2;

        if (diff < 0) {
            diff += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result = static_cast<char>(diff + '0') + result;
    }

    while (result.length() > 1 && result[0] == '0')
        result = result.substr(1);

    return result;
}

std::string leftShiftBinary(std::string binary, int shift) {
    for (int i = 0; i < shift; i++) {
        binary += '0';
    }

    return binary;
}

std::string rightShiftBinary(std::string binary, int shift) {
    int len = binary.length();
    shift = std::min(shift, len);

    return binary.substr(0, len - shift);
}

int main() {
    std::string binary1, binary2;
    std::cout << "Enter the first binary number: ";
    std::cin >> binary1;
    std::cout << "Enter the second binary number: ";
    std::cin >> binary2;

    std::string sum = addBinary(binary1, binary2);
    std::cout << "Sum: " << sum << std::endl;

    std::string difference = subtractBinary(binary1, binary2);
    std::cout << "Difference: " << difference << std::endl;

    int shift;
    std::cout << "Enter the number of positions to shift: ";
    std::cin >> shift;

    std::string leftShifted = leftShiftBinary(binary1, shift);
    std::cout << "Left Shifted: " << leftShifted << std::endl;

    std::string rightShifted = rightShiftBinary(binary1, shift);
    std::cout << "Right Shifted: " << rightShifted << std::endl;

    return 0;
}
