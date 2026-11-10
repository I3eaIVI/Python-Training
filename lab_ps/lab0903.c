#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char* str = (char*) malloc(sizeof(char) * 101);
    scanf("%[^\n]s", str);
    char* ptr = str;
    while (*ptr != '\0'){
        ptr++;
    }
    unsigned int lenght = ptr - str;
    printf("%u", lenght);
    return 0;
}