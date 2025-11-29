//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;
    int rowSum[10];   // to store sum of each row

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;   // initialize sum of this row to 0

        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];   // add element to the row sum
        }
    }

    printf("Row sums:\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
