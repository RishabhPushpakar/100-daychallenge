// Q. Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
