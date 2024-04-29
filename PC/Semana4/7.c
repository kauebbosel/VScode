/*Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o
vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.*/

#include <stdio.h>

int main()
{
    int X[10],R[10],contador;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&X[i]);
    }      
    
    for(int j=0;j<10;j++)
    {
        if(X[j]<0)
        {
            R[contador] = X[j];
            contador = contador+1;
        }
    }
    for(int h=0;h<10;h++)
    {
        printf("%d ",R[h]);
    }
}