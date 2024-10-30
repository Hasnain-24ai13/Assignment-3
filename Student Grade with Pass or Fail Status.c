#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;

    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    if (average < 50) {
        printf("You have failed. Average: %.2f\n", average);
    } else {
        if (average > 75) {
            printf("You got an A. Average: %.2f\n", average);
        } else {
            printf("You got a B. Average: %.2f\n", average);
        }
    }

    return 0;
}