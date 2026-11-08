#include <stdio.h>

int main(){
    double num1;
    scanf("%lf", &num1);
    if (80 <= num1 & num1 <= 100) {
        printf("A");
    } else if (70 <= num1 & num1  < 80){
        printf("B");
    } else if(60 <= num1 & num1  < 70){
        printf("C");
    } else if(50 <= num1 & num1  < 60){
        printf("D");
    } else if(0 <= num1 & num1  < 50){
        printf("F");
    } else {
        printf("Out of Range");
    }
}