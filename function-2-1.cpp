#include <iostream>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    int decimal = std::stoi(decimal_number);
    std::bitset<32> binary(decimal);
    std::string binary_string = binary.to_string();
    std::cout << binary_string.substr(binary_string.find('1')) << std::endl;
}
