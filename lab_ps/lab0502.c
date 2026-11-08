#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    i = n;
    do {
        printf("%d ", i);
        i--;
    }
    while (i > 0);
    return 0;
}