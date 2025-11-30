// Q. Write a program to print the following pattern:
// *
// 
// *
// *
// *
// 
// *
// *
// *
// *
// *
// 
// *
// *
// *
// 
// *

#include <stdio.h>

int main() {
    int i, j;
    int blocks[] = {1, 3, 5, 3, 1}; // Number of stars in each block
    int nBlocks = 5;

    // Loop through each block
    for (i = 0; i < nBlocks; i++) {
        // Print stars for current block
        for (j = 1; j <= blocks[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // Blank line after each block
    }

    return 0;
}
