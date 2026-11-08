#include <stdio.h>
#include <ctype.h>

int main(void) {
    char code[] = "qpyxbaiwgzvfuthsojlkdecnmr", text_in[201], text_out[201];
    int size, code_location, is_lower = 0;
    
    scanf("%[^\n]", text_in);

    for (int i = 0; i < 201; i++) {
        if (text_in[i] == '\0'){
            size = i;
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        if (text_in[i] == ' '){
            printf(" ");
            continue;
        }
        if(text_in[i] >= 97 && text_in[i] <= 123)
            is_lower = 1;
        else
            is_lower = 0;

        for (int j = 0; j < 26; j++) {
            if(tolower(text_in[i]) == code[j]){
                if (is_lower)
                    printf("%c", code[(j+5)%26]);
                else
                    printf("%c", toupper(code[(j+5)%26]));
            }
        }
    }

    return 0;
}