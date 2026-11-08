#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char buf[1024];
    int chars = 0, words = 0, lines = 0;
    int c;

    while (1) {
        int n = 0;

        // อ่านทีละตัวจนจบบรรทัด
        while ((c = getchar()) != EOF && c != '\n') {
            if (c != '\r' && n < 1023) buf[n++] = (char)c;
        }
        if (c == EOF && n == 0) break;
        buf[n] = '\0';

        // บรรทัดที่มีแค่ '.' คือจุดสิ้นสุดการรับข้อความ
        if (strcmp(buf, ".") == 0) break;

        lines++;

        int in_word = 0;
        for (int i = 0; buf[i] != '\0'; i++) {
            unsigned char ch = (unsigned char)buf[i];

            if (isalnum(ch)) chars++;   // นับเฉพาะตัวอักษร/ตัวเลข

            if (isspace(ch)) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                words++;                // เริ่มคำใหม่
            }
        }

        if (c == EOF) break;
    }

    printf("Char = %d, word = %d, line = %d\n", chars, words, lines);
    return 0;
}