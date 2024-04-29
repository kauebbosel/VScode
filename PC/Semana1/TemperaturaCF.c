/*Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit.*/

#include <stdio.h>

int main(){
    float cel;
    scanf("%f", &cel);
    cel = cel/5;
    printf("%f", cel*9+32);
}