#include <stdio.h>

int main(void) {
    float account, cash;
    scanf("%f %f", &account, &cash);
    int failCount = 0;
    char op;
    while (1) {
        scanf(" %c", &op);
        if (op == 'E') {
            char next;
            scanf(" %c", &next);
            break;
        }
        float amount;
        scanf("%f", &amount);
        if (op == 'D') {
            if (cash < amount) {
                failCount++;
            } else {
                account += amount;
                cash -= amount;
                failCount = 0;
            }
        } else if (op == 'W') {
            if (account < amount) {
                failCount++;
            } else {
                account -= amount;
                cash += amount;
                failCount = 0;
            }
        }
        if (failCount >= 3) {
            break;
        }
    }
    printf("%.2f\n", account);
    printf("%.2f\n", cash);

    return 0;
}