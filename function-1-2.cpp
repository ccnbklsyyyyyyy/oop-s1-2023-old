// function-1-2.cpp
double array_mean(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    int sum = array_sum(array, n);
    double mean = static_cast<double>(sum) / static_cast<double>(n);
    return mean;
}
