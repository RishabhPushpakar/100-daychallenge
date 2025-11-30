// Q. Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, key;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; // Extra space for new element

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    printf("Enter the position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right from the position
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element
    arr[pos-1] = key;
    n++; // Increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
