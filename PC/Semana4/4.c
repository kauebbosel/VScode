/*Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores
negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.*/

#include <stdio.h>
int main()
{
    int vetor[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(vetor[i]<0)
        {
            vetor[i] = 0;
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",vetor[i]);
    }
}