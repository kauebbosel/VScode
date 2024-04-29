/*A sua tarefa é desenvolver a função soma_primos, que recebe n (quantidade de números primos) 
e devolve, por referência, os números primos (vetor primos) e, por return, a soma destes números primos.*/
#include <stdio.h>
#define TAM 1000

int soma_primos(int n, int primos[TAM]);
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < ;j++)
        {

        }
    }
}

int main() 
{
    int n, i, soma;
    int primos[TAM];

    scanf("%d", &n);
    soma = soma_primos(n, primos);
    for (i = 0; i < n; i++)
        printf("%d ", primos[i]);
    printf("\n%d", soma);
    return 0;
}
