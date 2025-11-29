/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // maximum stars in middle row (odd numbers)

    // Upper part (increasing stars)
    for (i = 1; i <= rows; i += 1) {
        for (j = 1; j <= 2*i-1; j++) { // odd numbers of stars
            printf("*");
        }
        printf("\n");
    }

    // Lower part (decreasing stars)
    for (i = rows-1; i >= 1; i -= 1) {
        for (j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
