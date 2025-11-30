// Q. Check if two strings are anagrams

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int i;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int freqS[26] = {0};
    int freqT[26] = {0};

    // Count frequency of characters in both strings
    for (i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
