/*Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de
ordem par de Y (elementos com índice 0,2,4,6,8) receberão os respectivos elementos de X
multiplicados por 2. Os elementos de ordem ímpar de Y (elementos com índices 1,3,5,7,9)
receberão os respectivos elementos de X multiplicados por 3. Escrever o vetor Y.*/

#include <stdio.h>
int main()
{
    int val,X[6],Y[6];

    for(int i=1;i<7;i++)
    {
        scanf("%d",&X[i]);
    }
    for(int j=1;j<7;j++)
    {
        if(j%2==0)
        {
            Y[j] = X[j]*2;
            printf("%d ",Y[j]);
        } if(j%2==1)
        {
            Y[j] = X[j]*3;
            printf("%d ",Y[j]);
        }
    }
}