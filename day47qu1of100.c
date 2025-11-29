//Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    // Read two strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Count frequency of each lowercase letter in str1
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }

    // Count frequency of each lowercase letter in str2
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }

    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
