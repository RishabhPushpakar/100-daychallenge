// Q. Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // For lowercase alphabets
    int i = 0;
    char firstRepeat = '\0';

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                firstRepeat = ch;
                break; // First repeating found
            }
        }
        i++;
    }

    if (firstRepeat != '\0')
        printf("The first repeating lowercase alphabet is '%c'.\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
