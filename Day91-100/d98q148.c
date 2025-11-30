#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks) 
    {
        return 1;  // identical
    }
    return 0;      // not identical
}

int main() {
    struct Student a, b;

    // Input for first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", a.name);
    printf("Roll Number: ");
    scanf("%d", &a.roll_no);
    printf("Marks: ");
    scanf("%f", &a.marks);

    // Input for second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", b.name);
    printf("Roll Number: ");
    scanf("%d", &b.roll_no);
    printf("Marks: ");
    scanf("%f", &b.marks);

    // Compare
    if(areIdentical(a, b)) {
        printf("\nBoth students are IDENTICAL.\n");
    } else {
        printf("\nStudents are NOT identical.\n");
    }

    return 0;
}
