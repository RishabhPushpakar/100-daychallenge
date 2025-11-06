// Q. Copy content from source file to destination file using fgetc() and fputc()

#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *source, *destination;
    char ch;

    // Input source and destination filenames
    printf("Enter source file name: ");
    scanf("%s", srcFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(srcFile, "r");
    if (source == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error: Unable to open destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    // Close files
    fclose(source);
    fclose(destination);

    return 0;
}
