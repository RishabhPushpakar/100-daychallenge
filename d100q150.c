#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void updateData(struct Student *p) {
    // Modify values using pointer
    printf("\n--- Update Student Details ---\n");

    printf("Enter New Name: ");
    scanf("%s", p->name);

    printf("Enter New Roll Number: ");
    scanf("%d", &p->roll_no);

    printf("Enter New Marks: ");
    scanf("%f", &p->marks);
}

void display(struct Student *p) {
    // Display using pointer
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", p->name);
    printf("Roll Number: %d\n", p->roll_no);
    printf("Marks: %.2f\n", p->marks);
}

int main() {
    struct Student s;
    struct Student *ptr = &s;

    // Initial input
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Show initial data
    display(ptr);

    // Modify using pointer
    updateData(ptr);

    // Show updated data
    display(ptr);

    return 0;
}
