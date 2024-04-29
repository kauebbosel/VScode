/*Escreve um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada
valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou
ÍMPAR. O algoritmo será encerrado imediatamente após a leitura de um valor NULO ou
NEGATIVO.*/

#include <stdio.h>

int main()
{
    int n1;

    do 
    {
        scanf("%d",&n1);
        if(n1>0)
        {
        printf("%d\n", n1);
        }

    } while(n1>0);

}