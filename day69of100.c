//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // size of array
    int nums[100];

    int actual_sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actual_sum += nums[i];
    }

    int expected_sum = 0;
    for(int i = 0; i < n-1; i++) { // numbers from 0 to n-2 (or 1 to n-1)
        expected_sum += i;
    }

    int repeated = actual_sum - expected_sum;
    printf("%d\n", repeated);

    return 0;
}
