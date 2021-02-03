#include <stdio.h>
#include <stdlib.h>

void recurFn (int n);

int main(int argc, char **argv)
{
	if (argc != 2) {
		printf("Usage: %s NUMBER", argv[0]);
		return EXIT_FAILURE;
	}

	int n = strtol(argv[1], NULL, 10);
	
	recurFn (n);

	return EXIT_SUCCESS;
}

void recurFn (int n) {
	int nextN;
	if (n == 1) {
		printf("%d\n", n);
	} else if (n % 2 != 0) {
		printf("%d\n", n);
		nextN = 3*n + 1;
		recurFn (nextN);
	} else if (n % 2 == 0) {
		printf("%d\n", n);
		nextN = n / 2;
		recurFn (nextN);
	}
}
