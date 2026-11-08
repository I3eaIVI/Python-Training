#include <stdio.h>

int main() {
	char str[101], revers[101];
	int count;
    
	scanf("%[^\n]", str);
	for (int i = 0; i < 101; i++){
		if (str[i] == '\0') {
			break;
		} else {
			count += 1;
		}
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}