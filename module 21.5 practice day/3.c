#include <stdio.h>

// Function to calculate the sum of the first and last digit of a number
int sum_first_last(int num)
{
    int last_digit = num % 10; // Extract the last digit
    int first_digit = num;    // Initialize first_digit with num

    // Loop to extract the first digit
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }

    return first_digit + last_digit; // Return the sum
}

int main()
{
    int n, num, total_sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n); // Input the size of the array

    printf("Enter %d four-digit numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num); // Input each number
        total_sum += sum_first_last(num); // Add the sum of first and last digits to total_sum
    }

    printf("Sum = %d\n", total_sum); // Print the total sum

    return 0;
}

