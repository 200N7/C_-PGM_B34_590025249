//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %d\nAverage = %.2f\n", sum, average);
    }

    fclose(file);
    return 0;
}
