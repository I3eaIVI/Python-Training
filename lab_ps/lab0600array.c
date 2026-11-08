#include <stdio.h>

int main(){
    unsigned int n[5], index;

    for (int i = 0; i < 5; i++){
        scanf("%u", &n[i]);
    }
    scanf("%u", &index);

    printf("Value at index %u is %u", index, n[index]);
    return 0;
}