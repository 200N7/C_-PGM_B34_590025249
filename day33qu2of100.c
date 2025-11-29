//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, key, pos;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    // Read sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to insert
    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    pos = n; // default at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
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
