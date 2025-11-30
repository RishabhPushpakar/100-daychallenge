// Q. Product of array except self

#include <stdio.h>

int main() {
    int n, i, j;

    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute product for each element
    for (i = 0; i < n; i++) {
        int prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    // Print the result array
    printf("Answer array:\n");
    for (i = 0; i < n; i++) {
        if (i != n-1)
            printf("%d, ", answer[i]);
        else
            printf("%d", answer[i]);
    }
    printf("\n");

    return 0;
}
