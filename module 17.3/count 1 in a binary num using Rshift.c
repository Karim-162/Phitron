#include <stdio.h>

int main() {
    unsigned int num; // To store the input number
    int count = 0;    // To count the number of 1s

    // Input a number
    printf("Enter a number: ");
    scanf("%u", &num);

    // Count 1s using right shift
    while (num > 0) {
        // Check if the last bit is 1
        if (num & 1) {
            count++;
        }
        // Right shift the number
        num = num >> 1;
    }

    // Output the result
    printf("The number of 1s in the binary representation is: %d\n", count);

    return 0;
}

