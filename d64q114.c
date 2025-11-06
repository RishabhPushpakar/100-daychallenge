// Q. Length of the longest substring without repeating characters

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, j, maxLen = 0;

    // Input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove newline
    n = strlen(s);

    for (i = 0; i < n; i++) {
        int seen[256] = {0}; // ASCII character check
        int len = 0;

        for (j = i; j < n; j++) {
            if (seen[(int)s[j]] == 0) {
                seen[(int)s[j]] = 1;
                len++;
            } else {
                break; // Repeating character found
            }
        }

        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
