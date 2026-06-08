#include <stdio.h>
#include <string.h>
int longueurChaine(char chaine[]) {
  int longueur = strlen(chaine);
  if (chaine[longueur - 1] == '\n') {
    chaine[longueur - 1] = '\0';
    longueur--;
  }
  return longueur;
}

int main() {
  char chaine[500];
  printf("Vueillez saisr la chaine dont vous voulez verifier la longueur : ");
  fgets(chaine, sizeof(chaine), stdin);
  int longueur = longueurChaine(chaine);
  puts(chaine);
  printf("%d", longueur);
  return 0;
}