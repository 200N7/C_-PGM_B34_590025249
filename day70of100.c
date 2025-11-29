//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin); // read input string including spaces

    int i = 0;

    // Capitalize first character if it's a letter
    if(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
    }

    // Traverse the rest of the string
    for(i = 1; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i-1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = toupper(str[i]);
        } else if(!(str[i] >= 'A' && str[i] <= 'Z')) {
            str[i] = str[i]; // leave numbers/special characters as is
        }
    }

    printf("%s", str);

    return 0;
}
