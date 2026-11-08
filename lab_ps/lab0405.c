#include <stdio.h>

int main(){
    char cr;
    scanf("%c", &cr);;
    if (97 <= cr & cr <= 122) {
        printf("%c", cr - 32);
    }
    else if (65 <= cr & cr <= 90){
        printf("%c", cr + 32);
    }
    else {
        printf("error");
    }
}