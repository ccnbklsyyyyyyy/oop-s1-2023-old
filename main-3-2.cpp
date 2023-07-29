// main-3-2.cpp

#include <stdio.h>

int median_array(int array[], int n);

int main() {
    // Test median_array function
    int array1[] = {3, 5, 2, 1, 4};
    int array2[] = {1, 2, 3, 4};

    int median1 = median_array(array1, 5);
    int median2 = median_array(array2, 4);

    printf("Median of array1 is %d.\n", median1);
    printf("Median of array2 is %d.\n", median2);

    return 0;
}
