#include <stdio.h>

int main() {
    float balance, withdrawal;
    char permit;

    printf("Enter balance: ");
    scanf("%f", &balance);
    
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);

    if (balance < withdrawal) {
        printf("Insufficient balance.\n");
    } else {
        if (withdrawal > 10000) {
            printf("Special permit needed (Y/N): ");
            scanf(" %c", &permit);
            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved.\n");
            } else {
                printf("Withdrawal denied. Special permit required.\n");
            }
        } else {
            printf("Withdrawal approved.\n");
        }
    }

    return 0;
}