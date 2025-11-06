// Q. Append a new line of text to an existing file

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], text[200];
    FILE *file;

    // Input filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // consume leftover newline

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Input new line to append
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fprintf(file, "%s", text);

    printf("Text appended successfully to %s\n", filename);

    // Close file
    fclose(file);

    return 0;
}
