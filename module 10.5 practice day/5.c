#include <stdio.h>

int main() {
    int N, i, j, num, isPrime;

    // Input the size of the array
    printf("Enter the size of the array (positive integer N): ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];
    printf("Enter %d positive integers:\n", N);

    // Input the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Variables to count prime numbers
    int count = 0;
    int primes[N]; // Array to store prime numbers

    // Check each number in the array
    for (i = 0; i < N; i++) {
        num = arr[i];
        isPrime = 1; // Assume the number is prime

        if (num <= 1) {
            isPrime = 0; // 0 and 1 are not prime
        } else {
            for (j = 2; j <= num / 2; j++) {
                // Check divisibility of num
                if (num % j == 0) {
                    isPrime = 0; // Not prime
                    break; // Exit the loop
                }
            }
        }

        // If the number is prime, store it
        if (isPrime) {
            primes[count] = num; // Store the prime number
            count++; // Increment the count of prime numbers
        }
    }

    // Print the count of prime numbers
    printf("%d\n", count);

    // Print the prime numbers
    if (count > 0) {
        for (i = 0; i < count; i++) {
            printf("%d ", primes[i]);
        }
        printf("\n");
    } else {
        printf("\n"); // Print a blank line if no prime numbers found
    }

    return 0;
}
