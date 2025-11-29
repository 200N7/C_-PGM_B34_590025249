//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int digit, i;
    int count[10] = {0};  // Array to store frequency of digits 0-9
    int max_count = 0, most_digit;

    printf("Enter a number: ");
    scanf("%ld", &num);

    // Count frequency of each digit
    long temp = num;
    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_digit = i;
        }
    }

    printf("%d\n", most_digit);

    return 0;
}
