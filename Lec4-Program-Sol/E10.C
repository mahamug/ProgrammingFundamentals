#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Taking input from user
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Sorting the numbers in descending order using simple if-else swapping
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Displaying numbers in descending order
    printf("Numbers in descending (decreasing) order are:\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
