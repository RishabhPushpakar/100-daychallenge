// Q. Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Display result
    if (found)
        printf("%d is found at position %d.\n", key, i + 1);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
