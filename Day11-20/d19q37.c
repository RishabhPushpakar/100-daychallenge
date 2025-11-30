// Q. Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM using relation: LCM * GCD = (num1 * num2)
    lcm = (tempA * tempB) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}
