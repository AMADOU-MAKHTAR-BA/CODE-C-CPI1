#include <stdio.h>

/*
typeDeRetour nomFonction(int a , float b, char c ,....){
    logique de fonction
    return valeurDeretour
}
*/

float fonctionSansArg() {
  float a = 3, somme;
  somme = 2 * a;
  return somme;
}

float fonctionAvecArg(float a) {
  float somme = a * a * a;
  return somme;
}

float RecccupererA() {
  float a;
  printf("Veuillez saisir le reel dont vous souhaiter connaitre le cube : ");
  scanf(" %f", &a);
  return a;
}

int main() {
  float a, somme1, somme2, somme3, somme5, somme4;
  somme1 = fonctionSansArg();
  printf("la somme1 est : %.2f \n", somme1);

  a = RecccupererA();
  somme2 = fonctionAvecArg(a);
  printf("La valeur de somme2 est : %.2f : \n", somme2);

  a = RecccupererA();
  somme3 = fonctionAvecArg(a);
  printf("La valeur de somme3 est : %.2f : \n", somme3);

  a = RecccupererA();
  somme4 = fonctionAvecArg(a);
  printf("La valeur de somme4 est : %.2f \n", somme4);

  a = RecccupererA();
  somme5 = fonctionAvecArg(a);
  printf("La valeur de somme5 est : %.2f", somme5);
  return 0;
}