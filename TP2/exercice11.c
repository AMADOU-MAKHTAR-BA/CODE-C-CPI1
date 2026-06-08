#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float largeur;
  float longueur;
  float epaisseur;
  int type;
} Panneau;

Panneau saisirPanneau() {
  Panneau p;
  printf("Veuillez renseigner les caracteristiques de votre panneau\n");
  printf("Largeur (mm) : ");
  scanf("%f", &p.largeur);

  printf("Longueur (mm) : ");
  scanf("%f", &p.longueur);

  printf("Epaisseur (mm) : ");
  scanf("%f", &p.epaisseur);
  printf("Type (0: pin, 1: chene, 2: hetre): ");
  scanf("%d", &p.type);
  while (p.type < 0 || p.type > 2) {
    printf(
        "Le tyde votre panneau ne peut etre que parmis ces valeurs : (0: pin, "
        "1: chene, 2: hetre) : ");
    scanf("%d", &p.type);
  }

  return p;
}

void afficherPanneau(Panneau p) {
  printf("\nVotre panneau a les caracteristiques suivants : \n");
  printf("Largeur : %.2f mm\n", p.largeur);
  printf("Longueur : %.2f mm\n", p.longueur);
  printf("Epaisseur : %.2f mm\n", p.epaisseur);

  printf("Type de bois : ");
  switch (p.type) {
    case 0:
      printf("Pin\n");
      break;
    case 1:
      printf("Chene\n");
      break;
    case 2:
      printf("Hetre\n");
      break;
  }
  printf("\n");
}

float volumePanneau(Panneau p) {
  return (float)(p.largeur / 1000) * (p.longueur / 1000) * (p.epaisseur / 1000);
}

int main() {
  Panneau myPanneau;
  float volume;

  myPanneau = saisirPanneau();

  afficherPanneau(myPanneau);

  printf("Le volume de votre panneau ( longueur*largeur*epaisseur ) est :");
  volume = volumePanneau(myPanneau);
  printf("Volume : %.6f m^3\n", volume);

  return 0;
}