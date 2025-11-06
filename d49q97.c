// Q. Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0;

    // Input full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    // Print first character as initial
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print character after every space
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c", name[i+1]);
        i++;
    }

    printf("\n");
    return 0;
}
