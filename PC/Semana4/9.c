/*Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o
penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.*/

#include <stdio.h>

int main()
{
    int k=1,U[10],posicao,valor=10;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&U[i]);
    }

    for(int j=0;j<5;j++)
    {
        int temp = U[j];
        U[j] = U[9 - j];
        U[9 - j] = temp;
    }
   
    for(int l=0;l<10;l++)
    {
       printf("%d ",U[l]);
    }
}