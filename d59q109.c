// Q. Maximum sum of all subarrays of size k

#include <stdio.h>

int main() {
    int n, k, i, j;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input subarray size k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxSum = 0;

    // Compute sum of first subarray of size k
    for (i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;

    // Compute sum of other subarrays of size k
    for (i = 1; i <= n - k; i++) {
        currentSum = 0;
        for (j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
