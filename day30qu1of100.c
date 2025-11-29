//Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int arr[100];  // 1D array
    int n, i;
    int even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
