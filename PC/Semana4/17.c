/*Ler uma matriz n x n que representa a distância existente entre n cidades entre si. A seguir
ler um vetor de tamanho m, com os códigos das cidades de um trajeto. Escrever a distância
total percorrida.*/

#include <stdio.h>

int main()
{
    int coluna, linha,vetor,soma=0;
// ler a quant de cidades e  de códigos
    scanf("%d%d%d",&coluna,&linha,&vetor);

    int M[coluna][linha],V[vetor];
//ler a distância entre cidade i e j
    for(int i=0;i<coluna;i++)
    {
        for(int j=0;j<linha;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("h\n");
//ler os códigos das cidades
    for(int i=0;i<vetor;i++)
    {
        scanf("%d",&V[i]);
    }
//calcular, baseado no código, a distância total percorrida

    for(int i=0;i<vetor;i++)
    {
        printf("%d ",soma);
        int cidadeInicial = V[i];
        int cidadeFinal = V[i+1];
        soma = soma+M[cidadeInicial][cidadeFinal];
        printf("%d ",M[cidadeInicial][cidadeFinal]);
    }
   // printf("%d",soma);
}