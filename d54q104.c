// Q. Find the pivot integer x such that sum(1 to x) = sum(x to n)

#include <stdio.h>

int main() {
    int n, x, found = 0;

    // Input positive integer
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // Sum of 1 to n
    int leftSum = 0;

    // Check each x from 1 to n
    for (x = 1; x <= n; x++) {
        leftSum += x; // sum from 1 to x
        int rightSum = totalSum - leftSum + x; // sum from x to n
        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}
