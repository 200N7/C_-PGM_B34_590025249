//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char fileName[100];
    char text[500];
    FILE *file;

    // Take filename from user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file in append mode
    file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error: Cannot open the file.\n");
        return 1;
    }

    // Clear input buffer before taking fgets
    getchar(); // removes leftover newline from previous input

    // Take new line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write the text to file
    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    // Close the file
    fclose(file);

    return 0;
}
