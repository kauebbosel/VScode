/*Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.*/

#include <stdio.h>


void retornaValor(int *p1,int *p2)
{
    int v1, v2;
    v1 = *p1;
    v2 = *p2;
    if(*p2>*p1)
    {
        *p1 = v2;
        *p2 = v1;
    }
}
int main()
{
    int n1,n2;

    scanf("%d%d",&n1,&n2);

    retornaValor(&n1,&n2);
    printf("%d %d\n",n1,n2);
}