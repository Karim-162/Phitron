#include <stdio.h>

// Function to perform the operation based on the given operator
int perform_operation(char operator, int a, int b) {
    if (operator == '+') {
        return a + b;
    } else if (operator == '-') {
        if (a > b) {
            return a - b; // যদি a বড় হয়, a থেকে b বাদ।
        } else {
            return b - a; // যদি b বড় হয়, b থেকে a বাদ।
        }
    } else if (operator == '*') {
        return a * b;
    } else if (operator == '/') {
        if (a > b) {
            return a / b; // যদি a বড় হয়, a কে b দিয়ে ভাগ।
        } else {
            return b / a; // যদি b বড় হয়, b কে a দিয়ে ভাগ।
        }
    } else {
        printf("Invalid operator\n");
        return 0; // Return 0 for invalid operator
    }
}

int main() {
    char operator;
    int a, b, result;

    // Input the operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Perform the operation and store the result
    if (operator == '/' && (a == 0 || b == 0)) {
        printf("Division by zero is not allowed.\n");
    } else {
        result = perform_operation(operator, a, b);
        printf("Result: %d\n", result);
    }

    return 0;
}

