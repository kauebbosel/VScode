/*Escreva um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e
escrever o quadrante ao qual o ponto pertence. Considere que o usuário não informará
nenhuma coordenada igual a zero.*/

#include <stdio.h>
int main(){
    int x,y;

    scanf("%d%d",&x,&y);

    if(x>0)
    {
        if(y>0)
        {
            printf("quadrante 1");
        }
            else
            {
                if(y<0)
                {
                    printf("quadrante 4");
                }
            } 
    }

    if(x<0) 
    {
        if(x<0)
        {
            printf("quadrante 2");
        }
        else
        {
            if(x>0)
            printf("quadrante 3");
        }
    }
}