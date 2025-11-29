//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[100][100];   // enough size for general cases

    // input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // diagonal traversal
    for (int d = 0; d < r + c - 1; d++) {

        // starting row of diagonal
        int start_row = (d < c) ? 0 : d - c + 1;

        // ending row of diagonal
        int end_row   = (d < r) ? d : r - 1;

        for (int i = start_row; i <= end_row; i++) {
            int j = d - i;   // column is (sum - row)
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}
