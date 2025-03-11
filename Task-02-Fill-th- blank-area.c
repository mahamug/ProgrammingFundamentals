#include <stdio.h>

int main() {
    int marks;

    // Taking obtained marks as input from the user
    printf("Enter the obtained marks: ");
    scanf("%d", &marks);

    // Displaying grade based on the criteria
    if (marks >= 80) {
        printf("The grade on %d marks is A\n", marks);
    } else if (marks >= 70) {
        printf("The grade on %d marks is B\n", marks);
    } else if (marks >= 60) {
        printf("The grade on %d marks is B-\n", marks);
    } else if (marks >= 50) {
        printf("The grade on %d marks is C\n", marks);
    } else {
        printf("The grade on %d marks is F\n", marks);
    }

    return 0;
}


