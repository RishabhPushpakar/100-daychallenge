// Q. Read and display contents of a file using fgets()

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];

    // Open file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    // Read each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
