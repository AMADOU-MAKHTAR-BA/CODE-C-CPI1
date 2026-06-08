#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nom[50];
  char prenom[50];
  char num[15];
  int age;
} Contact;

int nombreDeContact() {
  int a;
  printf(
      "Veuillez saisir le nombre de contact(s) que vous voulez enregistrer : ");
  scanf("%d", &a);
  getchar();
  return a;
}

void afficherContacts(Contact* p, int a) {
  for (int i = 0; i < a; i++) {
    printf("------ contact %d ------- \n", i + 1);
    printf("NOM : %s", p[i].nom);
    printf("PRENOM : %s", p[i].prenom);
    printf("MUMERO : %s", p[i].num);
    printf("AGE : %d \n", p[i].age);
  }
}

Contact* enregistrerContact(int a) {
  Contact* contacts = calloc(a, sizeof(Contact));

  if (!contacts) {
    printf(
        "Erreur lors de la reservatio dynamique pour l'enregistrement des "
        "contacts!!!");
    exit(EXIT_FAILURE);
  }

  printf(
      "Veillez remplir les informations suivantes pour enregistrer vos "
      "contacts \n");
  for (int i = 0; i < a; i++) {
    printf("________ contact %d ___________\n", 1 + i);
    printf("NOM : ");
    fgets(contacts[i].nom, 50, stdin);
    printf("PRENOM : ");
    fgets(contacts[i].prenom, 50, stdin);
    printf("NUMERO : ");
    fgets(contacts[i].num, 15, stdin);
    printf("AGE : ");
    scanf("%d", &contacts[i].age);
    getchar();
    printf("contact %d enregistre avec succes \n", i + 1);
  }

  return contacts;
}
void recherchercontactParNom(Contact* p, int a) {
  char recherche[50];
  int j = 0;

  Contact* p1 = calloc(a, sizeof(Contact));

  printf("Veuillez saisir le nom d'un contact dont vous voulez rechercher : ");
  fgets(recherche, 50, stdin);

  for (int i = 0; i < a; i++) {
    if (strcmp(recherche, p[i].nom) == 0) {
      puts(p[i].nom);
      p1[j] = p[i];
      j++;
    }
  }

  if (j == 0) {
    printf("Aucun contact trouve\n");
    free(p1);
    return;
  }

  Contact* p2 = realloc(p1, j * sizeof(Contact));
  if (!p2) {
    printf("Erreur lors de l'allocation dynamique\n");
    free(p1);
    exit(EXIT_FAILURE);
  }
  printf("Le nombre de contact(s) trouve(s) est \n");
  afficherContacts(p2, j);
  free(p2);
}

void rechercherContactParAge(Contact* p, int a) {
  int j = 0;
  Contact* temp = malloc(a * sizeof(Contact));
  for (int i = 0; i < a; i++) {
    if (p[i].age >= 30) {
      temp[j] = p[i];
      j++;
    }
  }
  if (j == 0) {
    printf("Aucun contact n'a une age strictement superieure a 30 ans ");
    return;
  }

  Contact* contactsTrouves = realloc(temp, j * sizeof(Contact));
  if (!contactsTrouves) {
    printf(
        "Erreur lors de la reservation dynamique pour les ages superieures a "
        "30 ans");
    free(temp);
    exit(EXIT_FAILURE);
  }
  printf("Les contcts dont l'age est superieures a 30 ans sont : \n");
  afficherContacts(contactsTrouves, j);
  free(contactsTrouves);
}
int main() {
  int nombreContact;
  Contact* mesContacts;
  nombreContact = nombreDeContact();
  mesContacts = enregistrerContact(nombreContact);
  printf("\nVos contacts enregistrez sont : \n");
  afficherContacts(mesContacts, nombreContact);
  recherchercontactParNom(mesContacts, nombreContact);
  rechercherContactParAge(mesContacts, nombreContact);
  printf(
      "Liberations des espaces reservees. Alors merci a qui? Merci a free().");
  free(mesContacts);
  return 0;
}