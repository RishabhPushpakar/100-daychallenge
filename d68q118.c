// Q. Find the missing number in an array containing numbers from 0 to n except one

#include <stdio.h>

int main() {
    int n, i;

    // Input array size
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements (numbers from 0 to %d with one missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum formula method
    int totalSum = n * (n + 1) / 2; // sum of 0 to n
    int arrSum = 0;

    for (i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
