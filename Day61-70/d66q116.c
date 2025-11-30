// Q. Find two indices such that nums[i] + nums[j] = target

#include <stdio.h>

int main() {
    int n, target, i, j;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d elements (positive integers):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    printf("Enter target value: ");
    scanf("%d", &target);

    int found = 0;

    // Brute force: check all pairs
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}
