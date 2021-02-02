#include <stdio.h>

void printArrayRecur(int num[], int i);

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArrayRecur(nums, 0);
    return 0;
}

void printArrayRecur(int num[], int i) {
    int *num2 = num;
    printf("%d\n", num[i]);
    if (num[i+1] != 0) {
        printArrayRecur(num2, i+1);
    }
}