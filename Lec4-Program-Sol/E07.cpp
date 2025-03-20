#include <stdio.h>

int main() {
    int number;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is odd or even
    if (number % 2 != 0) { // If remainder when divided by 2 is not zero, it's odd
        if (number % 5 == 0) { // Checking if it is divisible by 5
            printf("Number is odd & divisible by 5\n");
        } else {
            printf("Number is odd but not divisible by 5\n");
        }
    } else { // If not odd, then it's even
        printf("Number is even\n");
    }

    return 0;
}
