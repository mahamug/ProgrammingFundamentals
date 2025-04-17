#include <stdio.h>

// Function prototype
int reverseDigits(int num);

int main() {
    int number, reversed;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    reversed = reverseDigits(number);

    // Output
    printf("Reverse Digits: %d\n", reversed);

    return 0;
}

// Function to reverse the digits
int reverseDigits(int num) {
    int rev = 0;

    while (num != 0) {
        int digit = num % 10;      // Get last digit
        rev = rev * 10 + digit;    // Add digit to reversed number *10 makes sapce fr nxt no
        num = num / 10;            // Remove last digit from original number
    }

    return rev;
}
