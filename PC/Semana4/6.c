/*Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V
ocorre no vetor A.*/

#include <stdio.h>
int main()
{
    int A[10],val,contador=0;

    scanf("%d",&val);
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
        if(val==A[i])
        {
            contador = contador+1;
        }
    }
    printf("%d",contador);
}