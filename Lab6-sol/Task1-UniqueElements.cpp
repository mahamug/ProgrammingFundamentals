#include <stdio.h>

int main() {
    int arr[5];
    int isUnique;
    int foundUnique = 0;

    // Step 1: Input values from user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 2: Find and display unique elements
    printf("\nUnique elements are:\n");

    for (int i = 0; i < 5; i++) {
        isUnique = 1;
        for (int j = 0; j < 5; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d\n", arr[i]);
            foundUnique = 1;
        }
    }

    // Step 3: If no unique element found
    if (!foundUnique) {
        printf("No element is unique\n");
    }

    return 0;
}
