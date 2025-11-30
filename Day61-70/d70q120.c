// Q. Convert a string to sentence case

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    // Convert to sentence case
    int newSentence = 1; // Flag for start of sentence
    for (i = 0; str[i] != '\0'; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1; // Next character starts a new sentence
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
