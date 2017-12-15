#include "stdio.h"

int main (){
  int i = 0, j = 0;

  for (i = 0; i < 4; i++)
  {
    for(j = i; j >= 0; j--)
      putchar('*');
      printf("\n");
      j++;
    }

    printf("\n");

  for (i = 0; i < 4; i++)
  {
    for(j = i; j < 4; j++)
      putchar('*');
      printf("\n");
      j++;
    }

    printf("\n");

  for (i = 0; i < 4; i++)
  {
    for(j = i; j > 0; j--)
      putchar(' ');
      j++;
    for(j = i; j < 4; j++)
      putchar('*');
      printf("\n");
      j++;
    }

    printf("\n");

  for (i = 0; i < 4; i++)
  {
    for(j = i; j < 3; j++)
      putchar(' ');
      j++;
    for(j = i; j >= 0; j--)
      putchar('*');
      printf("\n");
      j++;
    }

  return 0;
}
