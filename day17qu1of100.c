//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h> // for pow()

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num > 0) {
        digit = num % 10;           // get last digit
        sum += digit * digit * digit;  // cube and add
        num = num / 10;             // remove last digit
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
