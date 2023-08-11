#include "function-2-3.cpp"
int  main() {
    int arr1[] = {1,2,2,1};
    int arr2[] = {1,2,3,4};

    int length1 = sizeof(arr1) / sizeof (arr1[0]);
    int length2 = sizeof(arr2) / sizeof (arr2[0]);

    int result1 = palindrome_sum(arr1,length1);
    int result2 = palindrome_sum(arr2,length2);

    std::cout << "result1: " <<result1 <<std::endl;
    std::cout << "result2: " <<result2 <<std::endl;
    return 0;
}