#include <stdio.h>

// Function to calculate GPA
float calculateGPA(int marks[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        // Convert marks to GPA for each subject (assuming scale: 85-100 = 4.0, 80 = 3.7, etc.)
        if (marks[i] >= 85) total= total + 4.0;
        else if (marks[i] >= 80) total = total + 3.7;
        else if (marks[i] >= 75) total = total + 3.3;
        else if (marks[i] >= 70) total = total + 3.0;
        else if (marks[i] >= 65) total = total + 2.7;
        else if (marks[i] >= 60) total = total + 2.3;
        else if (marks[i] >= 50) total = total + 2.0;
        else total += 0.0;//83,99,72,77,82//34.
    }
    return total / size;
}

int main() {
    int marks[5];
    printf("Enter marks for 5 subjects:\n");

    // Taking input from user
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);//subject1: ..subject2:..
        scanf("%d", &marks[i]);
    }

    // Calculate GPA
    float gpa = calculateGPA(marks, 5);

    // Display GPA
    printf("GPA: %.2f\n", gpa);

    return 0;
}
