#include <stdio.h>
#include <string.h>
void echangerCaractere(char chaine[], char c1, char c2) {
  int longueur = strlen(chaine);
  if (chaine[longueur - 1] == '\n') {
    chaine[longueur - 1] = '\0';
    longueur--;
  }
  for (int i = 0; chaine[i] != '\0'; i++) {
    if (chaine[i] == c1) {
      chaine[i] = c2;
    }
  }
}
int main() {
  char chaine[500], c1, c2;
  printf("Veuillez saisir votre chaine de caractere : ");
  fgets(chaine, sizeof(chaine), stdin);
  printf("Veuillez saisir le caractere dont vous voulez remplacez : ");
  scanf(" %c", &c1);
  printf("Veuillez saisir le caractere dont vous voulez le remplacer : ");
  scanf(" %c", &c2);
  printf("Votre chaine de caractere avant la substituion est : ");
  puts(chaine);
  echangerCaractere(chaine, c1, c2);
  printf("Votre chaine de caractere apres la substituion est : ");
  puts(chaine);
  return 0;
}