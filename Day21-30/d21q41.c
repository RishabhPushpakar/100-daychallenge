// Q. Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10; // Extract last digit

    // Count number of digits and extract first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp; // Extract first digit

    // Remove first and last digits from original number
    result = num % (int)pow(10, digits);      // Remove first digit
    result = result / 10;                      // Remove last digit
    result = result + lastDigit * (int)pow(10, digits) + firstDigit; // Swap first and last

    // Display result
    printf("Number after swapping first and last digits = %d\n", result);

    return 0;
}
