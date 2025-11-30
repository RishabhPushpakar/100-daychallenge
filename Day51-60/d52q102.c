// Q. Find the index of the ceil of x in a sorted array.

#include <stdio.h>

int main() {
    int n, i, x;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d elements (sorted array):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value x
    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = -1;

    // Find ceil
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}
