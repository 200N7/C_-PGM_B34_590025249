//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int n = r * c;
    int arr[n];

    // Read matrix into 1D array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum of diagonal elements
    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += arr[i * (c + 1)];
    }

    printf("%d", sum);

    return 0;
}
