// Q. Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key;
    int low, high, mid;
    int found = 0;

    // Input size of the array
    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];

    // Input elements (should be sorted)
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found)
        printf("%d is found at position %d.\n", key, mid + 1);
    else
        printf("%d is not found in the array.\n", key);

    return 0;
}
