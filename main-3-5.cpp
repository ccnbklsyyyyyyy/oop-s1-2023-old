// main-3-5.cpp

#include <stdio.h>

double sum_even(double array[], int n);

int main() {
    // Test sum_even function
    double evenArray[] = {1.0, 2.5, 3.2, 4.7};
    double sumEven = sum_even(evenArray, 4);
    printf("Sum of elements in even positions: %.2f.\n", sumEven);

    return 0;
}
