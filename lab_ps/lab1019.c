#include <stdio.h>
#include <string.h>

int main(void) {
    char s[128], t[128];
    int n = 0, c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c != '\r' && n < 120) s[n++] = (char)c;
    }
    s[n] = '\0';

    while (1) {
        int len = (int)strlen(s);
        int removed = 0;
        int m = 0;

        for (int i = 0; i < len; ) {
            if (i + 1 < len && s[i] == s[i + 1]) {
                // ข้ามคู่ที่เหมือนกัน
                i += 2;
                removed = 1;
            } else {
                t[m++] = s[i];
                i++;
            }
        }
        t[m] = '\0';

        if (!removed) break;

        printf("%s\n", t);
        strcpy(s, t);
    }

    return 0;
}