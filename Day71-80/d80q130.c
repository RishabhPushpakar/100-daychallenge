#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct student s;
    int n, i;

    // ---------- WRITE TO FILE ----------
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 0;
    }

    printf("How many student records? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s.name);

        printf("Enter roll number: ");
        scanf("%d", &s.roll);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        // Write record to file
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);


    // ---------- READ FROM FILE ----------
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 0;
    }

    printf("\n--- Student Records ---\n");

    // Read until EOF
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
