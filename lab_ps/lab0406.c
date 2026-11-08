#include <stdio.h>
#include <ctype.h>

int main(){
    char cr;
    scanf("%c", &cr);;
    if (islower(cr)) {
        printf("lowercase");
    }
    else if (isupper(cr)){
        printf("uppercase");
    }
    else if (isalnum(cr)){
        printf("number");
    }
    else {
        printf("error");
    }
}