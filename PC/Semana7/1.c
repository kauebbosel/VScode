/*Construa uma estrutura para armazenar pontos (coordenadas x e y) no plano cartesiano. Crie
um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de pontos.*/

#include <stdio.h>

#define TAM 3

struct PlanoCartesiano{
    int cordX[TAM],cordY[TAM];

};

struct PlanoCartesiano plano;


int main(){

    for(int i=0;i < TAM; i++){
        printf("Digite X então Y\n");
        scanf("%d%d",&plano.cordX[i],&plano.cordY[i]);
        printf("Coordenadas X:%d Y:%d\n",plano.cordX[i],plano.cordY[i]);
    }

}