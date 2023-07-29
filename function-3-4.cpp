// function-3-4.cpp

#include <stdio.h>

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            printf("Pass\n");
            break;
        case 'D':
        case 'E':
            printf("Fail\n");
            break;
        default:
            printf("Nothing\n");
    }
}
