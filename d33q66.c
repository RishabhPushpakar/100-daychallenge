// Q. Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;

    // Input size of the array
    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n+1]; // Extra space for new element

    // Input elements (sorted in ascending order)
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the position to insert
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > key)
            break;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = key;
    n++; // Increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
