#include <iostream>
#include <cmath>

int bin_to_int(int binaryDigits[],int numberOfDigits){
    int decimaValue = 0;
    for (int i = numberOfDigits -1; i >= 0; i--) {
        decimaValue += binaryDigits[i] * std::pow(2, numberOfDigits -1 -i);
    }
    return decimaValue;
}