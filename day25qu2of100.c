/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;  // number of rows

    for (i = 0; i < rows; i++) {
        // Print leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
