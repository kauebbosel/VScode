/*Crie uma estrutura para armazenar os dados de retângulos (pontos diagonais inferior- esquerda e superior-direita). 
Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de retângulos.*/

#include <stdio.h>
#define TAM 3


struct DadosRetangulos{
    int diagonalInferiorEsq[TAM], diagonalSuperiorDir[TAM];

};
struct DadosRetangulos retangulo;



int main(){
    for(int i=0;i<TAM;i++){
        scanf("%d%d",&retangulo.diagonalInferiorEsq[i],&retangulo.diagonalSuperiorDir[i]);
        printf("%d %d\n",retangulo.diagonalInferiorEsq[i], retangulo.diagonalSuperiorDir[i]);
    }
}