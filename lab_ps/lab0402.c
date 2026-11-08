#include <stdio.h>

int main(){
    float num1, num2, num3, sol;
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 > num2) {
        sol = num1;
        num1 = num2;
        num2 = sol;
    }
    if (num1 > num3) {
        sol = num1;
        num1 = num3;
        num3 = sol;
    }
    if (num2 > num3) {
        sol = num2;
        num2 = num3;
        num3 = sol;
    }
    printf("%.2f", num2);
}