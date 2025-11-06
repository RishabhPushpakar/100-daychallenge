// Q. Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null character '\0'
    while (str[i] != '\0') {
        if (str[i] != '\n') // Ignore newline character from fgets
            count++;
        i++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
