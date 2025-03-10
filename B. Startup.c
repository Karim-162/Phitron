#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n, k; // Number of shelves and bottles
        scanf("%d %d", &n, &k);

        // Arrays to store the costs for each brand
        int costs[k + 1][200]; // Maximum of 200 costs per brand (adjust as necessary)
        int count[k + 1];      // Number of costs for each brand

        // Initialize counts to 0
        for (int i = 0; i <= k; i++) {
            count[i] = 0;
        }

        // Read the bottle data
        for (int i = 0; i < k; i++) {
            int bi, ci;
            scanf("%d %d", &bi, &ci);
            costs[bi][count[bi]] = ci; // Store the cost in the corresponding brand
            count[bi]++;
        }

        // Calculate the maximum earnings
        int total_earnings = 0;
        int shelves_used = 0;

        // Process each brand
        for (int i = 1; i <= k; i++) {
            // Sort costs of the current brand in descending order
            for (int j = 0; j < count[i]; j++) {
                for (int l = j + 1; l < count[i]; l++) {
                    if (costs[i][j] < costs[i][l]) {
                        // Swap costs[i][j] and costs[i][l]
                        int temp = costs[i][j];
                        costs[i][j] = costs[i][l];
                        costs[i][l] = temp;
                    }
                }
            }

            // Add the top costs to maximize earnings, limited by available shelves
            for (int j = 0; j < count[i] && shelves_used < n; j++) {
                total_earnings += costs[i][j];
                shelves_used++;
            }
        }

        // Output the result
        printf("%d\n", total_earnings);
    }

    return 0;
}
