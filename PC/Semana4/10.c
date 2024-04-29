/*Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o
7o.,etc. até o 5o. com 10o. e escreva o vetor M assim modificado.*/

#include <stdio.h>

int main()
{
    int armazem,M[10];

    for(int k=0;k<10;k++)
    {
        scanf("%d",&M[k]);
    }

    for(int i=0;i<5;i++)
    {
        armazem = M[i];
        M[i] = M[5+i];
        M[5+i] = armazem;
    }

    for(int j=0;j<10;j++)
    {
        printf("%d ",M[j]);
    }
}