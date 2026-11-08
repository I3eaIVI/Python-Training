#include <stdio.h>

int main() {
	char n[101], m[101], x[101];
	int count = 0, count2 = 0, t = 1;

	scanf("%[^\n]", n);
	for (int i = 0; i < 101; i++) {
		if (n[i] == '\0') {
			break;
		}
		count += 1;
	}
	for (int i = count - 1; i >= 0; i--) {	
		m[count2] = n[i];
		if (m[count2] != n[count2]) {
			t = 0;
			break;
		}
		count2 += 1;
	}
	if (t == 1) {
		printf("It is Palindrome.");
	} else {
		printf("It is not Palindrome.");
	}
	return 0;
}