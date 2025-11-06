// Q. Write a program to print the following diamond-like star pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Maximum stars in the middle row (odd numbers)

    // Upper half of the pattern
    for (i = 1; i <= n; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
