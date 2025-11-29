/*1. Write a C program that uses functions to perform the following operations:
a. Reading a complex number.
b. Writing a complex number.
c. Addition and subtraction of two complex numbers
Note: represent complex number using a structure.*/

#include <stdio.h>
// Structure for complex number
struct Complex {
    float real;
    float imag;
};
// Function to safely read a float value
float readFloat(const char *message) {
    float value;
    int valid;
    do {
        printf("%s", message);
        valid = scanf("%f", &value);
        if (!valid) {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); // clear invalid input
        }
    } while (!valid);
    return value;
}
// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    c.real = readFloat("Enter real part: ");
    c.imag = readFloat("Enter imaginary part: ");
    return c;
}
// Print complex number in a ± bi format
void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
// Add two complex numbers
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}
// Subtract two complex numbers
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}int main() {
    struct Complex c1, c2, sum, diff;
    printf("Enter first complex number:\n");
    c1 = readComplex();
    printf("\nEnter second complex number:\n");
    c2 = readComplex();
    sum = add(c1, c2);
    diff = subtract(c1, c2);
    printf("\nFirst complex number: ");
    writeComplex(c1);
    printf("Second complex number: ");
    writeComplex(c2);
    printf("\nSum = ");
    writeComplex(sum);
    printf("Difference = ");
    writeComplex(diff);
    return 0;
}

