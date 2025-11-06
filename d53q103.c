// Q. Find the pivot index of an array.

#include <stdio.h>

int main() {
    int n, i;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate total sum
    int total = 0;
    for (i = 0; i < n; i++) {
        total += arr[i];
    }

    int leftSum = 0, pivotIndex = -1;

    // Find pivot index
    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) {
            pivotIndex = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
