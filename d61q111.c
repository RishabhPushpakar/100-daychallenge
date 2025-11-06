// Q. First negative integer in each subarray of size k

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

    printf("First negative in each subarray of size %d:\n", k);

    // Brute force approach
    for (i = 0; i <= n - k; i++) {
        int found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // first negative found
            }
        }
        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}
