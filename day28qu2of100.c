//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[100]; // 1D array with fixed size
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

