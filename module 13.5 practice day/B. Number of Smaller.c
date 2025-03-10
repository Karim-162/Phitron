#include <stdio.h>

int main() {
    int m, n, i, j, count;
    scanf("%d%d", &m, &n); // Input sizes of arrays
    int a[m], b[n], new[n];

    // Input array `a` (first array)
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Input array `b` (second array)
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    // Process each element in `b` to count elements less than it in `a`
    int prev_count = 0; // Keep track of the last count
    for (j = 0; j < n; j++) {
        count = prev_count; // Start from the last valid count
        for (i = count; i < m; i++) { // Continue from where the last iteration stopped
            if (a[i] < b[j]) {
                count++;
            } else {
                break; // Early stopping if `a[i] >= b[j]`
            }
        }
        new[j] = count; // Store the count for `b[j]`
        prev_count = count; // Update `prev_count` to avoid re-checking elements
    }

    // Output the results
    for (j = 0; j < n; j++) {
        printf("%d ", new[j]);
    }

    return 0;
}
