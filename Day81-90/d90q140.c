#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", (int*)&p.gender);

    // Output
    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");
    else
        printf("Invalid gender value.\n");

    return 0;
}
