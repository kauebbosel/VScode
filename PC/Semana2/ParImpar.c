/*Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar.*/

#include <stdio.h>
int main(){
    int nmr,resto;
    scanf("%d", &nmr);
    resto = nmr%2;
    if(resto!=0){
        printf("impar");
    }else{
        printf("par");
    }
}