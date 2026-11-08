#include <stdio.h>
#include <ctype.h>

int main(void) {
    int target = getchar();

    // ข้ามจนจบบรรทัดแรก
    int c;
    while ((c = getchar()) != EOF && c != '\n') { }

    int count = 0;
    int t = tolower(target);

    while ((c = getchar()) != EOF && c != '\n') {
        if (tolower(c) == t) count++;
    }

    printf("%d\n", count);
    return 0;
}