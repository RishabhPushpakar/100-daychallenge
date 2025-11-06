// Q. Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check lengths first
    if (strlen(str1) != strlen(str2)) {
        printf("Second string is not a rotation of first.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(combined, str1);
    strcat(combined, str1);

    // Check if str2 is a substring of combined
    if (strstr(combined, str2) != NULL)
        printf("Second string is a rotation of first.\n");
    else
        printf("Second string is not a rotation of first.\n");

    return 0;
}
