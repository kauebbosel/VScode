/*Escreva um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e
escrever o quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na
origem, escrever NÃO ESTÁ EM NENHUM QUADRANTE. Considere que o usuário
poderá informar qualquer valor para as coordenadas.*/

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

    if(x==0 || y==0)
    {
        if(y==0 && x==0)
        {
            printf("está na origem");
        }
        else
        {
            if(y!=0 || x!=0)
            {
                printf("não está em nenhum quadrante");
            }
        }
    }
}