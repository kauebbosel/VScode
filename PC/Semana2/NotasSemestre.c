/*Escreva um programa para ler as notas das duas avaliações de um aluno no semestre,
calcular e escrever a média semestral e uma mensagem indicando se ele foi aprovado,
reprovado ou está em exame.*/

#include <stdio.h>

int main(){
    int prova1,prova2,media;
    scanf("%d%d", &prova1,&prova2);
    media = (prova1+prova2)/2;
    if(media>=7){
        printf("aprovado %d", media);
        }

    if(media<5){
        printf("reprovado %d", media);
        }

    if(media>=5 && media<7){
        printf("exame %d",media);
        }
    
}