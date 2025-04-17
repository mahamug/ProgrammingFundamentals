#include <stdio.h>

// Function prototype
void findPrimeBetween(int first, int second);

int main() {
    int first, second;

    // Step 1: Take input from the user
    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    // Step 2: Call function to find primes
    findPrimeBetween(first, second);

    return 0;
}

// Step 3: Function definition
void findPrimeBetween(int first, int second) {
    int i, j, isPrime;
     int found = 0;  // Flag to track if any prime is found
    printf("Prime numbers between %d and %d are:\n", first, second);

    // Step 4: Loop through numbers between first and second
    for(i = first + 1; i < second; i++) {

        isPrime = 1;  // Assume i is prime
        

        // Step 5: Check if i is divisible by any number from 2 to i/2
        for(j = 2; j <= i / 2; j++) {// fact of 10 is 1 2 5 10 10/2 =5 after 5 is this / by itself
            if(i % j == 0) {
                isPrime = 0;  // i is not prime
                break;        // No need to check further
            }
        }

        // Step 6: If i is prime, print it
        if(isPrime == 1 && i > 1) {
            printf("%d ", i);
             found = 1;  // At least one prime found
        }
    }
    if(found == 0) {
        printf("No prime numbers found between %d and %d.", first, second);
    }
}
