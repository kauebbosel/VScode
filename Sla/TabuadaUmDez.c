#include <stdio.h>


int main(){

    int valor,y,i;

        printf("digite o valor");
        scanf("%d", &valor);
    while(valor>=11 || valor<1){
        printf("Valor inválido");
        scanf("%d", &valor);}

    i=1;

    for(i=1; i<=10; i++){
        printf("%d\n", valor*i);
    }


    

}