#include <stdio.h>

int main() {
    int n, i, max, min;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element of the array
    max = arr[0];
    min = arr[0];

    // Traverse the array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the maximum and minimum elements
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
