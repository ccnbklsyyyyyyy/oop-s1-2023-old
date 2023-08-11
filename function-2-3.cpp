#include <iostream>

bool is_array_palindrome(int integers[], int length) {
    if (length <= 0) {
        return false;
    }
    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (integers[left] != integers[right]){
    return false;
        }
        ++left;
        --right;
    }
    return true;
}

int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return  -1;
    }
    int total = 0;
    for (int i =0; i< length; ++i) {
        total += integers[i];
    }
    return  total;
}

int sum_recursive(int integers[], int left,int right);

int  palindrome_sum(int integers[], int length) {
    if (is_array_palindrome(integers, length)) {
        return sum_recursive(integers, 0, length - 1);
    }else {
        return -2;
    }

int sum_recursive(int integers[], int left,int right) {
    if (left >= right) {
        return 0;
    }
    return integers[left] + sum_recursive(integers, left +1, right-1) + integers[right];
}
}