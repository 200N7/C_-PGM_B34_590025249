//Find the sum of array elements.

#include <stdio.h>

int main() {
    int arr[100];  // 1D array
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
