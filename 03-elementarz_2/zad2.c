/*2. Zamiast komentarzy / ... / w programie poniżej wpisz kod tak,
 aby powstał program, który sprawdza czy podana liczba całkowita jest pierwsza. */
 
#include <stdio.h>
int main() {
  int n,jest_pierwsza,i;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
   for (i = 2; i*i <= n; i++) {
      jest_pierwsza = 0;
  }
 printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
}
