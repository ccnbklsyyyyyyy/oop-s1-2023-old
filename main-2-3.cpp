#include <iostream>
#include "function-2-3.cpp"

int main() {
    int palindrome_array[] = {1, 2, 3, 2, 1}; // Example palindrome array
    int length = 5; // Size of the array

    int result = sum_if_palindrome(palindrome_array, length);
    if (result == -2) {
        std::cout << "Not a palindrome array." << std::endl;
    } else {
        std::cout << "Sum of elements: " << result << std::endl;
    }

    return 0;
}
