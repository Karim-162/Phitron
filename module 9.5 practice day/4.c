#include <stdio.h>

int main() {
    int N;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Check for valid input
    if (N <= 0) {
        printf("Please enter a positive integer for the size of the array.\n");
        return 1; // Exit with error
    }

    int arr[N]; // Declare the array of size N

    // Input the elements of the array
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Print each value and the rest of the values
    for (int i = 0; i < N; i++) {
        printf("%d -", arr[i]);
        for (int j = 0; j < N; j++) {
            if (i != j) { // Print all other values
                printf(" %d", arr[j]);
            }
        }
        printf("\n"); // New line for each element
    }

    return 0; // Successful completion
}

