//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num > 0) {
        digit = num % 10;          // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num = num / 10;            // remove last digit
    }

    if (reversed == original)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
