#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc > 11) {
		printf("Too many argument");
	}
	int min, max, sum, prod, mean;
	for (int i = 1; i < argc; i++) {
		// first loop assign the number to all 
		int num = strtol(argv[i], NULL, 10);
		if (i == 1) {
			min = num;
			max = num;
			sum = num;
			prod = num;
			mean = num;
		} else {
			if (num < min) {
				min = num;
			}
			if (num > max) {
				max = num;
			}
			sum += num;
			prod *= num;
			mean = sum / (argc - 1);
		}
	}
	printf("MIN:  %d\n", min);
	printf("MAX:  %d\n", max);
	printf("SUM:  %d\n", sum);
	printf("PROD:  %d\n", prod);
	printf("MEAN:  %d\n", mean);

	return 0;
}
