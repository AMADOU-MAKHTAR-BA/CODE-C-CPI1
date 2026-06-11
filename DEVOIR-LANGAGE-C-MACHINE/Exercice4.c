#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char codeEtu[10];
  char nom[25];
  char prenom[25];
} InfosPerso;
typedef struct {
  char nom[25];
  float note;
} Module;
typedef struct {
  InfosPerso info;
  int nbreModule;
  Module* module;
  float moyenneGenerale;
  float mention;
} Etudiant;

void remplirInfosEtudiant(Etudiant* E, int nbrEtu, int nbrMod) {
  printf(
      "--Veuillez fournir les informations suivantes pour enregistrer "
      "successivement les etudiants--\n");
  for (int i = 0; i < nbrEtu; i++) {
    printf("ETUDIANT : %d\n", i + 1);
    printf("CODE ETUDIANT : ");
    fgets(E[i].info.codeEtu, sizeof(E[i].info.codeEtu), stdin);
    printf("NOM : ");
    fgets(E[i].info.nom, sizeof(E[i].info.nom), stdin);
    printf("PRENOM : ");
    fgets(E[i].info.prenom, sizeof(E[i].info.prenom), stdin);
    for (int j = 0; j < nbrMod; j++) {
      printf("Module %d : ", j + 1);
      printf("Nom module : ");
      fgets(E[i].module[j].nom, sizeof(E[i].module[j].nom), stdin);
      printf("Note module : ");
      scanf("%f", &E[i].module[j].note);
    }
  }
}
void afficherInfoEtudiant(Etudiant* E, int nbrEtu, int nbrMod) {
  for (int i = 0; i < nbrEtu; i++) {
    printf("ETUDIANT : %d", i + 1);
    printf("CODE ETUDIANT : ");
    puts(E[i].info.codeEtu);
    printf("NOM : ");
    puts(E[i].info.nom);
    printf("PRENOM : ");
    puts(E[i].info.prenom);
    for (int j = 0; j < nbrMod; j++) {
      printf("Module %d : ", j + 1);
      printf("Nom module : ");
      puts(E[i].module[j].nom);
      printf("Note module : ");
      printf("%f", E[i].module[j].note);
    }
  }
}
int main() {
  int nombreEtudiant, nombreModule;
  printf("Veuillez saisir le nombre d'etudiant : ");
  scanf(" %d", &nombreEtudiant);
  while ((nombreEtudiant < 0)) {
    printf("Le nombre d'etudiant doit etre strictement positif : ");
    scanf(" %d", &nombreEtudiant);
  }
  printf("Veuillez saisir le nombre de module : ");
  scanf(" %d", &nombreModule);
  while ((nombreModule < 0)) {
    printf("Le nombre d'etudiant doit etre strictement positif : ");
    scanf(" %d", &nombreModule);
  }
  getchar();
  Etudiant* lesEtudiant = calloc(nombreEtudiant, sizeof(Etudiant));
  if (lesEtudiant == NULL) {
    printf("Erreur lors de l'allocation du memoire pour les etudiants");
    exit(EXIT_FAILURE);
  }
  remplirInfosEtudiant(lesEtudiant, nombreEtudiant, nombreModule);
  afficherInfoEtudiant(lesEtudiant, nombreEtudiant, nombreModule);

  free(lesEtudiant);
  return 0;
}
