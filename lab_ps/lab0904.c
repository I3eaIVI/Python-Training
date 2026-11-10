#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char* str = (char*) malloc(sizeof(char) * 101);
    scanf("%[^\n]s", str);
    char* ptr = str;
    while (*ptr != '\0'){
        ptr++;
    }
    ptr--;
    while (ptr >= str){
        printf("%c", *ptr--);
    }
    return 0;
}