//Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int arr[100];  // 1D array
    int n, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
