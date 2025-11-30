// Q. Maximum element in each subarray of size k

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

    // Input window size k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    printf("Maximum elements in each subarray of size %d:\n", k);

    // Brute force approach
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}
