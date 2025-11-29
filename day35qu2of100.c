//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number of positions to rotate
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Rotate array to the right by 1, k times
    for (i = 0; i < k; i++) {
        temp = arr[n - 1]; // store last element
        // Shift all elements to the right
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp; // place last element at first
    }

    // Print rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
