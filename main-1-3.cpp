#include <iostream>
#include "function-1-5.cpp"

int main() {
    int number = 10;

    int result = count_evens(number);
    std::cout << "Number of even numbers between 1 and " << number << " (inclusive): " << result << std::endl;

    return 0;
}
