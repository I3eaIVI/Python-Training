#include <stdio.h>

int main() {
    int r = 1, x;
    char s[4], s2[4], s3[4], s4[4];

    scanf("%s", s);
    scanf("%s", s3);

    for (int i = 0; i < 4; i++) {
        s2[i] = s[i];
        s4[i] = s3[i];
    }
    int n1 = s2[1] - '0';
    if (s2[2] >= '0' && s2[2] <= '9') {
		n1 = n1 * 10 + (s2[2] - '0');
	}
    int n2 = s4[1] - '0';
    if (s4[2] >= '0' && s4[2] <= '9') {
		n2 = n2 * 10 + (s4[2] - '0');
	}
    x = n2 - n1;
    for (int i = 0; i < x; i++){
        r *= 2;
    }
    printf("%d", r);
    return 0;
}