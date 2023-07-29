// main-3-3.cpp

#include <stdio.h>

double weighted_average(int array[], int n);

int main() {
    // Test weighted_average function
    int weightedArray[] = {1, 2, 1, 4, 1, 3};
    double weightedAvg = weighted_average(weightedArray, 6);
    printf("Weighted average is %.1f.\n", weightedAvg);

    return 0;
}
