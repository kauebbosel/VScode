/*Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros 10, 20, 30,
40, 50, ..., 100. Escrever o vetor A após o seu total preenchimento.*/

#include <stdio.h>
int main()
{
    int mult=1,vetor[10];

    for(int i=1;i<11;i++)
    {
        mult = i*10;
        vetor[i] = mult;
        printf("%d\n",vetor[i]);
    }
}