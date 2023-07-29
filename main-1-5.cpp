#include <iostream>
#include "function-1-5.h"

int main() {
    int num = 10;
    int even_count = count_evens(num);
    std::cout << "Number of even numbers between 1 and " << num << ": " << even_count << std::endl;

    return 0;
}
