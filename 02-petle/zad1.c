/* Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010. */
#include <stdio.h>

int main () {
  int potega = 1;
  
    while (potega * 2 < 2010) {
    potega = potega * 2;
    printf("%4d\n", potega);
  }
}
