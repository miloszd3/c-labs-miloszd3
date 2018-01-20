#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b) {
  return sqrt((a*a)+(b*b));
}
int main() {
  double a, b;
  printf("Podaj dlugosci przyprostokatnych:\n");
  printf("a : ");
  scanf("%lf", &a);
  printf("b : ");
  scanf("%lf", &b);
  printf("Przeciwprostokatna c wynosi : %lf\n", przeciwprostokatna(a, b));
}
