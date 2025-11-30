#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date doj;   // nested structure for date of joining
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Date of Joining (DD MM YYYY): ");
    scanf("%d %d %d", &e.doj.day, &e.doj.month, &e.doj.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Date of Joining: %02d-%02d-%04d\n", e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
