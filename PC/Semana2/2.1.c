/*Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for
diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO.
Quando o número 0 for fornecido a repetição de ser encerrada sem imprimir mensagem
alguma. Utilize do...while().*/

#include <stdio.h>

int main()
{
    int n1;

    do
    {   
        scanf("%d",&n1);

        if(n1>0)
        {
            printf("positivo\n");
            printf("%d\n",n1);
        }
            else if(n1<0)
            {
                printf("negativo\n");
                printf("%d\n",n1);
            }
    
    }while (n1!=0);


}