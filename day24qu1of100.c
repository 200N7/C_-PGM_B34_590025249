/*Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // number of rows

    for (i = 1; i <= rows; i++) {        // outer loop for rows
        for (j = 1; j <= i; j++) {       // inner loop for columns (up to row number)
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
