#include <stdio.h>

void checkBloodDonationEligibility

(int age, float weight) {
    
    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("You are eligible to donate blood.\n");
        } else {
            printf("You are not eligible to donate blood because you weigh less than 50 kg.\n");
        }
    } else {
        printf("You are not eligible to donate blood because your age is not between 18 and 65.\n");
    }
}

int main() {
    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    checkBloodDonationEligibility(age, weight);

    return 0;
}