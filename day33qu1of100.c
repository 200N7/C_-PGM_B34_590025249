//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid, found = -1;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }

    return 0;
}
