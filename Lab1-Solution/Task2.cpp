#include <stdio.h>

int main() {
    int a, b, c;
    int result;

    // Taking input from the user
    printf("Enter the total 3 integers: ");
    scanf("%d %d %d", &a,  &b,  &c);


    // Solving the arithmetic expression (a + b * c) / 5
    result = (a + b * c) / 5;

    // Displaying the result on the console
    printf("The result of the expression (a + b * c) / 5 is: %d\n", result);

    return 0;
}

