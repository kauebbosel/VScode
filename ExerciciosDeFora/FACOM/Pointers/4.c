/*Fac¸a um programa que leia 2 valores inteiros e chame uma funcao que receba estas 
2 variaveis e troque o seu conteudo, ou seja esta funcao e chamada passando duas 
variaveis A e B por exemplo e apos a execucao da funcao, A contera o valor de B e B ´
tera o valor de A. */
#include <stdio.h>

void trocarNumeros(int *v1,int *v2)
{
    int potTroca;

    potTroca = *v2;
    *v2 = *v1;
    *v1 = potTroca;

}


int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);

    trocarNumeros(&n1, &n2);

    printf("%d %d",n1,n2);
}


