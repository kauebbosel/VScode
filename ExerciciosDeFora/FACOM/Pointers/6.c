/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ ˜ao
que retorne a soma do dobro dos dois n´umeros lidos. A func¸ ˜ao dever ´a armazenar o dobro
de A na pr ´opria vari ´avel A e o dobro de B na pr ´opria vari ´avel B.*/

#include <stdio.h>

void soma_dobro(int *p1, int *p2)
{
    int v1,v2;

    v1 = *p1 *2;
    v2 = *p2 *2;

    *p1 = v1;
    *p2 = v2;
}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    soma_dobro(&a,&b);
    
    printf("%d %d\n",a, b);
}