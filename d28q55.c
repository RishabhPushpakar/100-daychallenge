// Q. Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime

        // Check divisibility from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        // If prime, print the number
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
