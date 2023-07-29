#include <iostream>
#include "function-1-5.cpp" // Include the implementation of count_evens function

int main() {
    int number = 10;

    // Test function 1-5: count_evens
    int even_count = count_evens(number);
    std::cout << "Number of even numbers between 1 and " << number << ": " << even_count << std::endl;

    return 0;
}
