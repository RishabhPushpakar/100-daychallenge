// Q. Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    // Input full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    // Find last space to separate surname
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials of first and middle names
    for (i = 0; i <= lastSpace; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c.", name[i]); // First letter initial
        else if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c.", name[i+1]); // Initial of middle name(s)
    }

    // Print surname in full
    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace+1]);
    else
        printf("\n"); // Single word name

    return 0;
}
