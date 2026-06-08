#include <stdio.h>

int nIemeChiffre(){
    
    long number;
    int i, nIeme, chiffre;

    printf("Veuillez saisir votre entier : \n");
    scanf("%ld", &number);
    printf("Vous voulez connaitre le chiffre de quel rang : \n");
    scanf("%d", &nIeme);
    if(nIeme==0){
        chiffre=number%10;
        printf("Le chiffre correspondant au rang 0 ( rang des unites ) est : %d \n",chiffre);
        return 0;
    }
    for(i=0; i<nIeme; i++){
        number=number/10;
    }
    chiffre=number%10;
     printf("Le chiffre correspondant au rang %d  est : %d \n",nIeme ,chiffre);
    return chiffre;
}

int nombreChiffre(){

     long number;
    int compteur = 0;

    printf("Veuillez saisir l'entier dont vous voulez connaitre le nombre de chiffre : \n");
    scanf("%ld", &number);
    while (number > 10 || number < -10)
    {
        number = number / 10;
        compteur++;
    }
    compteur++;
    printf("Votre contient : %d chiffres \n", compteur);
    return compteur;
}

int main(){
    nombreChiffre();
    nIemeChiffre();
    return 0;
}