// Q. Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
