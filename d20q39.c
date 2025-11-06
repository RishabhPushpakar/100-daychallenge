// Q. Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int hasOdd = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Calculate product of odd digits
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found in the number.\n");

    return 0;
}
