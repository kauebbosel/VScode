/*Crie uma estrutura para armazenar os dados de círculos (ponto central e raio). Crie um
algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de círculos.*/

#include <stdio.h>
#define TAM 3


struct DadosCírculos{
    int pontoCentral[TAM], raio[TAM];
};
struct  DadosCírculos circulo;


int main()
{
    printf("Digite ponto central e raio");
    for(int i=0;i<TAM;i++){
        scanf("%d%d",&circulo.pontoCentral[i],&circulo.raio[i]);
        printf("circulo %d: %d %d\n",i+1, circulo.pontoCentral[i],circulo.raio[i]);
    }
    
}