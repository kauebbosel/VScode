/*A sua tarefa é desenvolver a função numeros_amigos, que recebe n (limite de valor dos números amigos) 
e devolve, por referência, os pares de amigos (matriz pares_amigos) e a quantidade de pares encontrados (q).*/

#include <stdio.h>
#define TAM 1000

void numeros_amigos(int n, int amigos[TAM][2], int *q);

int main() {
    int n, i, q;
    int pares_amigos[TAM][2];

    scanf("%d", &n);
    numeros_amigos(n, pares_amigos, &q);
    for (i = 0; i < q; i++)
        printf("(%d,%d)\n", pares_amigos[i][0], pares_amigos[i][1]);

    return 0;
}

void numeros_amigos(int n, int amigos[TAM][2], int *q)
{
    for (int i = 1; i <= n; i++)
    {
        int somadivisor = 0;
        int somadivisor2 = 0;

        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                somadivisor += j;
            }
        }

        for (int k = 1; k <= somadivisor / 2; k++)
        {
            if (somadivisor % k == 0)
            {
                somadivisor2 += k;
            }
        }

        if (somadivisor2 == i && somadivisor != somadivisor2)
        {
            amigos[*q][0] = i;
            amigos[*q][1] = somadivisor;
            (*q)++;
        }
    }
}
void numeros_amigos(int n, int amigos[TAM][2], int *q)
{
    int contadorAmigos=0,somadivisor=0,somadivisor2=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                somadivisor += i;
            }

            if(n%i==0)
            {
                somadivisor2 += i;
            }

            if(somadivisor==somadivisor2)
            {
                amigos[*q][0] = somadivisor;
                amigos[*q][1] = somadivisor2;
                *q = *q+1;
            }
        }
    }
}
