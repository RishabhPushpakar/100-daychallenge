// Q. Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to count
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    // Count frequency
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
