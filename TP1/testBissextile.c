#include <stdio.h>
int b(int a){
    if ((a%4==0 && a%100==0)||(a%400==0))
    {
       return 1;
    }
    return 0;
}
int main() {
    int a;
    printf("Saisir a : \n");
    scanf("%d",&a);
    if(b(a)){
        printf("true true \n");
    }else{
        printf("false false");
    }
    return 0;
}