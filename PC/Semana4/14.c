/*Ler um vetor de até 20 elementos. A leitura deverá ser executada até que o vetor fique
preenchido, ou seja informado um valor negativo ou zero. Ler 2 valores que representam 2
posições (índices) no vetor (aceitar apenas índices válidos), escrever os valores nas posições
entre estes índices (inclusive).*/

#include <stdio.h>
int main()
{
    int var,pos,pos2,i=0,V[20];

       while(i<20)
    {
        i++;
        scanf("%d",&V[i]);
        if(V[i]<=0)
        {
            break;
        }
    }
    
    scanf("%d",&pos);
    while(pos<0 || pos>20)
    {
        scanf("%d",&pos);
    }

    scanf("%d",&pos2);
    while(pos2<0 || pos2>20)
    {
        scanf("%d",&pos2);
    }

    while(pos>pos2)
    {
        scanf("%d%d",&pos,&pos2);
    }

    while(pos<=pos2)
    {
        printf("%d ",V[pos]);
        pos++;
    }
}