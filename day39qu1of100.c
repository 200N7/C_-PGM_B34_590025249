//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int n = r * c;
    int arr[n];

    // Read matrix elements in 1D array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Extract diagonal elements
    int diag[r];
    for (int i = 0; i < r; i++) {
        diag[i] = arr[i * (c + 1)];
    }

    // Check if diagonal elements are distinct
    int distinct = 1;  
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
