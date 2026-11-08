#include <stdio.h>

int main(){
    char text1;
    char text2;
    char text3;
    char text4;
    char text5;
    scanf("%c %c %c %c %c",&text1 ,&text2, &text3, &text4, &text5);
    char one = text1 +1; char two = text3 + 1; char three = text5 +1;
    printf("%c\n", one);
    printf("%c\n", text2);
    printf("%c\n", two);
    printf("%c\n", text4);
    printf("%c", three);
    return 0;
}