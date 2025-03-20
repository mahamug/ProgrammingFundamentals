#include <stdio.h>

int main() {
    float x, y;

    // Taking input from the user
    printf("Enter x coordinate of the point: ");
    scanf("%f", &x);

    printf("Enter y coordinate of the point: ");
    scanf("%f", &y);

    // Checking the location of the point
    if (x == 0 && y == 0) {
        printf("The point (%f, %f) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%f, %f) lies on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%f, %f) lies on the X-axis.\n", x, y);
    } else if (x > 0 && y > 0) {
        printf("The point (%f, %f) resides in the First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%f, %f) resides in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%f, %f) resides in the Third Quadrant.\n", x, y);
    } else {
        printf("The point (%f, %f) resides in the Fourth Quadrant.\n", x, y);
    }

    return 0;
}
