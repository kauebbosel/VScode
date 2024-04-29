/*Escreva um algoritmo que imprima toda a tabuada (de 1 a 10) utilizando uma estrutura de
repetição.*/

#include <stdio.h>
int main()
{
    int i=1;

    for(i=1;i<=10;i++) {
        for(int j=0;j<=10;j++) {
        printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}