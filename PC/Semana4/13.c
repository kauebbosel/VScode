/*Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique
preenchido, ou seja informado um valor negativo ou zero. Calcular e imprimir a soma dos
valores maiores que 5 existentes no vetor.*/

#include <stdio.h>

int main()
{
    int valorMaior,i=0,V[10];

    while(i<10)
    {
        i++;
        scanf("%d",&V[i]);
        if(V[i]>5)
        {
            valorMaior = valorMaior + V[i];
        }
        if(V[i]<=0)
        {
            break;
        }
    }
    
    printf("%d",valorMaior);

}