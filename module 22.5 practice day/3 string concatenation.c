#include <stdio.h>

// Function to concatenate strings
void concatenateStrings(int m, char result[]) {
    char temp[101]; // Temporary string to hold each input
    int pos = 0;    // Position in the result string

    for (int i = 0; i < m; i++) {
        scanf(" %s", temp); // Read each string with spaces

        // Copy characters of temp to result
        for (int j = 0; temp[j] != '\0'; j++) {
            result[pos++] = temp[j];
        }

        // Add a space after each word except the last one
        if (i < m - 1) {
            result[pos++] = ' ';
        }
    }

    result[pos] = '\0'; // Null-terminate the result string
}

int main() {
    int m;
    char result[1001] = ""; // Initialize result string as empty

    printf("Enter the number of strings: ");
    scanf("%d", &m); // Read the number of strings

    printf("Enter the strings:\n");
    concatenateStrings(m, result); // Call the function to concatenate

    printf("Concatenated String:\n%s\n", result); // Print the result

    return 0;
}
