#include <stdio.h>

int main() {
    float mathScore, scienceScore;

    printf("Enter the Math score: ");
    scanf("%f", &mathScore);
    printf("Enter the Science score: ");
    scanf("%f", &scienceScore);

    if (mathScore >= 50 && scienceScore >= 50) {
        printf("The student is eligible for admission.\n");
        if (mathScore > 80 && scienceScore > 80) {
            printf("The student qualifies for a scholarship.\n");
        } else {
            printf("The student does not qualify for a scholarship.\n");
        }
    } else {
        printf("The student is not eligible for admission.\n");
    }

    return 0;
}