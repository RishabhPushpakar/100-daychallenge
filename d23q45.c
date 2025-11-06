// Q. Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    numerator = 2;
    denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;     // Next numerator increases by 2
        denominator += 4;   // Next denominator increases by 4
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
