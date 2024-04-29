/*Ler um valor A e um valor N. Imprimir a soma dos N números inteiros a partir de
A(inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N(apenas N).*/
#include <stdio.h>

int main()
{
    int A,N,soma=0;
    scanf("%d%d",&A,&N);

    do
    {
        soma = soma+A;
        A = A +1;
        printf("%d\n",soma);
    } while(N>=A);
}