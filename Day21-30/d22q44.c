// Q. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for (i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    // Display result
    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
