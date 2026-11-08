#include <stdio.h>

int main(){
    char text[101];
    int n;
    scanf("%[^\n]", text);
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("%c", text[i]);
    }
    return 0;
}