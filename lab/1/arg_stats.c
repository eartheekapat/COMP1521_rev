#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	printf("Program name: ./my_args\n");
	if (argc == 1) {
		printf("There are no other arguments");
	} else {
		printf("There are %d arguments\n", argc);
		for (int i = 1; i <= argc; i++) {
			printf("\tArgument %d is \"%s\"", i, argv[i]);
		}
	}
	return 0;
}
