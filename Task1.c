#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Taking input from the user
    printf("Enter two integer: ");
    scanf("%d %d", &num1, &num2);


    // Adding both integers
    sum = num1 + num2;

    // Displaying the sum on the console
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

