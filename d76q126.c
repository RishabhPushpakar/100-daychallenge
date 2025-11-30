#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // If file does NOT exist
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 0;
    }

    // If file exists, read and display content
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);  // Close the file
    return 0;
}
