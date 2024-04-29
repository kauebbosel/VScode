#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, pares;

    printf("Digite numero");
    scanf("%d", &x);

    pares = (x % 2);

    if(x>0){
        printf("Positivo");}
        if(x<0){
            printf("Negativo");}
            if(x==0){
                printf("Zero");}


    if(pares==0){
        printf("\nPar");}
        else{
            printf("\nÍmpar");}
        

    


}
