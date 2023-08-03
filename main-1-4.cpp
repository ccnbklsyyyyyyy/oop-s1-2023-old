#include <iostream>
#include "function-1-4.cpp"

int main() {
    int scale = 3;
    int matrix[3][3] = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8}
    };

    print_scaled(matrix, scale);

    return 0;
}
