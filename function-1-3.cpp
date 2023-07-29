// function-1-3.cpp
int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    return count;
}
