#include <iostream>

void count_digits(int array[4][4]) {
    int digitCount[10] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int digit = array[i][j];
            digitCount[digit]++;
        }
    }

    std::cout << "Digit counts: ";
    for (int i = 0; i < 10; i++) {
        if (i > 0) {
            std::cout << ";";
        }
        std::cout << i << ":" << digitCount[i];
    }
    std::cout << std::endl;
}
