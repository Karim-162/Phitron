#include <stdio.h>
#include <string.h>

int main()
{
    int n, max_count = 0, current_count = 1;
    char str[101]; // Increased size to handle up to 100 characters + null terminator.

    // Read input
    scanf("%d", &n);
    scanf("%s", str);

    // Iterate through the string to find the maximum consecutive signs
    for (int i = 1; i < n; i++) // Start from the second character
    {
        if (str[i] == str[i - 1])
        {
            current_count++; // Increment the count if current and previous signs are the same
        }
        else
        {
            if (current_count > max_count)
            {
                max_count = current_count; // Update maximum count
            }
            current_count = 1; // Reset count for the next sequence
        }
    }

    // Final check for the last sequence
    if (current_count > max_count)
    {
        max_count = current_count;
    }

    // Print the result
    printf("%d\n", max_count);

    return 0;
}

