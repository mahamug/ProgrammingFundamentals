#include <stdio.h>

int main() {
    int a, b, c, secondLargest;

    // Read 3 numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic ->if a is btwn b &c =a sl if b is btwn a & c =b sl else c is sl
    if ((a > b && a < c) || (a > c && a < b)) {
        secondLargest = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        secondLargest = b;
    } else {
        secondLargest = c;
    }

    // Display the result
    printf("Second Largest number is %d\n", secondLargest);

    return 0;
}
