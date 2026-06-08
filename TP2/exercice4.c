#include <stdio.h>
#include <string.h>
int Palindrome(char chaine[]) {
  int longueur, estPalindrome = 1;
  longueur = strlen(chaine);
  if (chaine[longueur - 1] == '\n') {
    chaine[longueur - 1] = '\0';
    longueur--;
  }
  for (int i = 0; i < longueur / 2; i++) {
    if (chaine[i] != chaine[longueur - i - 1]) {
      estPalindrome = 0;
    }
  }
  return estPalindrome;
}
int main() {
  int estPalindrome;
  char chaine[200];
  printf("Vueillez saisir votre chaine de caractere : ");
  fgets(chaine, sizeof(chaine), stdin);
  estPalindrome = Palindrome(chaine);
  if (estPalindrome) {
    printf("Votre chaine de caractere ( %s ) est un palindrome", chaine);
  } else {
    printf("Votre chaine de caractere ( %s ) n'est pas un palindrome", chaine);
  }

  return 0;
}