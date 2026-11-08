#include <stdio.h>
#include <ctype.h>

int main() {
	char str[301], f;
	int count, check = 0;

	scanf("%[^\n] ", str);
	scanf("%c", &f);
	for (int i = 0; i < 301; i++) {
		if ( str[i] == '\0') {
			break;
		}
		f = tolower(f);	
		str[i] = tolower(str[i]);
		if ( f == str[i]) {
			count += 1;
		}
	}
    if (count != 0) {
	printf("There is/are %d \"%c\" in the above sentences.\n", count, f);
	printf("Position: ");
	for (int i = 0; i < 301; i++) {
		if (str[i] == '\0') {
			break;
		}
		if (f == str[i]) {
			if (count <= 1) {
				printf("%d", i + 1);
			} else {
				printf("%d, ", i + 1);
			}
			count--;
		}
    }
	} else {
		printf("Not found.");
	}
	return 0;
}