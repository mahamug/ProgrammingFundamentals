#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, sum;

    // 3-digit number as input from the user
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extracting digits
    digit1 = num / 100;        // Get the first digit (hundreds place)
    digit2 = (num / 10) % 10;  // Get the second digit (tens place)
    digit3 = num % 10;         // Get the third digit (units place)

    // sum of digits
    sum = digit1 + digit2 + digit3;

    // output
    printf("Sum of digits: %d\n", sum);

    return 0;
}

