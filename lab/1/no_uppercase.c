#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isUpper (char ch);

int main(void) {
	char ch;
	while (scanf("%c", &ch) == 1) {
		if (isUpper(ch)) {
			printf("%c", ch+32);
		} else {
			printf("%c", ch);
		}
	}
	return 0;
}

bool isUpper (char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return true;
	} else {
		return false;
	}
}
