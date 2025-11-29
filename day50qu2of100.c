//Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    // Read the string
    fgets(str, 100, stdin);

    // Remove newline if present
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Generate all substrings
    for(i = 0; str[i] != '\0'; i++) {        // start index
        for(j = i; str[j] != '\0'; j++) {    // end index
            for(k = i; k <= j; k++) {        // print substring
                printf("%c", str[k]);
            }
            printf(",");  // separate substrings with comma
        }
    }

    printf("\n");
    return 0;
}
