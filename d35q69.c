// Q. Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest, secondLargest;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;

    // Find largest and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is %d\n", secondLargest);

    return 0;
}
