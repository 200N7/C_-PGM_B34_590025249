//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, isPalindrome = 1;

    // Read string
    fgets(str, 100, stdin);

    // Calculate length manually (ignore newline)
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') 
            break;
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
