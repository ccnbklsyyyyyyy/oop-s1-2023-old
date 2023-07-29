// function-3-3.cpp

#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    std::unordered_map<int, int> freq_map;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        freq_map[array[i]]++;
    }

    for (auto& entry : freq_map) {
        sum += static_cast<double>(entry.first * entry.second) / n;
    }

    return sum;
}
