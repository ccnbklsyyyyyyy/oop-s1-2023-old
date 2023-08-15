#include <iostream>

char intToHexDigit(int num) {
    char hexDigit;

    if (num >= 0 && num <= 9) {
        hexDigit = static_cast<char>('0' + num);
    } else if (num >= 10 && num <= 15) {
        hexDigit = static_cast<char>('A' + (num - 10));
    } else {
        hexDigit = '?';
    }

    return hexDigit;
}

void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; ++i) {
        int num = numbers[i];
        char hexDigit = intToHexDigit(num);

        std::cout << i << " " << num << " " << hexDigit << std::endl;
    }
}
