//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, key;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and element to insert
    printf("Enter position (0-based) and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Check for valid position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = key;
    n++; // new size of array

    // Print updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
