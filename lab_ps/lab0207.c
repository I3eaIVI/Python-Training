#include <stdio.h>

int main(){
    char text1[30];
    char text2[30];
    int text3;
    int d,m,y;
    float text4;
    scanf("%s", text1);
    scanf("%s", text2);
    scanf("%d", &text3);
    scanf("%d/%d/%d", &d, &m, &y);
    scanf("%f", &text4);
    printf("Fullname: %s %s\n", text1, text2);
    printf("ID: %d\n", text3);
    printf("DOB: %02d-%02d-%02d\n", d, m, y);
    printf("GPA: %.2f\n", text4);
    return 0;
}
