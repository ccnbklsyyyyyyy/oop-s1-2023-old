#include <iostream>
#include <climits>

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) {
        return INT_MAX;
    }

    int smallestSum = INT_MAX;
    int secondSmallestSum = INT_MAX;

    for (int i = 0; i < length; ++i) {
        int currentSum = 0;
        for (int j = i; j < length; ++j) {
            currentSum += numbers[j];
            if (currentSum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = currentSum;
            } else if (currentSum < secondSmallestSum && currentSum != smallestSum) {
                secondSmallestSum = currentSum;
            }
        }
    }

    return secondSmallestSum;
}
