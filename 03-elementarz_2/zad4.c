/* Zamiast komentarza / ... / i kropek ... poniżej wpisz kod, 
tak aby powstał program zliczający znaki odstępu,
tabulacji i nowego wiersza tekstu wczytanego z stdin. */

#include <stdio.h>
main() {
    int nb, nl, nt, c;
    nb = 0;
    nl = 0;
    nt = 0;
    printf("'Esc', a potem 'Enter'by zakończyć zliczanie) \n\n");
    while((c = getchar()) != '\0' && c != EOF){
        if (c == ' ') ++nb;
        else if (c == '\n') ++nl;
        else if (c == '\t') ++nt;
        else if (c == 27) break;
    }
   printf("liczba znaków: \n Odstępu = %d \n Tabulacji = %d \n Nowego wiersza = %d \n", nb, nt, nl );
}
