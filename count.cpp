#include <iostream>

// Function to count the total number of even numbers in the given array
int count(int array[], int n) {
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}
