//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>

// Function to check if substring s[l...r] has all unique characters
int isUnique(char s[], int l, int r) {
    int freq[256] = {0}; // ASCII frequency

    for (int i = l; i <= r; i++) {
        unsigned char ch = s[i];
        if (freq[ch] == 1)   // already seen
            return 0;
        freq[ch] = 1;
    }
    return 1;
}

int main() {
    char s[200];
    scanf("%s", s);

    int maxLen = 0;

    // Check all substrings
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = i; s[j] != '\0'; j++) {
            if (isUnique(s, i, j)) {
                int length = j - i + 1;
                if (length > maxLen)
                    maxLen = length;
            }
        }
    }

    printf("%d", maxLen);
    return 0;
}
