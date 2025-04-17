#include <stdio.h>
#include <math.h>   // Required for pow() function

// Function prototype
void fun(int x);

int main() {
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function
    fun(num);

    return 0;
}

// Function definition
void fun(int x) {
    int square = (int)pow(x, 2);  // pow() returns double, so we must explicit cast to int otherwise simple use x*x not mth
    // if not caste it might lose decimal or give warning as it tries implicit cast mean auto convert the double in int 
	printf("Square is: %d\n", square);
}
