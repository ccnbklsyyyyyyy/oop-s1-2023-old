// function-3-1.cpp

#include <stdbool.h>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - 1 - i] || array[i] != i + 1) {
            return false;
        }
    }

    return true;
}
