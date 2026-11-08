#include <stdio.h>

int main() {
    int n,total = 0;
    scanf("%d", &n);
    while(n != -9)
    {
        total += n;
        scanf("%d", &n);
    }
    printf("%d", total);
}