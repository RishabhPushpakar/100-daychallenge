// Q. Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // To store binary digits (for 32-bit integer)
    int index = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
