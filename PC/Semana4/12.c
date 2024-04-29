/*-Ler 2 vetores X e Y de 10 elementos cada um (ocupando as posições de 0 a 9 em cada
vetor). Intercalar os elementos desses 2 vetores formando assim, um novo vetor R de 20
elementos, onde nas posições pares de R (0,2,4,6,8,...) estejam os elementos de X e nas
posições ímpares (1,3,5,7,9,...) os elementos de Y. Após a geração completa do vetor R,
escreva-o.*/

#include <stdio.h>

int main()
{
    int X[10], Y[10], R[20];

    for(int i=0;i<10;i++)
    {
        scanf("%d%d",&X[i],&Y[i]);
    }
    
  /*  for(int i=0;i<20;i++)
    {
        if(i%2!=0)
        {
            R[i] = X[i];
        } if(i%2==0)
            {
                R[i] = Y[i];
            }
            printf("%d ",R[i]);
    }
    */

       for (int i = 0; i < 20; i++) {
        if (i % 2 != 0) {
            R[i] = X[i / 2];  // Usar i / 2 para obter os índices corretos de X
        } else {
            R[i] = Y[i / 2];  // Usar i / 2 para obter os índices corretos de Y
        }
    }

    for(int i=0;i<20;i++)
    {
        printf("%d ",R[i]);

    }

}