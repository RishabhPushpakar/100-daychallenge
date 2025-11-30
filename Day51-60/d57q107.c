// Q. Find previous greater element for each element in an array (brute force)

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

    printf("Previous greater elements:\n");

    // Brute force approach
    for (i = 0; i < n; i++) {
        int prevGreater = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // nearest greater on left found
            }
        }
        if (i != n-1)
            printf("%d, ", prevGreater);
        else
            printf("%d", prevGreater);
    }

    printf("\n");
    return 0;
}
