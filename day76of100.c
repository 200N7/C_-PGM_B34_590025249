//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char fileName[100];
    FILE *file;
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", fileName);

    // Try opening the file in read mode
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and display file content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
