// Q. Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Loop for rows
    for (i = n; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
