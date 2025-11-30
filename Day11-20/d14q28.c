// Q. Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results
    int found = 0;          // to check if there are any even numbers

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    // Display the result
    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers found in the given range.\n");

    return 0;
}
