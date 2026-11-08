#include <stdio.h>
#include <string.h>

// อ่านทั้งบรรทัด ตัด \r \n และช่องว่างท้ายบรรทัดทิ้ง
void read_line(char *buf, int max) {
    int n = 0, c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (n < max - 1) buf[n++] = (char)c;
    }
    while (n > 0 && (buf[n - 1] == '\r' || buf[n - 1] == ' ' || buf[n - 1] == '\t')) n--;
    buf[n] = '\0';
}

void print_row(const char *s, int w) {
    int inner = w - 2;
    int len = (int)strlen(s);
    int gap = inner - len;
    if (gap < 0) gap = 0;

    int right = gap / 2;
    int left = gap - right;   // ส่วนเกินอยู่ฝั่งซ้าย ตามตัวอย่าง IT

    putchar('*');
    for (int i = 0; i < left; i++) putchar(' ');
    printf("%s", s);
    for (int i = 0; i < right; i++) putchar(' ');
    putchar('*');
    putchar('\n');
}

int main(void) {
    int w, c;
    char a[256], b[256];

    scanf("%d", &w);
    while ((c = getchar()) != EOF && c != '\n') { }   // ข้ามจนจบบรรทัดแรก

    read_line(a, 256);
    read_line(b, 256);

    for (int i = 0; i < w; i++) putchar('*');
    putchar('\n');
    print_row(a, w);
    print_row(b, w);
    for (int i = 0; i < w; i++) putchar('*');
    putchar('\n');

    return 0;
}