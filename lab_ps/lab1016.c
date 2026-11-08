#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[200];
    int n = 0, c;

    // อ่านทีละตัวจนจบบรรทัด
    while ((c = getchar()) != EOF && c != '\n') {
        if (c != '\r' && n < 199) line[n++] = (char)c;
    }
    line[n] = '\0';

    // นับจำนวนคำ
    int words = 0, in_word = 0;
    for (int i = 0; i < n; i++) {
        if (isspace((unsigned char)line[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    printf("%d words\n", words);
    printf("----\n");

    // พิมพ์แต่ละคำเป็นตัวพิมพ์เล็ก พร้อมความยาว
    int i = 0;
    while (i < n) {
        while (i < n && isspace((unsigned char)line[i])) i++;
        if (i >= n) break;

        int start = i;
        while (i < n && !isspace((unsigned char)line[i])) i++;

        for (int k = start; k < i; k++) {
            putchar(tolower((unsigned char)line[k]));
        }
        printf(" : %d\n", i - start);
    }

    return 0;
}