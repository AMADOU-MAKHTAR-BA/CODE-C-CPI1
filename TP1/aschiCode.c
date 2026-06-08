#include <stdio.h>

int main (){
    char char1 , char2;
    printf("Veuillez saisir la valeur du premier character");
    scanf("%c",&char1);
    printf("Veuillez saisir la valeur du deuxieme character");
    scanf("%c",&char2);
    if((char1<91&&char2<91)||(char1>97&&char2>97)){
        if(char1<char2){
            printf("%c ");
        }
    }

    return 0;
}