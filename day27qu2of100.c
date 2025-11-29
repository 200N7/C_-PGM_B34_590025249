/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 4;  // number of rows in the upper half

    // Upper part of diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (odd numbers)
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for (i = rows-1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (odd numbers)
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
