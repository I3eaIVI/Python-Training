#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, c;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("method = %lld", b);

    return 0;
}