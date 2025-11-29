/*Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;  // number of rows

    for (i = 1; i <= rows; i++) {          // outer loop for rows
        for (j = rows - i + 1; j <= rows; j++) { // inner loop prints numbers
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
