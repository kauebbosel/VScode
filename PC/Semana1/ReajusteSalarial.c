/*Escreva um programa para ler o salário mensal e o percentual de reajuste. Calcular e
escrever o valor do novo salário. */

#include <stdio.h>

int main(){
    float salário;

    scanf("%f", &salário);
    printf("%f", salário+(salário*0.09));
}