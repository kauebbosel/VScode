/*Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). Escrever
para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou
decrescente. A repetição será encerrada ao ser fornecido para os elementos da dupla valores
iguais.*/

#include <stdio.h>

int main()
{
   int n1,n2;
   
   do 
   {
    scanf("%d%d",&n1,&n2);
    if(n2>n1)
    {
        printf("crescente\n");
        printf("%d %d\n",n1,n2);
    } else if(n1>n2)
        {
            printf("decrescente\n");
            printf("%d %d\n",n1,n2);
        }
   } while (n1!=n2);
}