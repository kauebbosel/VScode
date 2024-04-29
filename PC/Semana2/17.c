/*Escreva um programa para ler as 4 notas obtidas por um aluno em 4 avaliações. Calcular a
média usando a seguinte fórmula:

Média=N1+N2∗2+N3∗3+N4/7

A seguir imprima a média e o conceito do aluno baseado na seguinte tabela:

Média Conceito
9,0 ou acima de 9,0 A
entre 7,5 (inclusive) e 9,0 B
entre 6,0 (inclusive) e 7,5 C
Abaixo de 6,0 D*/

#include <stdio.h>
int main()
{

    int n1,n2,n3,n4, media;


    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    media = (n1+(n2*2)+(n3*3)+n4)/7;
    if(media>=9)
    {
        printf("a");
    }
    if(media>=7.5 && media<9)
    {
        printf("b");
    }
    if(media>=6 && media<7.5)
    {
        printf("c");
    }
    if(media<6)
    {
        printf("d");
    }
}