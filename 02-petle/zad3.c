/*3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b */
#include <stdio.h>

int main(){
  int a, b, c;

  printf("Podaj liczbe a : " );
  scanf("%d", &a);
  printf("Podaj liczbe b : " );
  scanf("%d", &b);

  if(a<b)
  for(c = a + 1; c < b; c++){
  printf("%d ", c);
      }
  return 0;
}
