#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Finding the largest number using multiple if statements
    largest = num1;  // Assume num1 is the largest initially

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // output
    printf("Largest number is %d\n", largest);

    return 0;
}

