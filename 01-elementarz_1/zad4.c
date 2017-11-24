/* Napisać program obliczający silnię z podanej,
 niezbyt dużej, liczby naturalnej */

#include <stdio.h>
int main() {
  int a;
  int silnia;
  int suma = 1;

  scanf("%d",&a);
  for(int i=a;i>1;i--)
  {
    silnia = suma * i;
    suma=silnia;
  }printf("Silnia z liczby %d wynosi\n %d ",a,suma);
}
