/*Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    for (i = 1; i <= rows; i++) {          // outer loop for rows
        for (j = 1; j <= i; j++) {         // inner loop for numbers up to row number
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
