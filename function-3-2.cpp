#include <iostream>

int *reverseArray(int *numbers1, int length) {
    int *reversedNumbers = new int[length];

    for (int i = 0; i < length; ++i) {
        reversedNumbers[i] = numbers1[length - 1 - i];
    }

    return reversedNumbers;
}
