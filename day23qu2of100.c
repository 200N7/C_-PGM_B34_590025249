/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows
    int cols = 5; // number of columns

    for (i = 1; i <= rows; i++) {        // outer loop for rows
        for (j = 1; j <= cols; j++) {    // inner loop for columns
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
