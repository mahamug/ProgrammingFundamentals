#include <stdio.h>

int main() {
    // Step 1: Initialize array with initializer list
    int arr[5] = {10, 20, 30, 40, 50};

    int sum = 0;

    // Step 2: Calculate the sum using a loop
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Step 3: Display the sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
