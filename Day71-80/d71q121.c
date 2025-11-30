// Q. Create info.txt and write user's name and age using fprintf()

#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline from fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write data to file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

    // Close the file
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
