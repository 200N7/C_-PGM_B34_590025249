//Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    fgets(str, 100, stdin);   // read string

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = str[i];

        if (ch == '\n')       // ignore newline
            continue;

        // Convert to lowercase (manual)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check consonant (only alphabets)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
