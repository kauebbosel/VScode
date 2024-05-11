/*Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento,
largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em
todas as suas paredes (considere que não será descontado a área ocupada por portas e
janelas). Cada caixa de azulejos possui 1,5 m2.*/

#include <stdio.h>

int main(){
    float compri, larg, alt, total;
    printf("digite compri, larg e altura\n");
    scanf("%f%f%f", &compri, &larg, &alt);
    total = (2*(compri*larg) + (compri*alt) + (larg*alt));
    printf("%f" ,total/1.5);
    }