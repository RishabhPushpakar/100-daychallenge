#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints data
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Input details
    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    // Call function
    printStudent(s1);

    return 0;
}
