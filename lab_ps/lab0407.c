#include <stdio.h>
#include <math.h>
int main(){
    float buy,per;
    int shirt;
    scanf("%f\n%f\n%d", &buy, &per, &shirt);
    float re1 = (buy / 100 * (100 - per) * shirt),
            re2 = ((buy * 2) * floor(shirt / 3)) + ((shirt % 3) * buy);
    if (re1 > re2) {
        printf("Buy 2 Get 1\n%.2f", re2);
    } else {
        printf("Discount %.0f%%\n%.2f",per ,re1);
    }
}