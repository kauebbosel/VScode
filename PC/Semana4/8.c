/*Ler um vetor Q de 10 posições (aceitar somente números positivos). Escreva a seguir o valor
do maior elemento de Q e a respectiva posição(índice) que ele ocupa no vetor.*/

#include <stdio.h>

int main()
{
    int Q[10],maiorvalor,posicao;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&Q[i]);
        if(Q[i]>maiorvalor)
        {
            maiorvalor = Q[i];
            posicao = i;
        }
    }
    printf("%d %d",maiorvalor,posicao);
}