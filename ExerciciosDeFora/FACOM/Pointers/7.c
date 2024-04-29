/*Crie um programa que contenha uma funcao que permita passar por parametro dois 
numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e ´
armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.*/

#include <stdio.h>

void soma_dois (int *pot, int *pot2);

int main(){
    int a,b;

    scanf("%d%d",&a,&b);

    soma_dois(&a,&b);
    printf("%d %d", a,b);
}


void soma_dois (int *pot, int *pot2){
    *pot = *pot + *pot2;
}
