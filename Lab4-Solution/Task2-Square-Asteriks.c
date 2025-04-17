#include <stdio.h>

// Function to print square pattern
void squarePattern(int n) {
	int i;
    for (i = 1; i <= n; i++) {         // Outer loop for rows
    int j;
        for ( j= 1; j <= n; j++) {     // Inner loop for columns
            printf("* ");
        }
        printf("\n");  // Move to next line after each row
    }
}

int main() {
    int num;

    // Read number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to print pattern
   squarePattern(num);

    return 0;
}
