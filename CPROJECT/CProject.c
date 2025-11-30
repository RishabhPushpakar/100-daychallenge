#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

/* Safe read line: removes trailing newline */
void readLine(char *buf, int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0';
        return;
    }
    size_t ln = strcspn(buf, "\n");
    if (ln < size) buf[ln] = '\0';
    else { /* clear remaining input */
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
    }
}

void addStudent() {
    FILE *fp = fopen("students.bin", "ab"); /* binary append */
    if (!fp) {
        perror("Unable to open students file for appending");
        return;
    }

    struct student s;
    printf("Enter Name: ");
    /* read leftover newline before using fgets if needed */
    readLine(s.name, sizeof s.name);

    /* If name was empty (due to leftover newline), ask again */
    if (s.name[0] == '\0') {
        readLine(s.name, sizeof s.name);
    }

    printf("Enter Roll Number: ");
    if (scanf("%d", &s.roll) != 1) {
        printf("Invalid roll number input.\n");
        /* clear stdin */
        int c; while ((c = getchar()) != '\n' && c != EOF) { }
        fclose(fp);
        return;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid marks input.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF) { }
        fclose(fp);
        return;
    }

    /* clear newline before next fgets */
    int c; while ((c = getchar()) != '\n' && c != EOF) { }

    if (fwrite(&s, sizeof(s), 1, fp) != 1) {
        perror("Write error");
    } else {
        printf("Record Added Successfully!\n");
    }

    fclose(fp);
}

void displayStudents() {
    FILE *fp = fopen("students.bin", "rb");
    if (!fp) {
        printf("No records found (file doesn't exist).\n");
        return;
    }

    struct student s;
    int count = 0;
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
        count++;
    }

    if (count == 0) printf("No records to display.\n");

    fclose(fp);
}

void searchStudent() {
    FILE *fp = fopen("students.bin", "rb");
    if (!fp) {
        printf("No records found (file doesn't exist).\n");
        return;
    }

    int r, found = 0;
    struct student s;
    printf("Enter Roll Number to search: ");
    if (scanf("%d", &r) != 1) {
        printf("Invalid input.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF) { }
        fclose(fp);
        return;
    }
    int c; while ((c = getchar()) != '\n' && c != EOF) { } /* clear */

    while (fread(&s, sizeof(s), 1, fp) == 1) {
        if (s.roll == r) {
            printf("\nRecord Found!\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record Not Found!\n");
    fclose(fp);
}

void deleteStudent() {
    FILE *fp = fopen("students.bin", "rb");
    if (!fp) {
        printf("No records found (file doesn't exist).\n");
        return;
    }

    FILE *temp = fopen("temp.bin", "wb");
    if (!temp) {
        perror("Unable to open temporary file");
        fclose(fp);
        return;
    }

    int r;
    struct student s;
    printf("Enter Roll Number to Delete: ");
    if (scanf("%d", &r) != 1) {
        printf("Invalid input.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF) { }
        fclose(fp);
        fclose(temp);
        return;
    }
    int c; while ((c = getchar()) != '\n' && c != EOF) { } /* clear */

    int deleted = 0;
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        if (s.roll != r) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            deleted = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    if (deleted) {
        if (remove("students.bin") != 0) perror("Error removing original file");
        if (rename("temp.bin", "students.bin") != 0) perror("Error renaming temp file");
        else printf("Record Deleted Successfully!\n");
    } else {
        /* no deletion happened - remove temp and keep original */
        remove("temp.bin");
        printf("Record with roll %d not found.\n", r);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\nEnter Choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Enter a number.\n");
            int c; while ((c = getchar()) != '\n' && c != EOF) { }
            continue;
        }
        int c; while ((c = getchar()) != '\n' && c != EOF) { } /* clear newline */

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}
