// Q. Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    longest[0] = '\0';

    while (1) {
        j = 0;

        // Extract word
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        // Check if this word is the longest
        if (strlen(word) > maxLen) {
            maxLen = strlen(word);
            strcpy(longest, word);
        }

        if (str[i] == '\0') break;
        i++; // Skip space
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}
