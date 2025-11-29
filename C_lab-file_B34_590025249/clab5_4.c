#include <stdio.h>

int main() {

    int m, n, p, q;

    // INPUT ORDER OF MATRIX A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // INPUT ORDER OF MATRIX B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // CHECK COMPATIBILITY
    if (n != p) {
        printf("\nMatrix multiplication NOT possible!\n");
        printf("Because columns of A (%d) != rows of B (%d)\n", n, p);
        return 0;
    }

    int A[50][50], B[50][50], C[50][50];

    // INPUT MATRIX A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // INPUT MATRIX B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // INITIALIZE RESULT MATRIX C TO ZERO
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // MATRIX MULTIPLICATION
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // PRINT MATRIX A
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    // PRINT MATRIX B
    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    // PRINT RESULT MATRIX C
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
