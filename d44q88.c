// Q. Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("Modified string: %s", str);

    return 0;
}
