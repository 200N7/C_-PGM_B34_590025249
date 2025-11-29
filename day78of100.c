//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {  // Check if character is a letter
            ch = tolower(ch);  // Convert to lowercase for easy comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    fclose(file);
    return 0;
}
