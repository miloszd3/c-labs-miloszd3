/* Zamiast komentarza / ... / i kropek ... poniżej wpisz kod, 
tak aby powstał program zliczający znaki odstępu,
tabulacji i nowego wiersza tekstu wczytanego z stdin. */

#include <stdio.h>
main() {
    int nb, nl, nt, c;
    nb = 0;
    nl = 0;
    nt = 0;
    while((c = getchar()) != '\n' && c != EOF){
        if (c == ' ') ++nb;
        else if (c == '\n') ++nl;
        else if (c == '\t') ++nt;
    }
   printf("liczba znaków: \n Odstępu = %d \n Tabulacji = %d \n Nowego wiersza = %d \n", nb, nt, nl );
}
