// Q. Find next greater element for each element in an array (brute force)

#include <stdio.h>

int main() {
    int n, i, j;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements:\n");

    // Brute force approach
    for (i = 0; i < n; i++) {
        int nextGreater = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // nearest greater element found
            }
        }
        if (i != n-1)
            printf("%d, ", nextGreater);
        else
            printf("%d", nextGreater);
    }

    printf("\n");
    return 0;
}
