#include <iostream>

void two_five_nine(int array[], int n) {
    int countTwo = 0;
    int countFive = 0;
    int countNine = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] == 2) {
            countTwo++;
        } else if (array[i] == 5) {
            countFive++;
        } else if (array[i] == 9) {
            countNine++;
        }
    }

    std::cout << "2:" << countTwo << ";5:" << countFive << ";9:" << countNine << ";" << std::endl;
}
