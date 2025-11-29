//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>  // only for strlen

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, found;

    // Read two strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Get lengths
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);

    // If lengths differ, cannot be rotation
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Check for rotation
    for (i = 0; i < len1; i++) {
        found = 1;
        for (j = 0; j < len1; j++) {
            if (str1[j] != str2[(i + j) % len1]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}
