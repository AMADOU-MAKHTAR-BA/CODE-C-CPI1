#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
  int a, b, somme;
  if (argc != 3) {
    printf(
        "Attention !!! \n Trois variables ( passees en ligne de commande ) "
        "sont necessaires pour cette fonction");
    return 1;
  }
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  somme = a + b;
  printf("La somme des arguments donne : %d", somme);
  return 0;
}