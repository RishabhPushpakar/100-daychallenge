// Q. Count characters, words, and lines in a text file

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    // Open file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n')
            lineCount++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    // If file is not empty and does not end with newline, count the last line
    if (charCount > 0 && ch != '\n')
        lineCount++;

    fclose(file);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}
