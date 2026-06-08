#include <stdio.h>
void anneeBissextile(){
    long annee;
    printf("Veuillez saisir une annees pour verifier s'elle est bissextile ou non : ");
scanf("%ld" , &annee);
if((annee%400==0)||(annee%4==0 && annee%100!=0)){
   printf("L'annee fournie ( %ld ) est bissextile" , annee);
}else{
    printf("L'annee fournie ( %ld ) n'est pas bissextile" , annee);
}
}
int main(){
    anneeBissextile();
    return 0;
}