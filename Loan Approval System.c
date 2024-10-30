#include <stdio.h>

int main() {
    float monthlyIncome;
    int hasExistingLoan;
    int overduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);

    if (monthlyIncome > 30000) {
        printf("Do you have an existing loan? (1 for Yes, 0 for No): ");
        scanf("%d", &hasExistingLoan);

        if (hasExistingLoan == 1) {
            printf("Do you have any overdue payments? (1 for Yes, 0 for No): ");
            scanf("%d", &overduePayments);

            if (overduePayments == 1) {
                printf("You are ineligible for the loan due to overdue payments.\n");
            } else {
                printf("You may qualify for the loan.\n");
            }
        } else {
            printf("You may qualify for the loan.\n");
        }
    } else {
        printf("You are ineligible for the loan due to low monthly income.\n");
    }

    return 0;
}