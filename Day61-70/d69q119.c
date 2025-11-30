// Q. Find the repeated element in an array (single iteration)

#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements (contains numbers from 1 to n-1 with one repeated)
    printf("Enter %d elements (one element is repeated):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    int expectedSum = (n - 1) * n / 2; // sum of numbers from 1 to n-1

    // Calculate sum of array in one iteration
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int repeated = totalSum - expectedSum;
    printf("Repeated element: %d\n", repeated);

    return 0;
}
