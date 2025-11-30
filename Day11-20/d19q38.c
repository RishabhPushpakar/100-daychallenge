// Q. Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
