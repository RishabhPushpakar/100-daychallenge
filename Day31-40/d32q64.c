// Q. Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, temp, digit;
    int count[10] = {0}; // Array to store count of each digit (0-9)
    int maxCount = 0, mostDigit = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    temp = num;

    // Count occurrence of each digit
    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum count
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times) in %d.\n", mostDigit, maxCount, num);

    return 0;
}
