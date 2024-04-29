/*Escreva um programa em C para ler uma quantidade indeterminada de raios de
circunferências. Para cada raio informado calcular e escrever o comprimento da respectiva
circunferência. O programa deve ser encerrado ao ser fornecido para o raio um valor nulo ou
negativo (nesta situação o comprimento não deve ser calculado).*/

#include <stdio.h>

int main()
{
    float raio;

    do 
    {
        scanf("%f",&raio);
        if (raio>0)
        {
            printf("circunferencia:%f\n", raio*6.28);
        }
    } while (raio>0);
}