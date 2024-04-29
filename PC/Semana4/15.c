/*Ler uma matriz A de L linhas por C colunas. Gerar e imprimir uma matriz T transposta de A.*/

#include <stdio.h>
int main()
{
    int C, L;
    scanf("%d%d",&C,&L);

    int A[C][L], T[L][C];

    for(int i=0;i<C;i++)
    {
        for(int j=0;j<L;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<L;j++)
        {
            T[i][j] = A[j][i];
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
}