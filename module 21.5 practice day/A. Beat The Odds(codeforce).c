#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n); // Input the size of the array
    long long odd = 0, even = 0, num;

    // Loop to process the array elements
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &num);
        if (num % 2 == 0) {
            even++; // Count even numbers
        } else {
            odd++;  // Count odd numbers
        }
    }

    // Find the minimum of odd and even counts
    long long ans = (odd < even) ? odd : even;
    printf("%lld\n", ans); // Output the result
}

int main() {
    int t;
    scanf("%d", &t); // Input the number of test cases

    while (t--) {
        solve(); // Call solve for each test case
    }

    return 0;
}
