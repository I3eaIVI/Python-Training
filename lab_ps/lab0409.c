#include <stdio.h>

int main(){
    double num1;
    scanf("%lf", &num1);
    if (0 <= num1 && num1 <= 5.032) {
        printf("Bangkok");
    }
    else if (5.032 < num1 && num1 <= 35.477) {
        printf("Samut Prakarn");
    }
    else if (35.477 < num1 && num1 <= 52.900) {
        printf("Chachoengsao");
    }
    else if (52.900 < num1 && num1 <= 58.855) {
        printf("Chon Buri");
    }
    else{
        printf("InValid");
    }
}