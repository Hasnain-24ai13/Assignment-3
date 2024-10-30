#include <stdio.h>

float calculateIncomeTax(float income) {
    float tax = 0;

    if (income > 250000) {
        if (income <= 500000) {
            tax = (income - 250000) * 0.05;
        } else if (income <= 1000000) {
            tax = 250000 * 0.05 + (income - 500000) * 0.10;
        } else {
            tax = 250000 * 0.05 + 500000 * 0.10 + (income - 1000000) * 0.15;
        }
    }

    return tax;
}

int main() {
    float income;

    printf("Enter your annual income: ");
    scanf("%f", &income);

    float tax = calculateIncomeTax(income);
    printf("Your income tax is: %.2f\n", tax);

    return 0;
}