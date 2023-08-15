#include <iostream>

int *reverseIntArray(int *arr, int length) {
    int *reversedArray = new int[length];

    for (int i = 0; i < length; ++i) {
        reversedArray[i] = arr[length - 1 - i];
    }

    return reversedArray;
}
