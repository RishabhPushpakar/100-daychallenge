// Q. Find the majority element in an array (appears more than n/2 times)

#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;

    // Check each element
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority element: %d\n", majority);

    return 0;
}
