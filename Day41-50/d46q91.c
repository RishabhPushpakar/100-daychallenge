// Q. Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels
    while (str[i] != '\0') {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the string

    printf("String after removing vowels: %s", str);

    return 0;
}
