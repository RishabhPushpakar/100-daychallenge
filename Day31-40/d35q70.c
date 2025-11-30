// Q. Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Normalize k if greater than n
    k = k % n;

    // Rotate array to the right by k positions using reversal method
    // Step 1: Reverse whole array
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 2: Reverse first k elements
    for (i = 0, j = k - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 3: Reverse remaining n-k elements
    for (i = k, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
