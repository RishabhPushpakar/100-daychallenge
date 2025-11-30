// Q. Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of string (excluding newline)
    for (i = 0; str[i] != '\0'; i++);
    if (str[i-1] == '\n') i--; // Ignore newline from fgets

    // Reverse the string
    for (j = 0; j < i/2; j++) {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
