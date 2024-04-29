/*Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo
é acutângulo, retângulo ou obtusângulo.
OBS: triângulo retângulo: possui um ângulo reto.
triângulo obtusângulo: possui um ângulo obtuso.
triângulo acutângulo: possui 3 ângulos agudos.*/

#include <stdio.h>

int main()
{
    int a,a2,a3,atotal;
    scanf("%d%d%d",&a,&a2,&a3);
    atotal = a+a2+a3;

    if(atotal>90)
    {
        printf("obtusângulo");
    }
    if(atotal<90)
    {
        printf("agudo");
    }
    if(atotal==90)
    {
        printf("retângulo");
    }
}