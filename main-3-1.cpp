// main-3-1.cpp

#include <stdio.h>

bool is_fanarray(int array[], int n);

int main() {
    // Test is_fanarray function
    int fanArray1[] = {1, 2, 3, 2, 1};
    int fanArray2[] = {2, 4, 4, 2};
    int nonFanArray1[] = {1, 2, 1, 2, 1};
    int nonFanArray2[] = {1, 3, 5, 4, 2};

    if (is_fanarray(fanArray1, 5)) {
        printf("fanArray1 is a fan array.\n");
    } else {
        printf("fanArray1 is not a fan array.\n");
    }

    if (is_fanarray(fanArray2, 4)) {
        printf("fanArray2 is a fan array.\n");
    } else {
        printf("fanArray2 is not a fan array.\n");
    }

    if (is_fanarray(nonFanArray1, 5)) {
        printf("nonFanArray1 is a fan array.\n");
    } else {
        printf("nonFanArray1 is not a fan array.\n");
    }

    if (is_fanarray(nonFanArray2, 5)) {
        printf("nonFanArray2 is a fan array.\n");
    } else {
        printf("nonFanArray2 is not a fan array.\n");
    }

    return 0;
}
