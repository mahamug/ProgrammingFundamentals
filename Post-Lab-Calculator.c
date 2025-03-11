#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    // Displaying the menu
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Performing the operation based on user choice
    if (choice == 1) {
        // Addition
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 + num2;
        printf("Addition: %d\n", result);
    } else if (choice == 2) {
        // Subtraction
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 - num2;
        printf("Subtraction: %d\n", result);
    } else if (choice == 3) {
        // Multiplication
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 * num2;
        printf("Multiplication: %d\n", result);
    } else if (choice == 4) {
        // Division
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        if (num2 != 0) {
            result = num1 / num2;
            printf("Division: %d\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (choice == 5) {
        // Square
        printf("Enter a number: ");
        scanf("%d", &num1);
        result = num1 * num1;
        printf("Square: %d\n", result);
    } else {
        // Incorrect Option
        printf("Incorrect Option\n");
    }

    return 0;
}

