// Q. Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of string (excluding newline)
    for (i = 0; str[i] != '\0'; i++);
    if (str[i-1] == '\n') i--; // Ignore newline from fgets
    int len = i;

    // Check palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
