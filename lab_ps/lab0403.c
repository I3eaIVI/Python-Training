#include <stdio.h>

int main(){
    char sg;
    scanf("%c", &sg);
    if (sg == 'A' | sg =='a') {
        printf("Genius");
    } else if (sg == 'B' | sg =='b'){
        printf("Good");
    } else if(sg == 'C' | sg =='c'){
        printf("Try Harder");
    } else if(sg == 'D' | sg =='d'){
        printf("Very Bad");
    } else if(sg == 'F' | sg =='f'){
        printf("Fail");
    } else {
        printf("Invalid Input");
    }
}