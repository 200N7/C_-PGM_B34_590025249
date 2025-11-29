//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // size of array

    int nums[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int expected_sum = n * (n + 1) / 2; // sum of 0..n
    int actual_sum = 0;

    for(int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    int missing = expected_sum - actual_sum;
    printf("%d\n", missing);

    return 0;
}
