#include <iostream>
#include "function-1-3.cpp"

int main() {
    int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 0, 1, 2},
            {3, 4, 5, 6}
    };

    count_digits(matrix);

    return 0;
}
