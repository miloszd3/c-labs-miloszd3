/* Napisz program wyświetlający poniższą szachownicę */

#include <stdio.h>
int main() {
  
const  char  *linijka=" * * * * * * * *";
for (int i = 4; i > 0; i--) {
printf("%s\n %s\n",linijka, linijka );
  }
}
