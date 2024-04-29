/*Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura
com teste de saída no início da repetição while().*/

#include <stdio.h>

int main()
{

    int n1;

    scanf("%d", &n1);
    if(n1>0)
    {
        printf("positivo:");
        printf("%d\n",n1);
    } else if(n1<0)
    {
        printf("negativo:");
        printf("%d\n",n1);
    }

    while (n1!=0)
    {
        scanf("%d",&n1);

        if(n1>0)
        {
            printf("positivo:%d\n",n1);

        } else if (n1<0)
            {
                printf("negativo:%d\n",n1);

            }
        
    }
}