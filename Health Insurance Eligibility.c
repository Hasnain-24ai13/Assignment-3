#include <stdio.h>

int main() {
    int age;
    char hasSeriousIllness;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are not eligible for health insurance.\n");
    } else if (age > 45) {
        printf("Have you had any serious illness? (Y for Yes, N for No): ");
        scanf(" %c", &hasSeriousIllness);

        if (hasSeriousIllness == 'Y' || hasSeriousIllness == 'y') {
            printf("You are not eligible for health insurance.\n");
        } else {
            printf("You are eligible for health insurance.\n");
        }
    } else {
        printf("You are eligible for health insurance.\n");
    }

    return 0;
}