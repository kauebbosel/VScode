/*Ler uma matriz 5 x 5. Trocar os elementos das colunas pares com os elementos das colunas
ímpares subsequentes (0 e 1, 2 e 3, até 4 e 5). Após o término das trocas escrever a matriz.*/

#include <stdio.h>

int main()
{
    int M[5][5];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            M[i][j] = M[i+1][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

}