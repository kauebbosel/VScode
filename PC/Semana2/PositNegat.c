/*Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o
valor zero como positivo.*/

#include <stdio.h>
int main(){
    int valor;

    scanf("%d", &valor);

    if(valor>=0){
    printf("positivo");}
    if(valor<0){
    printf("negativo");}
}