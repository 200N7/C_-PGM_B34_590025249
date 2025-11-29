//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int n, target;
    int arr[100];
    int i;

    // Input size
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first and last occurrences
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
