#include <stdio.h>

int main() {
    int arr[5];  // Step 1: Initialize an array of size 5

    // Step 2: Set each element equal to its index
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    // Step 3: Display the array elements
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
