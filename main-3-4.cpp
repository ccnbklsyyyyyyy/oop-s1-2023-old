// main-3-4.cpp

#include <stdio.h>

void print_pass_fail(char grade);

int main() {
    // Test print_pass_fail function
    print_pass_fail('A');
    print_pass_fail('C');
    print_pass_fail('E');
    print_pass_fail('X'); // Invalid grade

    return 0;
}
