#include <stdio.h>
int main(){
    char num[6];
    scanf("%s", num);
    char total[6];
    total[0] = num[2];
    total[1] = num[3];
    total[2] = num[4];
    total[3] = num[0];
    total[4] = num[1];
    total[5] = '\0';
    printf("%s\n", total);
    return 0;
}