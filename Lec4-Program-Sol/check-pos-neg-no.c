#include <stdio.h>

int main() {
    int number;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is positive, negative, or zero
    if (number > 0) {
        printf("Number is positive\n");
    } else if (number < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is zero\n");
    }

    return 0;
}
