/*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os
elementos comuns a R e a S. Considere que no mesmo vetor não haverá números repetidos.
Escrever o vetor X.*/

#include <stdio.h>

int main()
{
    int R[5],S[10],X[5];

    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &R[i]);
    }   

    for(int i=0;i<10;i++)
    {
        scanf("%d",&S[i]);
        X[i] = 0;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(R[i]==S[j])
            {
                X[i] = R[i];
            } 
        }   
    }
    
    for(int i=0;i<5;i++)
    {   
        printf("%d ",X[i]);
    }
}