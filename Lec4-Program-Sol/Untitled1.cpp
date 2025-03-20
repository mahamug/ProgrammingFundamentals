#include <stdio.h>

int main() {
    int num1, num2;

    // Taking two numbers from the user
    printf("Input: ");
    scanf("%d", &num1);
    printf("Input: ");
    scanf("%d", &num2);

    // Checking if num1 is a multiple of num2
    if (num2 != 0 && num1 % num2 == 0) {
        printf("Output: %d is a multiple of %d\n", num1, num2);
    } else {
        printf("Output: %d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}

