#include <stdio.h>

int main() {
    long long nombre;
    int frequence[10] = {0}; // tableau pour stocker la fréquence de 0 à 9
    int chiffre;

    printf("Entrez un nombre : ");
    scanf("%lld", &nombre);

    if (nombre < 0) {
        nombre = -nombre; // gérer les nombres négatifs
    }

    if (nombre == 0) {
        frequence[0] = 1;
    }

    while (nombre > 0) {
        chiffre = nombre % 10;   // extraire le dernier chiffre
        frequence[chiffre]++;    // incrémenter la fréquence
        nombre /= 10;            // supprimer le dernier chiffre
    }

    printf("Fréquence des chiffres :\n");
    for (int i = 0; i < 10; i++) {
        if (frequence[i] > 0) {
            printf("Chiffre %d : %d fois\n", i, frequence[i]);
        }
    }

    return 0;
}
