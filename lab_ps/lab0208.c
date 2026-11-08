#include <stdio.h>

int main(){
    char fname1[60];
    char sname1[60];
    char person2[60];
    char person3[60];
    scanf("%s\n%s", fname1 , sname1);
    scanf(" %59[^\n]", person2);
    scanf(" %59[^\n]", person3);
    printf("Person 1: %s %s\n", fname1 ,sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);
    return 0;
}
