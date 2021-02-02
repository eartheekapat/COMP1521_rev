#include<stdio.h>

int main ()
{
  long int binary, hexadecimal = 0, j = 1, remain;

  printf ("Enter binary number: ");
  scanf ("%ld", &binary);

  while (binary != 0)
    {
      remain = binary % 10;
      hexadecimal = hexadecimal + remain * j;
      j = j * 2;
      binary = binary / 10;
    }

  printf ("Hexadecimal value: %lX\n", hexadecimal);

  return 0;
}