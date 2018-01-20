/* Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika.
Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie. */


#include <stdio.h>

int main (){
int liczba, suma=0;
printf ("Podaj liczbe :");
scanf ("%d", &liczba);

if (liczba<1)
printf ("Podana liczba musi byc wieksza od 0");
else {

  for(int i=1; i<=liczba; i++){
    suma+=i;
    }
  printf("Suma liczb to :%d\n",suma);

  }
}
