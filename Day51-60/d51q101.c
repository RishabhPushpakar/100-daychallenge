// Q. Find first and last occurrence of a target in a sorted array.

#include <stdio.h>

int main() {
    int n, i, target;
    
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input sorted array elements
    printf("Enter %d elements (sorted array):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}
