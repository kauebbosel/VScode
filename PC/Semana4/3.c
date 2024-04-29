/*Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for
par. Escrever o vetor B após o seu total preenchimento.*/

#include <stdio.h>
int main()
{
    int vetor[10],valor;

    for(int i=0;i<10;i++)
    {
        valor = i%2;
        if(valor==0)
        {
            vetor[i] = 10;
        }
        if(valor==1)
        {
            vetor[i] = 20;
        }
        printf("%d\n",vetor[i]);
    }
}