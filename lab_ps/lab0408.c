#include <stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d\n%d\n%d", &num1, &num2, &num3);
    if (num1 + num2 > num3 && num1 + num3 > num2 && num3 + num2 > num1) {
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle is not valid.");
    }
}