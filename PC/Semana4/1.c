/*Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30. Escrever o
vetor X, após seu total preenchimento.*/

#include <stdio.h> 
int main()
{
    int vetor[10];

    for(int i=0;i<10;i++)
    {
        vetor[i] = 30;
    }
    for(int j=0;j<10;j++)
    {
        printf("%d\n",vetor[j]);
    }
}