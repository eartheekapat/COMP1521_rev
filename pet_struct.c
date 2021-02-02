#include <stdio.h>
#include <stdlib.h>

struct pet
{
    char name[20];
    char type[10];
    int age;
    float weight;
};

int main () {
    struct pet eg = {"Fluffy", "axolotl", 7, 300};

    printf("%s %s %d %f", eg.name, eg.type, eg.age, eg.weight);

    return 0;
}