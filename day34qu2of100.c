//Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position to delete (0-based index)
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Check for valid position
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left to delete the element
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // new size of array

    // Print updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
