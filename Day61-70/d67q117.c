// Q. Merge two sorted arrays into a single sorted array

#include <stdio.h>

int main() {
    int m, n, i, j, k;

    // Input sizes of two arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];

    printf("Enter %d elements of first sorted array:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];

    printf("Enter %d elements of second sorted array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    i = j = k = 0;

    // Merge arrays using two pointers
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        if (i != m + n - 1)
            printf("%d, ", merged[i]);
        else
            printf("%d", merged[i]);
    }
    printf("\n");

    return 0;
}
