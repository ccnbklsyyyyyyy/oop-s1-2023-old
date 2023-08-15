#include <iostream>

bool areArraysEqual(int *arr1, int *arr2, int length) {
    if (length <= 0) {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}
