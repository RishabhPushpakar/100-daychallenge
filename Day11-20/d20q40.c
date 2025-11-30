// Q. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];  // assuming maximum 64-bit binary number
    int i;

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Validate input and calculate 1's complement
    printf("1's complement: ");
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary number!\n");
            return 0;
        }
    }

    printf("\n");
    return 0;
}
