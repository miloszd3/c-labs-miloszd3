#include <stdio.h>

int main() {
  int i, n, jest_pierwsza;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  for (i = 10; i <= n; i++,)
     {
      jest_pierwsza = 0;
    }
  printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
}

