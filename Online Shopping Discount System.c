#include <stdio.h>

int main() {
    float purchaseAmount, finalAmount;
    char isMember;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

    finalAmount = purchaseAmount;

    if (purchaseAmount > 2000) {
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &isMember);

        if (isMember == 'Y' || isMember == 'y') {
            finalAmount *= 0.80;
        } else {
            finalAmount *= 0.90;
        }
    }

    printf("Final amount: %.2f\n", finalAmount);

    return 0;
}