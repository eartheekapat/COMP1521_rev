// Convert string of binary digits to 16-bit signed integer

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#define N_BITS 16

int16_t sixteen_in(char *bits);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Too few argument\n");
        exit(-1);
    }

    char bits[N_BITS];
    strcpy(bits, argv[1]);

    printf("%d\n", sixteen_in(bits));

    return 0;
}

//
// given a string of binary digits ('1' and '0')
// return the corresponding signed 16 bit integer
//
int16_t sixteen_in(char *bits) {

    // PUT YOUR CODE HERE
    assert(strlen(bits) == N_BITS);
    int16_t result = 0;
    for (int i = 0; i < N_BITS; i++) {
        if (bits[i] == '1') {
            result |= 1 << (N_BITS - i - 1);
        }
    }
    return result;
}

