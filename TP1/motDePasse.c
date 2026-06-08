#include <ctype.h>
#include <stdio.h>
#include <string.h>
void verifierMotDePasse(char n[]) {
  int i, longueur, nombreChiffre = 0, nombreMajuscule = 0;
  longueur = strlen(n);
  for (i = 0; i < longueur; i++) {
    if (isupper(n[i])) nombreMajuscule++;
    if (isdigit(n[i])) nombreChiffre++;
  }
  char* spourChiffre = (nombreChiffre > 1) ? "s" : "";
  char* spourLettre = (nombreMajuscule > 1) ? "s" : "";

  if (nombreChiffre > 0 && nombreMajuscule > 0 && longueur >= 8)
    printf(
        "Le mot de passe fourni : %s est valide , car il a : \n%d chiffre%s , "
        "\n%d lettre%s majuscule%s ,\npossode une longueur de %d",
        n, nombreChiffre, spourChiffre, nombreMajuscule, spourLettre,
        spourLettre, longueur);
  else
    printf("Le mot de passe fourni : %s n'est pas valide", n);
}
int main() {
  char motDePasse[50];
  printf("Veuillez saisir votre mot de passe : ");
  scanf("%s", motDePasse);
  verifierMotDePasse(motDePasse);
  return 0;
}