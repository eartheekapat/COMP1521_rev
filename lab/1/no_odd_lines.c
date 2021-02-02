#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int countChar (char line[]);

int main(void) {
	char line[MAX_LEN];
	while (fgets(line, MAX_LEN, stdin) != NULL) {
		if (countChar(line) % 2 == 0) {
			fputs(line, stdout);
		}
	}
}

int countChar (char line[]) {
	int count_ch = 0;
	for(int i = 0; line[i] != '\0'; i++) {
		count_ch++;
	}
	return count_ch;
}