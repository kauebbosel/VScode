/*Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é
EQUILÁTERO, ISÓSCELES ou ESCALENO.*/
#include <stdio.h>
int main()
{
    int lado,lado2,lado3;

    scanf("%d%d%d", &lado,&lado2,&lado3);

    if(lado!=lado2 && lado2!=lado3 && lado!=lado3)
    {
        printf("escaleno");
    }

    if(lado==lado2 && lado2!=lado3 || lado==lado3 && lado3!=lado2 || lado2==lado3 && lado3!=lado)
    {
        printf("isosceles");
    }

    if(lado==lado2 && lado2==lado3)
    {
        printf("equilátero");
    }
}