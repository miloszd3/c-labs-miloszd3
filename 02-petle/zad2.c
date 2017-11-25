/* Napisz program wyświetlający poniższą szachownicę */

#include <stdio.h>
int main() {
  
const  char  *szachownica=" * * * * * * * *";
for (int i = 4; i > 0; i--) {
printf("%s\n %s\n",szachownica, szachownica );
  }
}
