//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int arr[100];  // 1D array
    int n, i, key, found = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;  // stop at first occurrence
        }
    }

    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }

    return 0;
}
